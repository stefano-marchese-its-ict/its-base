/* Chieda all'utente di inserire il proprio nome e cognome.
Stampi un messaggio di benvenuto personalizzato.
Visto che siamo ormai a Natale, visualizzare un messaggio di auguri.*/

// libreria per standard input/output
#include <stdio.h>

int main()
{
    // variabili per nome e cognome
    char nome[64] = "";
    char cognome[64] = "";

    // lettura da tastiera del nome e del cognome
    printf("Inserisci il tuo nome: ");
    scanf("%s", nome);
    printf("Inserisci il tuo cognome: ");
    scanf("%s", cognome);

    // stampa del messaggio di benvenuto
    printf("\n\n");
    printf("Benvenuto %s %s", nome, cognome);
    printf("\n\n");
    printf("  *\n");
    printf(" ***\n");
    printf("*****\n");
    printf("  * \n");

    printf("\n\n");

    // programma terminato correttamente
    return 0;
}