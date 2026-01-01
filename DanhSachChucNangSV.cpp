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
    printf("Nhap ho ten: "); gets(p->hoten);
    printf("Nhap tuoi: "); scanf("%d",&p->tuoi);
    printf("Nhap GPA: "); scanf("%f",&p->GPA);
    printf("Nhap ngay thang nam sinh: "); nhapNS(&p->ngaysinh);
}

void XuatSV(SV p){
    printf("MSSV: %s\n", p.MSSV);
    printf("Ho va ten: %s\n", p.hoten);
    printf("Tuoi: %d\n", p.tuoi);
    printf("GPA: %f\n",p. GPA);
    XuatNs(p.ngaysinh);
    printf("\n\n");
}

void Menu(){
    printf("==========DANH SACH CHUC NANG==========\n");
    printf("1. Nhap mang sinh vien\n");
    printf("2. Xuat mang sinh vien\n");
    printf("3. Tim sinh vien co GPA cao nhat\n");
    printf("4. Sap xep sinh vien theo GPA\n");
    printf("5. Tim kiem sinh vien theo MSSV\n");
    printf("6. Thoat\n");
    printf("=======================================\n");
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

int main(){
    int n; SV a[10]; int choice;
    do{
        Menu();
        printf("Nhap lua chon cua ban: "); scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Nhap so luong sinh vien: "); scanf("%d",&n);
                for(int i=0; i<n; i++){
                    nhapSV(&a[i]);
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
                printf("Xin chao va hen gap lai!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    }
    while(choice != 6);


    return 0;
}
