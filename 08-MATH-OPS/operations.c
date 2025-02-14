#include <stdio.h>

#include "operations.h"

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float divi(int a, int b)
{
    float result = 0.0;
    if ( b == 0 )
    {
        printf("\nErrore: divisione per zero\n");
    }
    else
    {
        result = (float) a / b;
    }
    return result;
}

int mod(int a, int b)
{
    float result = 0.0;
    if ( b == 0 )
    {
        printf("\nErrore: divisione per zero\n");
    }
    else
    {
        result = a % b;
    }

    return result;
}

int power(int a, int b)
{
    int result = 1;
    for (int i = 0; i < b; i++)
    {
        result *= a;
    }

    return result;
}

void test_all_operations(int arr[], int size)
{
    printf("\nTest di tutte le funzioni\n");
    for (int i = 0; i < size - 3; i++)
    {
        printf("%d + %d = %d\n", arr[i], arr[i + 1], add(arr[i], arr[i + 1]));
        printf("%d - %d = %d\n", arr[i + 1], arr[i + 2], sub(arr[i + 1], arr[i + 2]));
        printf("%d * %d = %d\n", arr[i + 2], arr[i + 3], mul(arr[i + 2], arr[i + 3]));
    } 
    return;
}
