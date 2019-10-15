#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void imprimir_menu();
void leer_opcion(int& opt);
int suma(int x, int y);
int resta(int x, int y);
int multiplicacion(int x, int y);
int division(int x, int& y);
int leer_valor();
int main(){
char repeticion;
int a,b,c,opt;
imprimir_menu();
leer_opcion(opt);
a=leer_valor();
b=leer_valor();
do{
switch(opt){
case 1:
    c=suma(a,b);
    printf("EL RESULTADO ES: %d",c);
    break;
case 2:
    c=resta(a,b);
    printf("EL RESULTADO ES: %d",c);
    break;
case 3:
    c=multiplicacion(a,b);
    printf("EL RESULTADO ES: %d",c);
    break;
case 4:
    c=division(a,b);
    printf("EL RESULTADO ES: %d\n",c);
    break;
default:
    printf("OPCION INVALIDA\n");
    break;
}
printf("desea hacer otra operacion??  S  N :\n");
repeticion = getch();
}while(repeticion=='S' || repeticion=='s');
}
void imprimir_menu(){
printf("1.-SUMA\n");
printf("2.-RESTA\n");
printf("3.-MULTIPLICACION\n");
printf("4.-DIVISION\n");
}
void leer_opcion(int& opt){
printf("INTRODUCE UNA OPCION:_\n");
scanf("%d",&opt);
}
int suma(int x, int y){
        return x+y;
}
int resta(int x, int y){
        return x-y;
}
int multiplicacion(int x, int y){
        return x*y;
}
int division(int x, int& y){
    while(y==0){
        y=leer_valor();
    }
        return x/y;
}
int leer_valor(){
    int temp;
    printf("INTRODUCE EL VALOR:_");
    scanf("%d",&temp);
}
