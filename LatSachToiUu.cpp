#include <stdio.h>

int main() {
    int n;
    do{scanf("%d",&n);}
    while(n<1);
    int p;
    do{scanf("%d",&p);}
    while(p<1 || p>n);
    int a, b;
    a = p/2;
    b = (n-p)/2;
    if(a<b) printf("%d",a);
    else printf("%d",b);

    return 0;
}
