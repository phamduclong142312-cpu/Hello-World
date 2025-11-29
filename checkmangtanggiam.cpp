#include <stdio.h>
#include <stdio.h>
void check(int n, int a[]){
    int B=0;
    for(int i = 0; i<n-1; i++){
        if(a[i]<=a[i+1]){B+=1;}
    }
    if(B==(n-1)){printf("YES +\n");}
    else{printf("NO +\n");}
}

void check2(int n, int a[]){
    int B=0;
    for(int i = 0; i<n-1; i++){
        if(a[i]>=a[i+1]){B+=1;}
    }
    if(B==(n-1)){printf("YES -\n");}
    else{printf("NO -\n");}
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    check(n, a);
    check2(n,a);
    return 0;
}