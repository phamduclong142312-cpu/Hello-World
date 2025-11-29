#include <iostream>
int prime(int a){
    int s=0;
    if(a<=1){return 0;}
    for(int i=2; i<=a; i++){
        if(a%i==0){s = s + 1;}
    }
    return s;
    if(s==1){return 1;}
    else{return 0;}
}

int main() {
    int n; 
    printf("nhap so: "); scanf("%d", &n);
    if(prime(n)==1){printf("%d la so prime", n);}
    else{printf("%d ko la so prime", n);}
    return 0;
}