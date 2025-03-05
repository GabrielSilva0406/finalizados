#include <stdio.h>
int main (){

    char estado_;
    char estado1 = 'A';
    char estado2 = 'B';

    char codigo_[5] ;
    char codigo1[5]= "A01";
    char codigo2[5]= "B01";

    char cidade_[20];
    char cidade1[20]= "Fortaleza";
    char cidade2[20]= "Salvador";

    int  populacao_;
    int  populacao1 = 2428678;
    int  populacao2 = 2417678;

    float km2_ ;
    float km21 = 312.353;
    float km22 = 693.442;

    float PIB_ ;
    float PIB1 = 27164.45;
    float PIB2 = 21706.06;
    
    int Turismo_ ;
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
    printf("-----------------------------------------------------\n");

    printf ("MONTE SUA CARTA COM OS DADOS QUE FOREM PREENCHIDOS. \n");

    printf ("Escreva a categoria do Estado: \n");
    scanf  ("%c", &estado_);
    printf ("A categoria do estado e: %c\n", estado_);

    printf ("Escreva o codigo: \n");
    scanf  ("%s", &codigo_);
    printf ("O codigo e: %s\n", codigo_);

    printf ("Digite o nome da cidade: \n");
    scanf  ("%s", &cidade_);
    printf ("sua cidade e: %s\n", cidade_);

    printf ("Digite a quantidade populacional (aproximado): \n");
    scanf  ("%d", &populacao_);
    printf ("A quantidade populacional e: %d\n", populacao_);

    printf ("Digite a Area (km²):  \n");
    scanf  ("%f", &km2_);
    printf ("A area em km² dele e: %.3f\n", km2_);

    printf ("Digite o PIB: \n");
    scanf  ("%f", &PIB_);
    printf ("O PIB e: %.2f\n", PIB_);

    printf ("digite a quantidade de pontos turisticos: \n");
    scanf  ("%d", &Turismo_);
    printf ("a quanidade de pontos sao: %d\n", Turismo_);

    printf ("CARTA\n");
    printf ("ESTADO: %c\n", estado_);
    printf ("CODIGO: %s\n", codigo_);
    printf ("CIDADE: %s\n", cidade_);
    printf ("POPULACAO: %d\n", populacao_);
    printf ("AREA(km²): %.3f\n", km2_);
    printf ("PIB(R$): %.2f\n", PIB_);
    printf ("PONTOS TURISTICOS: %d\n", Turismo_);
    return 0;
}
