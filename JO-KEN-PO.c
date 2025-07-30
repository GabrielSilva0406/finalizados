#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int escolhaJogador, escolhaComputador;
    srand (time(0));

    printf ("JO-KEN-PO");
    printf ("Escolha uma opcao:\n");
    printf ("1. Pedra\n");
    printf ("2. Papel\n");
    printf ("3. Teroura\n");
    printf ("ESCOLHA:\n");
    scanf ("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1;

    switch (escolhaJogador)
    {
    case 1:
        printf ("Jogador vai ser PEDRA\n  ");
        break;

    case 2:
        printf ("Jogador vai ser PAPEL\n");
        break;

    case 3:
        printf ("Jogador vai ser TESOURA\n");
        break;
    default: 
    printf ("opcao invalida");
        break;
    }
    switch (escolhaComputador)
    {
    case 1:
        printf ("computador vai ser PEDRA\n");
        break;

    case 2:
        printf ("computador vai ser PAPEL\n");
        break;

    case 3:
        printf ("computador vai ser TESOURA \n");
        break;
    }
 
    if (escolhaComputador == escolhaJogador){
        printf ("EMPATOU\n");
    } else if ((escolhaJogador == 1)&& (escolhaComputador == 3) || (escolhaJogador == 2) && (escolhaComputador == 1) || (escolhaJogador == 3) && (escolhaComputador == 2)){
        printf ("VOCE GANHOU MEOOOOOO\n");
    } else {
        printf ("BAGRE PERDEDOR\n");
    }
    
   









}
