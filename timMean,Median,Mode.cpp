#include <stdio.h>
float MEAN(int n, int a[]){
    float sum = 0;
    for(int i=0; i<n; i++){
        sum += a[i];
    }
    return sum/n;
}

float MEDIAN(int n, int a[]){
    if(n%2!=0) return a[(n-1)/2];
    else return (a[(n-1)/2] + a[n/2]) / (float)2 ;
}

int MODE(int n, int a[]){
    int mode = 0;
    int MaxFre = 0;
    for(int i=0; i<n; i++){
        int fre = 0;
        for(int j=0; j<n; j++){
            if(a[i]==a[j]) fre += 1;
        }
        if(fre > MaxFre){
            MaxFre = fre;
            mode = a[i];
        }
    }
    return mode;
}

void sort(int n, int a[]){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}

int main() {
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    sort(n,a);
    printf("\nMean = %f", MEAN(n,a));
    printf("\nMedian = %f", MEDIAN(n,a));
    printf("\nMode = %d", MODE(n,a));
}
