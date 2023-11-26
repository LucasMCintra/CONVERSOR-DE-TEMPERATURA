#include <stdio.h>
#include <ctype.h>

int main(){

    char unidade;
    float temperaturac, temperaturaf;

    printf("DIGITE A TEMPERATURA EM (F) OU (C) QUE VOCE QUER CONVERTER: ");
    scanf("%c", &unidade);

    unidade = toupper(unidade);

    if(unidade == 'C'){
        printf("VOCE ESCOLHEU CELSIUS.");
        printf("\nDIGITE A TEMPERATURA EM CELSIUS: ");
        scanf("%f", &temperaturac);

        temperaturaf = (temperaturac * 1.8) + 32;

        printf("A TEMPERATURA %f EM FAHRENHEIT E IGUAL A: %.2f", temperaturac, temperaturaf);
    }
    else if(unidade == 'F'){
        printf("VOCE ESCOLHEU FAHRENHEIT.");
        printf("\nDIGITE A TEMPERATURA EM FAHRENHEIT: ");
        scanf("%f", &temperaturaf);

        temperaturac = (temperaturaf - 32) * 5/9;

        printf("A TEMPERATURA %f EM CELSIUS E IGUAL A: %.1f", temperaturaf, temperaturac);
    }

    else{
        printf("ESTE FORMATO DE TEMPERATURA NAO ESTA DISPONIVEL.");
    }

    return 0;
}