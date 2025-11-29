#include <iostream>
int main(){
    int n;
    int sum = 0;
    
    while(sum<2025){
    do{
        printf("nhap so nguyen duong n: "); scanf("%d", &n);
    }
    while(n<0);
    
    if(n%2==0){
    for(int i = 0; i <= n; i++){
        if(i%2==0){sum += i;
        }
    }
    printf("tong chan (0-%d) la: %d", n, sum);
    }
    
    if(n%2!=0){
    for(int i = 0; i <= n; i++){
        if(i%2!=0){sum += i;
        }
    }
    printf("tong le (0-%d) la: %d", n, sum);
    }
    printf("\n");
    }
    return 0;
}