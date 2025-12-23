#include <stdio.h>

int main() {
    int diem;
    int boi;
    do{scanf("%d",&diem);}
    while(diem<0 || diem>100);
    
    if(diem <38) printf("%d",diem);
    else{
        boi = (diem / 5)*5 + 5;
        if(boi-diem < 3) diem = boi;
         printf("%d",diem);
    }

    return 0;
}
