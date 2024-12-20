// include standard input/output library
#include <stdio.h>

// main function - the entry point 
// the return value of the main is an integer
int main()
{
    // print the message "Hello World!!!" to the console
    // \n is the shortcut for new line
    printf("Hello World!!!\n\n\n");

    // variable of 32 chars
    char name[32];

    // ask for a name
    printf("Enter a name: ");

    // read the input of the user
    scanf("%s", name);

    // print a message with the name entered
    printf("\nHello\t%s\n\n\n", name);

    /* return 0: indicated that the program is terminated
       successfully */
    return 0;
}