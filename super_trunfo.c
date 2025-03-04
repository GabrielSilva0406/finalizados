#include <stdio.h>
int main (){

    char estado1 = 'A';
    char estado2 = 'B';

    char codigo1[5]= "A01";
    char codigo2[5]= "B01";

    char cidade1[20]= "Fortaleza";
    char cidade2[20]= "Salvador";

    int  populacao1 = 2428678;
    int  populacao2 = 2417678;

    float km21 = 312.353;
    float km22 = 693.442;

    float PIB1 = 27164.45;
    float PIB2 = 21706.06;
    
    int Turismo1 = 15;
    int Turismo2 = 23;

    
    printf ("BEM VINDO AO SUPER TRUNFO EM C \n");
    printf ("CARTA 1 \n");
    printf ("ESTADO: %c\n", estado1);
    printf ("CODIGO: %s\n", codigo1);
    printf ("CIDADE: %s\n", cidade1);
    printf ("POPULACAO: %d\n", populacao1);
    printf ("AREA(km²): %.3f\n", km21);
    printf ("PIB(R$): %.2f\n", PIB1);
    printf ("PONTOS TURISTICOS: %d\n", Turismo1);
    
    printf ("_________________________________\n");
    
    printf ("CARTA 2\n");
    printf ("ESTADO: %c\n", estado2);
    printf ("CODIGO: %s\n", codigo2);
    printf ("CIDADE: %s\n", cidade2);
    printf ("POPULACAO: %d\n", populacao2);
    printf ("AREA(km²): %.3f\n", km22);
    printf ("PIB(R$): %.2f\n", PIB2);
    printf ("PONTOS TURISTICOS: %d\n", Turismo2);

    return 0;
}
