#include <iostream>
#include <string.h>
struct SinhVien{
    char MSSV[10];
    char Name[50];
    float GPA;
};
typedef struct SinhVien SV;

void Nhap(SV *p){
    scanf("%s", p->MSSV);
    getchar();
    gets(p->Name);                //fgets(p->Name, 50, stdin);
    scanf("%f", &p->GPA);
}

void In(SV a){
    printf("MSSV: %s, Ten: %s, GPA: %.2f \n", a.MSSV, a.Name, a.GPA);
}

void Sort(int n, SV a[]){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i].GPA < a[j].GPA){
                SV tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

void MaxGPA(int n, SV a[]){
    float Max = 0; int pos = 0;
    for(int i=0; i<n; i++){
        if(a[i].GPA > Max){
            Max = a[i].GPA;
            pos = i;
        }
    }
    In(a[pos]);
}

void Timkiem(int n, SV a[], char MSSVcan[]){
    for(int i=0; i<n; i++){
        if(strcmp(a[i].MSSV, MSSVcan) == 0){
            In(a[i]);
            return;
        }
    }
    printf("Khong tim thay sinh vien.\n");
}

int main(){
    int n; printf("Nhap so luong sinh vien: "); scanf("%d",&n);
    char MSSVcan[10];
    printf("Nhap thong tin sinh vien: \n");
    SV a[n];
    for(int i=0; i<n; i++) Nhap(&a[i]);
    printf("Sinh vien co GPA cao nhat: "); MaxGPA(n,a);
    printf("\nSap xep danh sach theo thu du giam dam: \n"); Sort(n,a);

    for(int i=0; i<n; i++) In(a[i]);
    printf("Nhap MSSV can tim: "); scanf("%s", MSSVcan);
    Timkiem(n,a,MSSVcan);

    return 0;
}
