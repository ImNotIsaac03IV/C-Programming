#include <stdio.h>

int main()
{
    float betrag;
    char eingabe;
    float brutto;
    float netto;
    float mehrwertsteuer;

    printf("Betrag eingeben: ");
    scanf("%f", &betrag);

    printf("War das der Brutto- oder Nettobetrag? \n ");
    scanf(" %c", &eingabe);

    if (eingabe == 'n')
    {
        netto = betrag;
        brutto = netto * 1.5;
    }
    else if (eingabe == 'b')
    {
        brutto = betrag;
        netto = brutto / 1.5;
    }

    mehrwertsteuer = netto * 0.3;

    printf("Der Bruttobetrag lautet: %f\n", brutto);
    printf("Der Nettobetrag lautet: %f\n", netto);
    printf("Die Mehrwertsteuer lautet: %f\n", mehrwertsteuer);

    return 0;
}