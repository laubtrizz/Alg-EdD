#include <stdio.h>
#include <locale.h>

int main()
{
    unsigned int maca_quantidade;
    setlocale(LC_ALL, "Portuguese");

    printf("Quantidade de maçãs: ");
    scanf("%i", &maca_quantidade);


    if(maca_quantidade < 12)
    {
        printf("Preço: %.2f", (maca_quantidade*1.3));
    }
    else
    {
        printf("Preço: %.2f", (maca_quantidade*1.1));
    }


    return 0;
}
