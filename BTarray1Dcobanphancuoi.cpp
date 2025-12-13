#include <stdio.h>
void lietke(int n, int a[]){
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0 ; j<n; j++){
            if(a[i]<a[j]) sum += 1;
        }
        if(sum>=2) printf("%d ",a[i]);
    }
}

int check91(int b){
    int z;
    int c1 = 0, c2 = 0;
    while(b!=0){
        z = b%10;
        if(z==1) c1 = 1;
        if(z==9) c2 = 1;
        b/=10;
    }
    if(c1!=0 && c2!=0){return 1;}
    else{return 0;}
}

int symetry(int n, int a[]){
    for(int i=0; i<n; i++){
        if(a[i]!=a[n-1-i]) return 0;
    }
    return 1;
}

int main() {
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    lietke(n,a);
    printf("\n");
    for(int i=0; i<n; i++){
        if(check91(a[i])==1) printf("%d ",a[i]);
    }
    if(symetry(n,a)==1) printf("\nYES");
    else printf("\nNO");
    return 0;
}
