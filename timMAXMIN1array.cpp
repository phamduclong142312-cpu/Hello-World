#include <stdio.h>
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

int main() {
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("%d %d",MAX(n,a),MIN(n,a));

    return 0;
}
