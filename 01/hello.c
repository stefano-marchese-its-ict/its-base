// include standard input/output library

// include la libreria standard per la gestione di input/output
#include <stdio.h>

// main function - the entry point 
// the return value of the main is an integer

// e' la funzione principale - il punto di ingresso
// il valore di ritorno di main e' un intero
int main()
{
    // print the message "Hello World!!!" to the console
    // \n is the shortcut for new line

    // stampa il messaggio "Hello World!!!" sulla console
    // \n e' il comando per andare a capo
    printf("Hello World!!!\n\n\n");

    // variable of 32 chars

    // variabile di 32 caratteri
    char name[32];

    // ask for a name

    // chiede un nome
    printf("Enter a name: ");

    // read the input of the user
    
    // legge l'input dell'utente
    scanf("%s", name);

    // print a message with the name entered
    // stampa un messaggio con il nome inserito
    printf("\nHello\t%s\n\n\n", name);

    /* return 0: indicated that the program is terminated
       successfully */
    /* return 0: indica che il programma e' terminato
       con successo */
    return 0;
}