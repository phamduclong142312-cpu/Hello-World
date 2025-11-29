#include <iostream>
#include <stdio.h>
int max(int n, int a[]){
    int Max=a[0];
    for(int i=0; i<n; i++){
        if(a[i]>Max){Max=a[i];}
    }
    return Max;
}

int main() {
    int n; printf("nhap so luong phan tu mang: "); scanf("%d", &n);
    int a[n]; printf("nhap cac phan tu trong mang: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int d=0, b=0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){d+=1;}
        else{b+=1;}
    }
    printf("Co %d so chan va %d so le", d, b);
    max(n,a);
    printf("\nSo lon nhat trong mang la: %d", max(n,a));
    return 0;
}