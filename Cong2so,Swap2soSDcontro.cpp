#include <stdio.h>
int cong(int *p1, int *p2){
    return *p1 + *p2;
}
void swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main(){
    int a; int b;
    scanf("%d %d",&a,&b);
    printf("%d + %d = %d",a,b,cong(&a,&b));
    printf("\nBefore, a = %d, b = %d",a,b);
    swap(&a, &b);
    printf("\nAfter swap, a = %d, b = %d",a,b);
    return 0;
}
