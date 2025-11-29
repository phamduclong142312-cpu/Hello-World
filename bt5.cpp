#include <iostream>
int main() {
    char str[50]={0};
    printf("nhap ten cua ban: ");
    gets(str);
    int a=0;
    for(int i=0; i<50; i++){
        if(str[i]!='\0' && str[i]!=' '){
            a++;
        }
    }
    printf("so ki tu trong ten ban la: %d", a);
}