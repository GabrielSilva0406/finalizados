#include <stdio.h>
int main (){

    int opcao, opcao1, opcao2;
    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;
    
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

    float PIB1 = 65973702097.10;
    float PIB2 = 58478263728.48;
    
    int Turismo1 = 15;
    int Turismo2 = 23;

    unsigned long int densidade1 = populacao1 / km21;
    unsigned long int densidade2 = populacao2 / km22;

    unsigned long int ppc1 = PIB1 / populacao1;
    unsigned long int ppc2 = PIB2 / populacao2;
 
    float SuperPoder1 = populacao1 + km21 + PIB1 + Turismo1 + densidade1 + ppc1; 
    float SuperPoder2 = populacao2 + km22 + PIB2 + Turismo2 + densidade2 + ppc2; 

    
    
    printf ("BEM VINDO AO SUPER TRUNFO EM C \n");


   /*DADOS DA CARTA 1*/

    printf ("CARTA 1 \n");
    printf ("ESTADO: %c\n", estado1);
    printf ("CODIGO: %s\n", codigo1);
    printf ("CIDADE: %s\n", cidade1);
    printf ("POPULACAO: %d\n", populacao1);
    printf ("AREA(km²): %.3f\n", km21);
    printf ("PIB(R$): %.2f\n", PIB1);
    printf ("PONTOS TURISTICOS: %d\n", Turismo1);
    printf ("DENSIDADE POPULACIONAL (hab/km²): %ld\n", densidade1);
    printf ("PIB per capita: %ld\n", ppc1);
    printf ("SUPER PODER: %.2f \n", SuperPoder1);


    printf ("_________________________________\n");
    
   /*DADOS DA CARTA 2*/

    printf ("CARTA 2\n");
    printf ("ESTADO: %c\n", estado2);
    printf ("CODIGO: %s\n", codigo2);
    printf ("CIDADE: %s\n", cidade2);
    printf ("POPULACAO: %d\n", populacao2);
    printf ("AREA(km²): %.3f\n", km22);
    printf ("PIB(R$): %.2f\n", PIB2);
    printf ("PONTOS TURISTICOS: %d\n", Turismo2);
    printf ("DENSIDADE POPULACIONAL (hab/km²): %ld\n", densidade2);
    printf ("PIB per capita: %ld\n", ppc2);
    printf ("SUPER PODER: %.2f \n", SuperPoder2);

    printf("-----------------------------------------------------\n");
    
    /*AQUI ESTA O COMBATE ENTRE AS CARTAS, SE A RESPOSTA FOR CARTA 1, IMPRIME O DIGITO "1", SE A RESPOSTA FOR CARTA 2, IMPRIME O DIGITO "0"*/

    printf ("POPULACAO: %d \n",populacao1 > populacao2);
    printf ("AREA (KM²) %d\n", km21 > km22);
    printf ("PIB (R$): %d \n", PIB1 > PIB2);
    printf ("PONTOS TURISTICOS:%d \n",Turismo1 > Turismo2);
    printf ("DENSIDADE POPULACIONAL:%d \n",densidade1 < densidade2);
    printf ("PIB per CAPITA:%d \n", ppc1 > ppc2);
    printf ("Super Poder: %d\n", SuperPoder1 > SuperPoder2);
    
    
    printf("-----------------------------------------------------\n");

    //combate direto de toda a carta
    if (populacao1 > populacao2 ){
        printf ("FORTALEZA tem mais pessoas que SALVADOR. \n");
    } else {
        printf ("SALVADOR tem mais pessaos que FORTALEZA. \n");
    }
    if (km21 > km22){
        printf ("FORTALEZA tem mais territorio que SALVADOR. \n");
    } else {
        printf ("SALVADOR tem mais territorio que FORTALEZA. \n");
    }
    if (PIB1 > PIB2){
        printf ("O PIB de FORTALEZA e maior que o de SALVADOR. \n");
    } else {
        printf ("O PIB de SALVADOR e maior que o de FORTALEZA. \n");
    }
    if (Turismo1 > Turismo2){
        printf ("Ir para FORTALEZA tera mais passeios que em SALVADOR. \n");
    } else {
        printf ("Ir para SALVADOR tera mais passseios que em FORTALEZA. \n");
    }
    if (densidade1 < densidade2){
        printf ("A densidade populacional de FORTALEZA e maior que SALVADOR. \n");
    } else {
        printf ("A densidade populacional de SALVADOR e maior que FORTALEZA. \n");
    }
    if (ppc1 > ppc2){
        printf ("O PIB per capita de FORTALEZA e maior que a de SALVADOR. \n");
    } else {
        printf ("O PIB per capita de SALVADOR e maior que a de FORTALEZA. \n");
    }
    if (SuperPoder1 > SuperPoder2){
        printf ("SUPER-PODER DE FORTALEZA VAI DESTRUIR SALVADOR.  \n");
    } else {
        printf ("SUPER-PODER DE SALVADOR VAI DESTRUIR FORTALEZA. \n");
    }

    printf("-----------------------------------------------------\n");

//colocar o numero referente a categoria de comparacao
    printf ("ESCOLHA QUAL CATEGORIA QUER COMPARAR:\n");
    printf ("1. POPULACAO\n");
    printf ("2. AREA\n");
    printf ("3. PIB\n");
    printf ("4. PONTOS TURISTICOS\n");
    printf ("5. DENSIDADE\n");
    printf ("6. PIB PER CAPITA\n");
    printf ("7. SUPER PODER\n");
    scanf ("%d", &opcao);

 
  
switch (opcao)
{
    case 1: 
printf ("##POPULACAO##\n");
if (populacao1 > populacao2){
    printf ("FORTALEZA GANHOU!!!!\n");
} else if (populacao1 < populacao2){
    printf ("SALVADOR GANHOU!!!\n");
}else{
    printf ("EMPATOU!!!!\n");
}
    break;

    case 2: 
printf ("##AREA##\n");
if (km21 > km22){
    printf ("FORTALEZA GANHOU!!!");
}else if (km21 < km22){
    printf ("SALVADOR GANHOU !!!");
}else{
    printf ("EMPATOU!!!");
}
    break;

    case 3: 
printf ("##PIB##\n");
if (PIB1 > PIB2){
    printf ("FORTALEZA GANHOU!!!");
}else if (PIB1 < PIB2){
    printf ("SALVADOR GANHOU !!!");
}else{
    printf ("EMPATOU!!!");
}
    break;

    case 4: 
printf ("##PONTOS TURISTICOS##\n");
if (Turismo1 > Turismo2){
    printf ("FORTALEZA GANHOU!!!");
}else if (Turismo1 < Turismo2){
    printf ("SALVADOR GANHOU !!!");
}else{
    printf ("EMPATOU!!!");
}
    break;

    case 5: 
printf ("##DENSIDADE##\n");
if (densidade1 < densidade2){
    printf ("FORTALEZA GANHOU!!!");
}else if (densidade1 > densidade2){
    printf ("SALVADOR GANHOU !!!");
}else{
    printf ("EMPATOU!!!");
}
    break;

    case 6: 
printf ("##PIB PER CAPITA##\n");
if (ppc1 > ppc2){
    printf ("FORTALEZA GANHOU!!!");
}else if (ppc1 < ppc2){
    printf ("SALVADOR GANHOU !!!");
}else{
    printf ("EMPATOU!!!");
}
    break;
    
    case 7: 
printf ("##SUPER PODER##\n");
if (SuperPoder1 > SuperPoder2){
    printf ("FORTALEZA GANHOU!!!");
}else if (SuperPoder1 < SuperPoder2){
    printf ("SALVADOR GANHOU !!!");
}else{
    printf ("EMPATOU!!!");
}
    break;

default:
printf ("funcao invalida.\n");
    break;
}



scanf ("%d", &opcao1);

 
  
switch (opcao1)
{
    case 1: 
printf ("##POPULACAO##\n");
if (populacao1 > populacao2){
    printf ("FORTALEZA GANHOU!!!!\n");
} else if (populacao1 < populacao2){
    printf ("SALVADOR GANHOU!!!\n");
}else{
    printf ("EMPATOU!!!!\n");
}
    break;

    case 2: 
printf ("##AREA##\n");
if (km21 > km22){
    printf ("FORTALEZA GANHOU!!!");
}else if (km21 < km22){
    printf ("SALVADOR GANHOU !!!");
}else{
    printf ("EMPATOU!!!");
}
    break;

    case 3: 
printf ("##PIB##\n");
if (PIB1 > PIB2){
    printf ("FORTALEZA GANHOU!!!");
}else if (PIB1 < PIB2){
    printf ("SALVADOR GANHOU !!!");
}else{
    printf ("EMPATOU!!!");
}
    break;

    case 4: 
printf ("##PONTOS TURISTICOS##\n");
if (Turismo1 > Turismo2){
    printf ("FORTALEZA GANHOU!!!");
}else if (Turismo1 < Turismo2){
    printf ("SALVADOR GANHOU !!!");
}else{
    printf ("EMPATOU!!!");
}
    break;

    case 5: 
printf ("##DENSIDADE##\n");
if (densidade1 < densidade2){
    printf ("FORTALEZA GANHOU!!!");
}else if (densidade1 > densidade2){
    printf ("SALVADOR GANHOU !!!");
}else{
    printf ("EMPATOU!!!");
}
    break;

    case 6: 
printf ("##PIB PER CAPITA##\n");
if (ppc1 > ppc2){
    printf ("FORTALEZA GANHOU!!!");
}else if (ppc1 < ppc2){
    printf ("SALVADOR GANHOU !!!");
}else{
    printf ("EMPATOU!!!");
}
    break;
    
    case 7: 
printf ("##SUPER PODER##\n");
if (SuperPoder1 > SuperPoder2){
    printf ("FORTALEZA GANHOU!!!");
}else if (SuperPoder1 < SuperPoder2){
    printf ("SALVADOR GANHOU !!!");
}else{
    printf ("EMPATOU!!!");
}
    break;

default:
printf ("funcao invalida.\n");
    break;
}

return 0;

}

