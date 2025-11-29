#include <iostream>
int main() {
   int n;
    printf("nhap so luong phan tu mang: "); scanf("%d", &n);
    int a[n];
    
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    int max = 0, max2 = 0;
    for(int i = 0; i<n; i++){
        if(a[i]>max){
            max2 = max;
            max = a[i];
        }
        else if(a[i]>max2){
            max2 = a[i];
        }
    }
    printf("so lon nhat va so lon nhi lan luot la: %d %d \n", max, max2);
    
    int min = 10000, min2 = 10000;
    for(int i = 0; i<n; i++){
        if(a[i]<min){
            min2 = min;
            min = a[i];
        }
        else if(a[i]<min2){
            min2 = a[i];
        }
    }
    printf("so be nhat va so be nhi lan luot la: %d %d", min, min2);
    
    return 0;
}