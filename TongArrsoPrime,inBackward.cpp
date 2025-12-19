#include <stdio.h>
int prime(int a){
    if(a<=1) return 0;
    for(int i=2; i*i<a; i++){
        if(a%i==0) return 0;
    }
    return 1;
}
int SUM(int n, int *p){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += *(p+i);
    }
    return sum;
}
int main() {
    int n; scanf("%d",&n);
    int a[n];
    int *p = a;
    for(int i=0; i<n; i++){
        do{scanf("%d",p+i);}
        while(prime(*(p+i))==0);
    }
    for(int i=n-1; i>=0; i--){
        printf("%d ", *(p+i));
    }
    printf("\nsum = %d",SUM(n,p));
    return 0;
}
