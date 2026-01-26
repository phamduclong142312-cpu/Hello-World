#include <iostream>
#include <stdio.h>
#include <string.h>
struct ngay{
    int ngay;
    int thang;
    int nam;
};
typedef struct ngay NS;

void nhapNS(NS *p){
    scanf("%d %d %d",&p->ngay, &p->thang, &p->nam);
}

void XuatNs(NS a){
    printf("Sinh vao %d/%d/%d", a.ngay, a.thang, a.nam);
}

struct SinhVien{
    char MSSV[20];
    char hoten[50];
    int tuoi;
    float GPA;
    NS ngaysinh;
};
typedef struct SinhVien SV;

void nhapSV(SV *p){
    printf("Nhap MSSV: "); scanf("%s",p->MSSV);
    getchar();

    printf("Nhap ho ten: ");
    fgets(p->hoten, sizeof(p->hoten), stdin);
    p->hoten[strcspn(p->hoten, "\n")] = '\0';

    printf("Nhap tuoi: "); scanf("%d",&p->tuoi);
    do{printf("Nhap GPA: "); scanf("%f",&p->GPA);}
    while(p->GPA < 0 || p->GPA > 4);
    printf("Nhap ngay thang nam sinh: "); nhapNS(&p->ngaysinh);
}

void PhanLoai(SV a){
    if (a.GPA < 2.0) printf("Yeu");
    else if (a.GPA < 2.5) printf("Trung binh");
    else if (a.GPA < 3.2) printf("Kha");
    else if (a.GPA < 3.6) printf("Gioi");
    else printf("Xuat sac");
}

void XuatSV(SV p){
    printf("MSSV: %s\n", p.MSSV);
    printf("Ho va ten: %s\n", p.hoten);
    printf("Tuoi: %d\n", p.tuoi);
    printf("GPA: %.2f\n",p. GPA);
    printf("Diem theo thang 10: %.2f\n", p.GPA * 2.5);
    printf("Xep loai: "); PhanLoai(p); printf("\n");
    XuatNs(p.ngaysinh);
    printf("\n\n");
}

void ThongKe(int n, SV a[]){
    int XS =0, Gioi = 0, Kha = 0, Tb = 0, Yeu = 0;
    for(int i=0; i<n; i++){
        if(a[i].GPA < 2) Yeu+=1 ;
        else if(a[i].GPA < 2.5) Tb+=1 ;
        else if(a[i].GPA < 3.2) Kha+=1 ;
        else if(a[i].GPA < 3.6) Gioi+=1 ;
        else XS+=1 ;
    }
    printf("\n");
    printf("----------THONG KE SINH VIEN THEO XEP LOAI----------\n");
    printf("So sinh vien loai Xuat sac: %d\n",XS);
    printf("So sinh vien loai Gioi: %d\n",Gioi);
    printf("So sinh vien loai Kha: %d\n",Kha);
    printf("So sinh vien loai Trung binh: %d\n",Tb);
    printf("So sinh vien loai Yeu: %d\n",Yeu);
    printf("\n");
}

void Menu(){
    printf("==========DANH SACH CHUC NANG==========\n");
    printf("1. Nhap mang sinh vien.\n");
    printf("2. Xuat mang sinh vien.\n");
    printf("3. Tim sinh vien co GPA cao nhat.\n");
    printf("4. Sap xep sinh vien theo GPA.\n");
    printf("5. Tim kiem sinh vien theo MSSV.\n");
    printf("6. Thong ke so luong sinh vien theo xep loai.\n");
    printf("7. Xuat bang du lieu sinh vien.\n");
    printf("8. Them sinh vien.\n");
    printf("9. Sua sinh vien.\n");
    printf("10. Loc sinh vien theo khoang GPA.\n");
    printf("11. In ra danh sach cac sinh vien bi canh bao hoc vu.\n");
    printf("12. Xoa sinh vien theo MSSV.\n");
    printf("13. Thoat.\n");
    printf("=======================================\n");
}

void BangSV(int n, SV a[]){
    printf("|%-5s| %-12s| %-25s| %-5s|\n", "STT", "MSSV", "Ho va ten", "GPA");
    for(int i=0; i<n; i++){
        printf("|%-5d| %-12s| %-25s| %-5.2f|\n",i+1,a[i].MSSV,a[i].hoten,a[i].GPA);
    }
}

void MaxGPA(int n, SV a[]){
    SV A = a[0];
    float max = a[0].GPA;
    for(int i=1; i<n; i++){
        if(a[i].GPA > max){
            max = a[i].GPA;
            A = a[i];
        }
    }
    printf("Sinh vien co GPA cao nhat la: \n");
    XuatSV(A);
}

