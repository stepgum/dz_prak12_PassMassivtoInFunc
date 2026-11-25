#include <stdio.h>
#include <locale.h>

#define N 100

double* full_elements(double* ptr_array, int n);
int put_elements(double* ptr_array, int n);
int min_index(double* ptr_array, int n);

int main(void)
{
    setlocale(LC_ALL, "Russian");

    double array[N];
    int size;

    printf("Введите размер массива > ");
    scanf_s("%d", &size);

    full_elements(array, size);
    put_elements(array, size);

    printf("Индекс минимального элемента: %d\n", min_index(array, size));

    return 0;
}

double* full_elements(double* ptr_array, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i + 1);
        scanf_s("%lf", &ptr_array[i]);
    }
    return ptr_array;
}

int put_elements(double* ptr_array, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%8.2f", ptr_array[i]);
    printf("\n");
    return n;
}

int min_index(double* ptr_array, int n)
{
    int i, imin = 0;
    for (i = 1; i < n; i++)
    {
        if (ptr_array[i] < ptr_array[imin])
            imin = i;
    }
    return imin;
}