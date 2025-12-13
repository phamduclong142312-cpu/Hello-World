#include <stdio.h>
#include <math.h>
int MAX(int n, int a[]){
    int max = a[0];
    for(int i=0; i<n; i++){
        if(a[i]>max) max = a[i];
    }
    return max;
}

int MIN(int n, int a[]){
    int min = a[0];
    for(int i=0; i<n; i++){
        if(a[i]<min) min = a[i];
    }
    return min;
}


int even(int n, int a[]){
    int Ev = 0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0) Ev += 1;
    }
    return Ev;
}

int odd(int n, int a[]){
    int Od = 0;
    for(int i=0; i<n; i++){
        if(a[i]%2!=0) Od += 1;
    }
    return Od;
}
int prime(int a){
    if(a<=1) return 0;
    for(int i=2; i<sqrt(a); i++){
        if(a%i==0) return 0;
    }
    return 1;
}

void printPrime(int n, int a[]){
    printf("Prime numbers are: ");
    for(int i=0; i<n; i++){
        if(prime(a[i])==1) printf("%d ",a[i]);
    }
}

int main() {
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Max = %d, Min = %d\n",MAX(n,a),MIN(n,a));
    printf("Even = %d, Odd = %d\n",even(n,a),odd(n,a));
    printPrime(n,a);
    return 0;
}
