#include <iostream>
#include <stdlib.h>

int main(){
    int *p = (int*)malloc(100000000* sizeof(int));
    if (p == nullptr){
        printf("cap phat ko thanh cong\n");
    }
    else{
        printf("cap phat thanh cong\n");
    }
    for(int i = 0; i < 10; i++){
        scanf("%d ", &p[i]);
    }

    for(int i = 0; i < 1000; i++){
        printf("%d ", *(p+i));
    }
    free(p);
}