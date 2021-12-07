// Se importan bibliotecas
#include<stdio.h>
#include<string.h>

// Proyecto: Juego C
// Curso: Plataformas
// Estudinates:
// Juárez Moraga Adonay B74047
// Prado Franklin
// Abarca Obregón Nelber

/* Este programa simula el juego ahorcado, que es basicamente
   tratar de adivinar la palabra escondida propuesta por un tercero.
*/
int main() {
    char frase[60],rep[100],temporal[100];
    char pal;
    int longitud,i,j,inicial,acertado=0,temp=0,oportunidades=8;
    int repetido=0,gano=0;



    printf("\n\t=======================================");

    printf("\n\t           JUEGO DEL AHORCADO");

    printf("\n\t=======================================");

    printf("");

    printf("\n\tInstrucciones: El ordenador pensar  una palabra y tienes 10");

    printf("\n\tintentos para acertarla. En cada intento podrás elegir una letra.");

    printf("\n\tSí la palabra a adivinar la contiene, aparecer  en su corres-");

    printf("\n\tpondiente posición. Sino, tendr s un intento menos.Hasta agotar");

    printf("\n\tlos 10. ­­­­BUENA SUERTE!!!");

    printf("\n\n");
    printf("Introduzca la palabra a adivinar: ");
    gets(frase);

    system("cls");

    longitud = 0;
    inicial = 0;
    j = 0;

    rep[0] = ' ';
    rep[1] = '\0';
