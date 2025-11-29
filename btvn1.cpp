#include <iostream>
void cong(int a,int b){
    int c;
    c=a+b;
    printf("a + b = %d", c);
}

void tru(int a,int b){
    int c;
    c=a-b;
    printf("a - b = %d", c);
}

void nhan(int a,int b){
    int c;
    c=a*b;
    printf("a * b = %d", c);
}

void chia(int a,int b){
    float c;
    c = (float)a/b;
    printf("a / b = %.2f",c);
}
int main() {
    int a, b;
    printf("nhap so nguyen a: "); scanf("%d", &a);
    printf("nhap so nguyen b: "); scanf("%d", &b);
    char pheptinh;
    do{printf("nhap phep tinh(+,-,*,/): "); scanf(" %c", &pheptinh);}
    while(pheptinh!='+' && pheptinh!='-' && pheptinh!='*' && pheptinh!='/');
    switch(pheptinh){
        case '+':
            cong(a,b); break;
        case '-':
            tru(a,b); break;
        case '*':
            nhan(a,b); break;
        case '/':
            chia(a,b); break;
    }
}