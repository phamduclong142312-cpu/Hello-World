#include <stdio.h>
#include <math.h>
void nhapArr(int n, int a[]){
    printf("Nhap gia tri cho cac phan tu mang: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}
void xuatArr(int n, int a[]){
    printf("Mang cua ban  la: ");
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}
int Max(int n, int a[]){
    int Max = a[0];
    for(int i=0; i<n; i++){
        if(a[i]>Max) Max = a[i];
    }
    return Max;
}
int Min(int n, int a[]){
    int Min = a[0];
    for(int i=0; i<n; i++){
        if(a[i]<Min) Min = a[i];
    }
    return Min;
}
int even(int n, int a[]){
    int sum = 0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0) sum+=a[i];
    }
    return sum;
}
int odd(int n, int a[]){
    int sum = 0;
    for(int i=0; i<n; i++){
        if(a[i]%2!=0) sum+=a[i];
    }
    return sum;
}
float Mean(int n, int a[]){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += a[i];
    }
    return sum/(float)n;
}
void sortgiam(int n, int a[]){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]<a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void sorttang(int n, int a[]){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
float Median(int n, int a[]){
    if(n%2!=0) return a[(n-1)/2];
    else return (a[(n-1)/2] + a[n/2]) / (float)2 ;
}
int Mode(int n, int a[]){
    int mode = 0;
    int MaxFre = 0;
    for(int i=0; i<n; i++){
        int fre = 0;
        for(int j=0; j<n; j++){
            if(a[i]==a[j]) fre += 1;
        }
        if(fre > MaxFre){
            MaxFre = fre;
            mode = a[i];
        }
    }
    return mode;
}
int prime(int A){
    if(A <= 1) return 0;
    for(int i=2; i<=sqrt(A); i++){
        if(A%i==0) return 0;
    }
    return 1;
}
int main() {
    int n; int a[10];
    int choice;
    do{
        printf("=====MENU=====\n");
        printf("1.Nhap mang so nguyen.\n");
        printf("2.Xuat mang.\n");
        printf("3.Tim Max.\n");
        printf("4.Tim Min.\n");
        printf("5.Tim tong so chan.\n");
        printf("6.Tim tong so le.\n");
        printf("7.Sap xep mang.\n");
        printf("8.Tim mean cua mang.\n");
        printf("9.Tim median cua mang.\n");
        printf("10.Tim mode cua mang.\n");
        printf("11.Sang so nguyen to trong mang.\n");
        printf("12.Thoat.\n");
        printf("Nhap lua chon cua ban: "); scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Nhap so luong phan tu: "); scanf("%d", &n);
                nhapArr(n,a);
                break;
            case 2:
                xuatArr(n,a);
                break;
            case 3:
                printf("Phan tu lon nhat: %d",Max(n,a));
                break;
            case 4:
                printf("Phan tu nho nhat: %d",Min(n,a));
                break;
            case 5:
                printf("Tong cac so chan: %d",even(n,a));
                break;
            case 6:
                printf("Tong cac so le: %d",odd(n,a));
                break;
            case 7:
                int b;
                printf("1.Sort mang giam dan\n");
                printf("2.Sort mang tang dan\n");
                printf("Nhap lua chon cua ban: "); scanf("%d", &b);
                switch(b){
                    case 1:
                        sortgiam(n,a);
                        xuatArr(n,a);
                        break;
                    case 2:
                        sorttang(n,a);
                        xuatArr(n,a);
                        break;
                    default:
                        printf("Khong hop le!");
                }
                break;
            case 8:
                printf("Trung binh cong cua mang: %f",Mean(n,a));
                break;
            case 9:
                printf("Trung vi cua mang la: %f",Median(n,a));
                break;
            case 10:
                printf("Mot cua mang la: %d",Mode(n,a));
                break;
            case 11:
                printf("Cac so nguyen to trong mang: ");
                for(int i=0; i<n; i++){
                    if(prime(a[i])==1) printf("%d ",a[i]);
                }
                break;
            case 12:
                printf("Xin chao va hen gap lai!");
                break;
            default:
                printf("Khong hop le!");
        }
        printf("\n");
        printf("\n");
    }
    while(choice != 12);

    return 0;
}
