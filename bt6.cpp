#include <iostream>
void sort(int n, int *p){
    int temp;
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1; j++){
            if(*(p+j) < *(p+j+1)){
                temp = *(p+j+1);
                *(p+j+1) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu mang: "); scanf("%d", &n);
    int a[n];
    int *p;
    p = a;
    for(int i = 0; i<n; i++){
        scanf("%d", p+i);
    }
    sort(n, p);
    for(int i = 0; i<n; i++){
        printf("%d ", *(p+i));
    }
}