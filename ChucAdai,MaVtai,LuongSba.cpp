#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
     int x, y ,z;
     scanf("%d %d %d", &x, &y, &z);
     int a, b;
     a = abs(z-x);
     b = abs(z-y);
     if(a == b) printf("C");
     else if(a < b) printf("A");
     else printf("B");

    return 0;
}
