#include <stdio.h>
#define length 5

int main(void)
{

    int zahlen[length];
    int sum = 0;
    int mttelw = 0;
    int min = 0;
    int max = 0;
    int i = 0;
    int j = 0;

    //************* 5 Werte einlesen *********************
    for (i = 0; i < length; i++)
    {
        printf("Bitte geben Sie die %d. Zahl ein! ", i + 1);
        scanf_s("%d", &zahlen[i]);
    }


    //*********  Ausgabe des Arrays **********************
    printf("\n\nOriginale Reihenfolge\n");
    max = zahlen[0];
    min = zahlen[0];

    //*********Min, Max und Mittelwert ermitteln *********
    for (i = 0; i < length; i++)
    {
        printf("%d ", zahlen[i]);
        sum += zahlen[i];

        if (min > zahlen[i])
        {
            min = zahlen[i];
        }
        if (max < zahlen[i])
        {
            max = zahlen[i];
        }
    }

    mttelw = sum / length;

    //********* in umgekehrter Reihenfolge ausgeben ******
    printf("\nUmgekehrte Reihenfolge\n");
    for (i = length - 1; i >= 0; i--)
    {
        printf("%d ", zahlen[i]);
    }

    //************* Berechnungen ausgeben ****************
    printf("\nSumme: %d\n", sum);
    printf("Durchschnitt: %d\n", mttelw);
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    //************* Array sortieren (Bubble-Sort) *******
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length - i - 1; j++)
        {
            if (zahlen[j] > zahlen[j + 1])
            {
                int temp = zahlen[j];
                zahlen[j] = zahlen[j + 1];
                zahlen[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < length; i++)
    {
        printf("%d ", zahlen[i]);
    }

    return 0;
}
