#include <iostream>
int squr(int x){
    return x*x;
}
int main(){
    int n; printf("Nhap so nguyen bat ki: "); scanf("%d", &n);
    printf("Binh phuong cua %d la: %d", n, squr(n));
}