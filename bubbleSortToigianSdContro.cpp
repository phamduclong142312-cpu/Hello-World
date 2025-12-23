#include <stdio.h>
void SORT(int n, int *p){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(*(p+i) > *(p+j)){
                int temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
}

int main() {
    int n; scanf("%d", &n);
    int a[n];
    int *p = a;
    for(int i=0; i<n; i++){
        scanf("%d", p+i);
    }
    SORT(n,p);
    for(int i=0; i<n; i++){
        printf("%d ",*(p+i));
    }
    return 0;
}
