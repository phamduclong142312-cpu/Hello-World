#include <stdio.h>
#include <math.h>
int Max(int x, int y, int z){
    int max = x;
    if(y>max){max=y;}
    if(z>max){max=z;}
    return max;
}

int Min(int x, int y, int z){
    int min = x;
    if(y<min){min=y;}
    if(z<min){min=z;}
    return min;
}
int TongS(int a, int b){
    int sum=0;
    for(int i=a; i<=b; i++){
        sum+=i;
    }
    return sum;
}
void IN(int sum){
    for(int i=1; i<=sum;i++){
        printf("*");
    }
}
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int MAX = Max(a,b,c);
    int MIN = Min(a,b,c);
    printf("%d %d\n",Max(a,b,c), Min(a,b,c));
    printf("%d\n",TongS(MIN,MAX));
    printf("%lf\n", pow((double)Max(a,b,c),Min(a,b,c)));
    IN(TongS(MIN,MAX));
    return 0;
}
