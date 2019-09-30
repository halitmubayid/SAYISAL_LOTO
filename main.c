#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void yap(int *p){
    int sayac=0;
    while(sayac<6){
        *p=(rand()%49)+1;
        p++;
        sayac++;
    }
}
main(){
    int a=0,b=0;
    int sayilar[6];
    yap(sayilar);

    for (a=0;a<5;a++){
        for (b=a+1;b<6;b++){
            if (sayilar[a]==sayilar[b]){
                sayilar[a]=(rand()%49)+1;
                yap(sayilar);
                a=0,b=0;
            }
        }
    }
    for (a=0;a<6;a++){
        printf("%d\n",sayilar[a]);
    }
}
