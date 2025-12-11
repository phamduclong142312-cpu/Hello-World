#include <stdio.h>
void tamgiacrong(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==1||i==n||j==1||j==i) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}

void tamgiaccan(int n){
    for(int i=1; i<=n; i++){
        for(int j=1;j<=n-i;j++){printf(" ");}
        for(int k =(n-i)+1;k<=n+(i-1);k++){printf("*");}
        printf("\n");
        }
    }

void tamgiaccanrong(int n){
    for(int i=1; i<=n; i++){
        for(int j=1;j<=n-i;j++){printf(" ");}
        for(int k =(n-i)+1;k<=n+(i-1);k++){
            if(k==(n-i)+1||k==n+(i-1)||i==n) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}

void tamgiaccanngcrong(int n){
   for(int i=n; i>=1; i--){
        for(int j=1;j<=n-i;j++){printf(" ");}
        for(int k =(n-i)+1;k<=n+(i-1);k++){
            if(k==(n-i)+1||k==n+(i-1)||i==n) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}

void tamgiaccanngc(int n){
    for(int i=n; i>=1; i--){
        for(int j=1;j<=n-i;j++){printf(" ");}
        for(int k =(n-i)+1;k<=n+(i-1);k++){printf("*");}
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d",&n);
    tamgiacrong(n);
    printf("\n");
    tamgiaccan(n);
    printf("\n");
    tamgiaccanrong(n);
    printf("\n");
    tamgiaccanngc(n);
    printf("\n");
    tamgiaccanngcrong(n);

    return 0;
}
