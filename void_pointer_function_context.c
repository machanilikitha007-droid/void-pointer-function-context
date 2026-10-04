#include <stdio.h>

void processData(void *data, void (*operation)(void *))
{
    operation(data);
}

void printNumber(void *data)
{
    int *number = (int *)data;
    printf("Number: %d\n", *number);
}

void printDouble(void *data)
{
    double *value = (double *)data;
    printf("Double: %.2f\n", *value);
}

int main()
{
    int number = 75;
    double value = 42.50;

    processData(&number, printNumber);
    processData(&value, printDouble);

    return 0;
}
