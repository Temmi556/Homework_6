#include <stdio.h>
#include <stdbool.h>
int main(){
    int sec;
    int minut,chas;
    printf("Введите кол-во секунд: ");
    scanf("%d", &sec);
    if (sec>59){
        minut = sec/60;
        sec = sec - minut*60;
        if (minut>60){
            chas = minut/60;
            minut = minut - chas*60;
            printf("%d часов %d минут %d секунд\n",chas,minut,sec);
        }
        else printf("%d минут %d секунд\n",minut,sec);
    }
    else printf("0 минут %d секунд\n",sec);
}