#include <stdio.h>
int main(){
int opção;
float raio;
float pi = 3.14;
float area = 0;
float perimetro = 0;
printf("Digite uma opção \n 1- área\n 2- perímetro");
scanf("%d", &opção);
if(opção == 1){
    printf("Digite o raio do círculo");
    scanf("%f", &raio);
    area = pi * (raio * raio);
    printf("A área do círculo é %f", area);
}else if(opção == 2){
    printf("Digite o raio do círculo");
    scanf("%f", &raio);
    perimetro = 2 * pi * raio;
    printf("O perímetro do círculo é %f", perimetro);
}else{
    printf("Opção inválida");
}
return 0;
}