#include <iostream>
int prime(int a){
    int uoc=0;
    if(a<=1){return 0;}
    for(int i=1; i<=a; i++){
        if(a%i==0){uoc+=1;}}
    if(uoc==2){return 1;}
    else{return 0;}
}

int main() {
    int n; 
    printf("nhap so: "); scanf("%d", &n);
    if(prime(n)==1){printf("%d la so prime", n);}
    else{printf("%d ko la so prime", n);}
    return 0;

}


