#include <stdio.h>
void SWAP(int *p, int *q, int n){
    for(int i=0; i<n; i++){
        int temp = *(p+i);
        *(p+i) = *(q+i);
        *(q+i) = temp;
    }
}

int main() {
    int n;
    printf("nhap sl pt arr 1 2: "); scanf("%d", &n); 
    int a[n]; int b[n];
    int *p = a;
    int *q = b;
    printf("nhap arr 1: ");
    for(int i=0; i<n; i++){
        scanf("%d",p+i);
    }
    printf("nhap arr 2: ");
    for(int i=0; i<n; i++){
        scanf("%d",q+i);
    }
    SWAP(p,q,n);
    for(int i=0; i<n; i++){
        printf("%d ",*(p+i));
    }
    printf("\n");
    for(int i=0; i<n; i++){
        printf("%d ",*(q+i));
    }

    return 0;
}
