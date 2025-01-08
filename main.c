#include<stdio.h>

int i=0;

int main(void){
    int sayi;
    printf("hello world");
    scanf("%d",&sayi);
        for(i=0;i<sayi;i++){
            printf("%d. sayiyi girinizz..\n",i);
        }
    return 0;
}