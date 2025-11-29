#include <iostream>
int main() {
    int n;
    printf("nhap so luong phan tu mang: "); scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    int Max = a[0];
    for(int i=0; i<n; i++){
        if(a[i]>Max){
            Max = a[i];
        }
    }
    printf("Max = %d,", Max);
    
    int Min = a[0];
    for(int i=0; i<n; i++){
        if(a[i]<Min){
            Min = a[i];
        }
    }
    printf(" Min = %d", Min);
    return 0;
}