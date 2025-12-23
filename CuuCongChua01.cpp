#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        do{scanf("%d",&a[i]);}
        while(a[i]!=0 && a[i]!=1);
    }
    if(a[0]==1 || a[n-1]==1){
        printf("Deo cuu");
        exit(0);}
    
    int i = 0; int step = 0;
    while(i<n-1){
        if(a[i+1]==1 && a[i+2]==1){
            printf("Het cuu");
            exit(0);
        }
        else if(i+1<n && a[i+1] == 0 && a[i+2] == 1){
            i += 1;
            step += 1;
        }
        else{
            i += 2;
            step += 1;}
    }
    printf("%d",step);

    return 0;
}
