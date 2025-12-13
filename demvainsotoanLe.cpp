#include <stdio.h>
//Đếm và in ra số toàn chữ số lẻ
int checkodd(int a){
    int b;
    while(a!=0){
        b = a%10;
        if(b%2==0) return 0;
        a/=10;
    }
    return 1;
}

int ToanLe(int n, int a[]){
    int sum = 0;
    for(int i=0; i<n; i++){
        if(checkodd(a[i])==1) sum ++;
    }
    return sum;
}

void PrintOdd(int n, int a[]){
    for(int i=0; i<n; i++){
        if(checkodd(a[i])==1) printf("%d ",a[i]);
    }
}

int main() {
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("%d\n",ToanLe(n,a));
    PrintOdd(n,a);
    return 0;
}
