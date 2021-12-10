// Se importan bibliotecas
#include<stdio.h>
#include<string.h>

// Proyecto: Juego C
// Curso: Plataformas
// Estudinates:
// Juarez Moraga Adonay B74047
// Calderon Prado Franklin B81405
// Abarca Obregon Nelber  B60022

/* Este programa simula el juego ahorcado, que es basicamente
   tratar de adivinar la palabra escondida propuesta por un tercero.
*/

// Se realiza la funcion principal
int main() {
    char frase[60],rep[100],temporal[100];
    char pal;
    int longitud,i,j,inicial,acertado=0,temp=0,oportunidades=7;
    int repetido=0,gano=0;

    // Se presenta el menú de inicio 

    printf("\n\t=======================================");

    printf("\n\t           JUEGO DEL AHORCADO");

    printf("\n\t=======================================");

    printf("");

    printf("\n\tInstrucciones: El ordenador 1 debe ingresar una palabra y tienes 6");

    printf("\n\tintentos para acertarla. En cada intento puedes elegir una letra.");

    printf("\n\tSi la palabra a adivinar la contiene, aparecer  en su corres-");

    printf("\n\tpondiente posicion. Sino, tendra un intento menos, hasta agotar");

    printf("\n\tlos 6 intentos. BUENA SUERTE!!!");

    printf("\n\n");
    printf("Introduzca la palabra a adivinar: ");
    gets(frase);

    system("cls");
    
    // Declaramos variables necesarias 
    longitud = 0;
    inicial = 0;
    j = 0;

    rep[0] = ' ';
    rep[1] = '\0';

    // Bucle que determina cantidad aciertos en el juego
    do {
                system("cls");
        temp=0;
	 if (oportunidades==7)
	{
            puts("  _ _ ");
            puts(" |    ");
            puts(" |    ");     // solo la base de la horca
            puts(" |   ");
            puts(" |    ");
            puts("_|_  ");
	}
	if (oportunidades==6)
	{
            puts("  _ _ ");
            puts(" |    ");
            puts(" |  \e[0;91m O \e[0m");  // la base y la cabeza
            puts(" |   ");
            puts(" |    ");
            puts("_|_  ");
	}
	if (oportunidades==5)
	{
            puts("  _ _ ");
            puts(" |    ");
            puts(" |  \e[0;91m O \e[0m");  
            puts(" | \e[0;91m / \e[0m ");   // la base, cabeza y un brazo
            puts(" |    ");
            puts("_|_  ");
	}
	if (oportunidades==4)
	{
            puts("  _ _ ");
            puts(" |    ");
            puts(" |  \e[0;91m O \e[0m");
            puts(" | \e[0;91m /\e[0m\e[0;91m \\ \e[0m");  // la base, cabeza y los dos brazos
            puts(" |    ");
            puts("_|_  ");
	}
	if (oportunidades==3)
	{
            puts("  _ _ ");
            puts(" |    ");
            puts(" |  \e[0;91m O \e[0m");
            puts(" | \e[0;91m /\e[0m\e[0;91m \\ \e[0m");   // la base, cabeza, dos brazos y el cuerpo
            puts(" |  \e[0;91m | \e[0m");
            puts("_|_  ");
	}
	if (oportunidades==2)
	{
            puts("  _ _ ");
            puts(" |    ");
            puts(" |  \e[0;91m O \e[0m");
            puts(" | \e[0;91m /\e[0m\e[0;91m \\ \e[0m");
            puts(" |  \e[0;91m | \e[0m");
            puts("_|_\e[0;91m /  \e[0m");		// la base, cabeza, dos brazos, el cuerpo y un pie
	}
	if (oportunidades==1)
	{
            puts("  _ _ ");
            puts(" |    ");
            puts(" |  \e[0;91m O \e[0m");
            puts(" | \e[0;91m /\e[0m\e[0;91m \\ \e[0m");
            puts(" |  \e[0;91m | \e[0m");
            puts("_|_\e[0;91m /\e[0m\e[0;91m \\ \e[0m");  // la base, cabeza, dos brazos, el cuerpo y los pies
	}  

   if (oportunidades==0)
        {
            puts("  _ _ ");
            puts(" |    |");
            puts(" |  \e[0;91m O \e[0m");
            puts(" | \e[0;91m /\e[0m\e[0;91m \\ \e[0m");
            puts(" |  \e[0;91m | \e[0m");
            puts("_|_\e[0;91m /\e[0m\e[0;91m \\ \e[0m");  //  // la base, cabeza, dos brazos, el cuerpo, los dos pies y la cuerda que ahorca al personaje

           break;
        }

        if(inicial == 0) {
         for(i=0;i<strlen(frase);i++) {
          if(frase[i] == ' ') {
            temporal[i] = ' ';
             longitud++;
          }
          else {
             temporal[i] = '_';
             longitud++;

          }
         }
        }

        inicial = 1;

        temporal[longitud] = '\0';
        

        /*
         Estructura de control que almacena datos
         y notifica ciertos eventos durante el juego 
        */
        for(i=0;i<strlen(rep);i++) {
           if(rep[i] == pal) {
            repetido = 1;

            break;
          }
          else {
           repetido = 0;

         }
        }
        // Estructura de control indica aciertos
        if(repetido == 0) {
         for(i=0; i<strlen(frase); i++) {
                    if(frase[i] == pal) {
             temporal[i] = pal;
              acertado++;
              temp=1;
            }
          }
        }
        // Control de oportunidades en el juego
        if(repetido == 0) {
         if(temp == 0) {

           oportunidades = oportunidades - 1;

         }
        }
        else {
         printf("Ya ha introducido este caracter");
         printf("\n\n");

        }

        printf("\n");

        // Imprime letras acertadas      
        for(i=0 ; i<strlen(temporal); i++) {
         printf(" %c ",temporal[i]);

        }

        printf("\n");
        

        // Completa el juego
        if(strcmp(frase,temporal) == 0) {
            gano = 1;
            break;
        }
        
        printf("\n");
        printf("Letras Acertadas: %d",acertado);
        printf("\n");
        printf("Oportunidades Restantes: %d",oportunidades);
        printf("\n");


        rep[j] = pal;
        j++;
	    // se presenta la figura del ahorcado de acuerdo a las oportundades restantes
      

        printf("Introduzca una letra:");
        scanf("\n%c",&pal);
    

    // Bucle de control de oportunidades
    // Notificación de victoria o derrota
    }while(oportunidades != 0);


    if(gano) {
                printf("\n\n");
        printf("¡¡Felicidades, has ganado!!");
    }
    else {
                printf("\n\n");
        printf("¡¡Lo siento, perdiste!!");
    }

    printf("\n\n");
    system("PAUSE");
    return 0;
    
}