void SortGiam(int n, SV a[]){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i].GPA < a[j].GPA){
                SV tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

void SortTang(int n, SV a[]){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i].GPA > a[j].GPA){
                SV tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

void themSV(SV a[], int *n){
    nhapSV(&a[*n]);
    (*n)++;
    printf("Them sinh vien thanh cong.\n");
}

void suaSV(SV a[], int *n){
    char mssv[20];
    int Chon;
    printf("Nhap MSSV can sua: "); scanf("%s",mssv);
    for(int i=0; i<*n; i++){
        if(strcmp(a[i].MSSV,mssv)==0){
            do{
            printf("Nhap thong tin can sua: \n");
            printf("1.Cap nhat MSSV.\n");
            printf("2.Cap nhat ho va ten.\n");
            printf("3.Cap nhat tuoi.\n");
            printf("4.Cap nhat GPA.\n");
            printf("5.Cap nhat ngay thang nam sinh.\n");
            printf("6.Thoat.\n");
            printf("Nhap lua chon cua ban: "); scanf("%d",&Chon);

            switch(Chon){
                case 1:
                    printf("Nhap MSSV moi: "); scanf("%s",a[i].MSSV);
                    break;
                case 2:
                    printf("Cap nhat ho ten moi: "); 
                    getchar();
                    fgets(a[i].hoten, sizeof(a[i].hoten), stdin);
                    a[i].hoten[strcspn(a[i].hoten, "\n")] = '\0';
                    break;
                case 3:
                    printf("Nhap tuoi moi: ");
                    scanf("%d",&a[i].tuoi);
                    break;
                case 4:
                    do{printf("Nhap GPA moi: "); scanf("%f",&a[i].GPA);}
                    while(a[i].GPA < 0 || a[i].GPA > 4);
                    break;
                case 5:
                    printf("Nhap ngay sinh moi: "); nhapNS(&a[i].ngaysinh);
                    break;
                case 6:
                    printf("Cap nhat thanh cong.\n");
                    break;
                default:
                    printf("lua chon khong hop le!\n");

                }
            }
            while(Chon != 6);
            return;}
    }
    printf("Khong tim thay sinh vien can sua.\n");
}

void LocSV(SV a[],int n){
    float MinGPA, MaxGPA;
    do{printf("Nhap khoang loc: ");
    scanf("%f %f",&MinGPA, &MaxGPA);}
    while((MinGPA<0 || MinGPA>4)||(MaxGPA<0 || MaxGPA>4)||(MinGPA>MaxGPA));
    printf("Cac sinh vien thuoc khoang GPA tu %.2f - %.2f\n", MinGPA, MaxGPA);
    for(int i=0; i<n; i++){
        if(a[i].GPA>=MinGPA && a[i].GPA<=MaxGPA){
            XuatSV(a[i]);
        }
    }
}

void CanhCao(SV a[], int n){
    printf("Danh sach sinh vien bi canh bao hoc vu (GPA<2.0).\n");
    printf("------------------------------------------------------------\n");
    printf("|%-5s| %-12s| %-25s| %-5s|\n", "STT", "MSSV", "Ho va ten", "GPA");
    int Q=0;
    for(int i=0; i<n; i++){
        if(a[i].GPA<2)
        {Q+=1;
        printf("|%-5d| %-12s| %-25s| %-5.2f|\n",Q,a[i].MSSV,a[i].hoten,a[i].GPA);}
        
    }
    if(Q==0) printf("Khong co sinh vien nao bi canh cao hoc vu.\n");
}

void XoaSV(int *n, SV a[]){
    char SSV[20];
  
    printf("Nhap MSSV can xoa: "); scanf("%s",SSV);
    for(int i=0; i<*n; i++){
        if(strcmp(SSV,a[i].MSSV)==0){
            for(int j=i; j<*n-1; j++){
                a[j]= a[j+1];
            }
            (*n)--;
            printf("Xoa sinh vien thanh cong\n");
            return;
        }
    }
    printf("Khong tim thay sinh vien!\n");
}

int main(){
    int n; SV a[100]; int choice;
    do{
        Menu();
        printf("Nhap lua chon cua ban: "); scanf("%d",&choice);
        switch(choice){
            case 1:
                do{printf("Nhap so luong sinh vien: "); scanf("%d",&n);}
                while(n<=0);
                for(int i=0; i<n; i++){
                    printf("Nhap thong tin sinh vien thu %d:\n",i+1);
                    nhapSV(&a[i]);
                    printf("\n");
                }
                break;
            case 2:
                for(int i=0; i<n; i++){
                    XuatSV(a[i]);
                }
                break;
            case 3:
                MaxGPA(n,a);
                break;
            case 4:{
                int b;
                printf("1.Sap xep theo chieu giam dan GPA\n");
                printf("2.Sap xep theo chieu tang dan GPA\n");
                printf("Nhap lua chon cua ban: "); scanf("%d",&b);

                switch(b){
                    case 1:
                        SortGiam(n,a);
                        for(int i=0; i<n; i++){
                            XuatSV(a[i]);}
                        break;
                    case 2:
                        SortTang(n,a);
                        for(int i=0; i<n; i++){
                            XuatSV(a[i]);}
                        break;
                    default:
                        printf("Lua chon khong hop le");
                    }
            }
                break;
            case 5:{
                int found = 0;
                char ms[20];
                printf("Nhap MSSV can tim: "); scanf("%s",ms);
                for(int i=0; i<n; i++){
                    if(strcmp(a[i].MSSV,ms)==0){
                        XuatSV(a[i]);
                        found += 1;
                        break;
                    }
                }
                if(found == 0){
                    printf("Khong tim thay sinh vien can tim voi MSSV da nhap\n");
                }
            }
                break;
            case 6:
                ThongKe(n,a);
                break;
            case 7:
                BangSV(n,a);
                break;
            case 8:
                themSV(a, &n);
                break;
            case 9:
                suaSV(a,&n);
                break;
            case 10:
                LocSV(a,n);
                break;
            case 11:
                CanhCao(a,n);
                break;
            case 12:
                XoaSV(&n,a);
                break;
            case 13:
                printf("Xin chao va hen gap lai!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    }
    while(choice != 13);


    return 0;
}
