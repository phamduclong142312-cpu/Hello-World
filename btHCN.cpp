#include <stdio.h>
void dgcheo1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i) printf("*");
            else printf("~");
        }
        printf("\n");
    }
}

void dgcheo2(int n){
    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
            if(j>=i) printf("*");
            else printf("~");
        }
        printf("\n");
    }
}

void HBH(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){printf(" ");}
        for(int k=i;k<=n+(i-1);k++){printf("*");}
        printf("\n");
    }
}

void HCN5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i) printf("~");
            else{
                if(i==n||j==n||j==(n-i)+1) printf("*");
                else printf(" ");
            }
        }
        printf("\n");
    }
}
        


int main() {
    int n; scanf("%d",&n);
    dgcheo1(n);
    printf("\n");
    dgcheo2(n);
    printf("\n");
    HBH(n);
    printf("\n");
    HCN5(n);
    return 0;
}
