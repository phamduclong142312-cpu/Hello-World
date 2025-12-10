#include <stdio.h>
int prime1(int n){
    int uoc = 0;
    if(n<=1){return 0;}
    for(int i=1; i<=n; i++){
        if(n%i==0){uoc += 1;}
    }
    if(uoc==2){return 1;}
        else{return 0;}
}

int prime2(int n){
    int sum = 0;
    while(n!=0){
        sum += n%10;
        n/=10;
    }
    if(prime1(sum)==1){return 1;}
    else{return 0;}
}

int prime3(int n){
    while(n!=0){
        int b = n%10;
        if(b==2||b==3||b==5||b==7){return 1;}
        n/=10;
    }
    return 0;
}

int main() {
    int n;
    printf("nhap so nguyen: "); scanf("%d",&n);
    if(prime1(n)==1&&prime2(n)==1&&prime3(n)==1){
        printf("%d la so prime prime", n);
    }
    else printf("%d khong la so prime prime",n);
    return 0;
}
