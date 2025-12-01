#include <iostream>
int MAX(int a, int b){
    int max;
    if(a>b){max=a;}
    else{max=b;}
    return max;
}
int MIN(int a, int b){
    int min;
    if(a<b){min=a;}
    else{min=b;}
    return min;
}
int main() {
    int n;
    printf("nhap so luong thanh pho: "); scanf("%d", &n);
    int a[n];
    printf("nhap toa do cua cac thanh pho tren truc Ox theo thu tu tang dan :\n");
    printf("-∞ <——————0——————> +∞\n");
    int i;
    for(i=0; i<n; i++){scanf("%d", &a[i]);}
    for(int i=0; i<n; i++){
        int max, min;
        if(i==0){
            max = a[n-1]-a[0];
            min = a[1]-a[0];
            printf("City a[0]: %d %d\n",min,max);
        }
        else if(i==n-1){
            max = a[n-1]-a[0];
            min = a[n-1]-a[n-2];
            printf("City a[%d]: %d %d\n",n-1, min,max);
        }
        else{
            printf("City a[%d]: %d %d\n", i, MIN(a[i+1]-a[i],a[i]-a[i-1]), MAX(a[i]-a[0],a[n-1]-a[i]));
            
        }
    }
    return 0;
}