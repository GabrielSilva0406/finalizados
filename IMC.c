#include <stdio.h>

int main (){
    float altura, peso, imc;


    printf ("CALCULADORA DE IMC\n");

    printf ("Digite seu peso (Kg):\n");
    scanf ("%f", &peso);

    printf ("Digite sua altura:\n");
    scanf ("%f", &altura);

    imc = peso / (altura * altura);

    printf ("seu IMC e: %2.f\n", imc);

    if ( imc < 18.5)
    {
        printf ("BAIXO PESO");
    }
    else if ( imc >= 18.5 && imc < 24.9)
    {
        printf ("NORMAL");
    }
    else if ( imc >= 25.0 && imc < 29.9)
    {
        printf ("EXCESSO DE PESO");
    }
    else if ( imc >= 30.0 && imc < 34.9) 
    {
        printf ("OBESIDADE 1");
    }
    else if ( imc >= 35.0 && imc < 39.9)
    {
        printf ("OBESIDADE 2");
    }
    else {
        printf ("OBESIDADE EXTREMA");
    }

    return 0;
}
