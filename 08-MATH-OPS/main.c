#include <stdio.h>

#include "operations.h"

int main()
{
    int choice, num1, num2;
    int numbers[] = {2, 4, 6, 8, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    do
    {
        printf("\nMenu dei comandi\n");
        printf("1. Addizione(+)\n");
        printf("2. Sottrazione(-)\n");
        printf("3. Moltiplicazione(*)\n");
        printf("4. Divisione(/)\n");
        printf("5. Modulo(%%)\n");
        printf("6. Potenza(^)\n");
        printf("7. Test di tutte le funzioni\n");
        printf("8. Esci\n");
        scanf("%d", &choice);

        if ( choice>= 1 && choice <= 6 )
        {
            printf("Inserisci due numeri separati da uno spazio: ");
            scanf("%d %d", &num1, &num2);
        } 

        switch (choice)
        {
            case 1:
            printf("Risultato: %d\n", add(num1, num2));
            break;
            case 2:
            printf("Risultato: %d\n", sub(num1, num2));
            break;
            case 3:
            printf("Risultato: %d\n", mul(num1, num2));
            break;
            case 4:
            printf("Risultato: %f\n", divi(num1, num2));
            break;
            case 5:
            printf("Risultato: %d\n", mod(num1, num2));
            break;
            case 6:
            printf("Risultato: %d\n", power(num1, num2));
            break;
            case 7:
            test_all_operations(numbers, size);
            break;
            case 8:
            printf("Fine del programma!\n");
            default:
            printf("La scelta effetuata non e' corretta\n");
            break;
        }
        
    } 
    while (choice != 8);

    return 0;
}