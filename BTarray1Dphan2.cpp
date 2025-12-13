#include <stdio.h>
int MinIndex1(int n, int a[]){
    int Min = a[0];
    int MinI = 0;
    for(int i=0; i<n; i++){
        if(a[i]<=Min){
            Min = a[i];
            MinI = i;
        }
    }
    return MinI;
}
int MinIndex2(int n, int a[]){
    int Min = a[0];
    int MinI = 0;
    for(int i=0; i<n; i++){
        if(a[i]<Min){
            Min = a[i];
            MinI = i;
        }
    }
    return MinI;
}

int MaxIndex1(int n, int a[]){
    int Max = a[0];
    int MaxI = 0;
    for(int i=0; i<n; i++){
        if(a[i]>=Max){
            Max = a[i];
            MaxI = i;
        }
    }
    return MaxI;
}
int MaxIndex2(int n, int a[]){
    int Max = a[0];
    int MaxI = 0;
    for(int i=0; i<n; i++){
        if(a[i]>Max){
            Max = a[i];
            MaxI = i;
        }
    }
    return MaxI;
}

int main() {
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("MinIndex1 = %d\n",MinIndex1(n,a));
    printf("MinIndex2 = %d\n",MinIndex2(n,a));
    printf("MaxIndex1 = %d\n",MaxIndex1(n,a));
    printf("MaxIndex2 = %d\n",MaxIndex2(n,a));
    return 0;
}
