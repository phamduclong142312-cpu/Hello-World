#include <stdio.h>

float mean(int n, int a[]){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += a[i];
    }
    return (float)sum/n;
}

float median(int n, int a[]){
    if(n%2!=0){
       return a[(n-1)/2];
    }
    else{
        return (float)(a[(n-1)/2]+a[(((n-1)+1)/2)])/(float)2;
    }
}

int MODE(int n, int a[]){
    int mode = 0;
    int MaxF = 0;
    
    for(int i=0; i<n; i++){
        int Fre=0;
        for(int j=0; j<n; j++){
            if(a[j]==a[i]){Fre+=1;}
        }
        if(Fre>MaxF){
            MaxF = Fre;
            mode = a[i];
        }
    }
    return mode;
}

void sort(int n, int a[]){
    for(int i=0; i<n; i++){
        for(int j=0;j<n-1;j++){
            int temp;
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    sort(n,a);
    printf("\nMean = %f",mean(n,a));
    printf("\nMedian = %f",median(n,a));
    printf("\nMode = %d",MODE(n,a));
    return 0;
}
