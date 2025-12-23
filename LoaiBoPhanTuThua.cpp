#include <stdio.h>
void Del(int *p, int a[]){
    for(int i=0; i< *p; i++){
        for(int j=0; j<i; j++){
            if(a[i]==a[j]){
                for(int k=i; k < *p-1; k++){
                    a[k] = a[k+1];}
                (*p) -= 1;
                i -= 1;
                break;
            }
        }
    }
}

int main() {
    int n; scanf("%d",&n);
    int *p = &n;
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    Del(p,a);
    
    for(int i=0; i<*p; i++){
        printf("%d ",a[i]);
    }
    
    return 0;
}
