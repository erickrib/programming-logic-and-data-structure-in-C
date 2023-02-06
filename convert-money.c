#include <stdio.h>
#include <locale.h>

const double EURO = 0.90;
const double DOLAR = 1.20;
const double REAL = 6.60;

void convert_currency(double *value, const char *from, const char *to)
{
    double from_value;
    if (strcmp(from, "EURO") == 0)
    {
        from_value = EURO;
    }
    else if (strcmp(from, "DOLAR") == 0)
    {
        from_value = DOLAR;
    }
    else if (strcmp(from, "REAL") == 0)
    {
        from_value = REAL;
    }
    else
    {
        printf("Moeda de origem inválida.\n");
        return;
    }

    double to_value;
    if (strcmp(to, "EURO") == 0)
    {
        to_value = EURO;
    }
    else if (strcmp(to, "DOLAR") == 0)
    {
        to_value = DOLAR;
    }
    else if (strcmp(to, "REAL") == 0)
    {
        to_value = REAL;
    }
    else
    {
        printf("Moeda de destino inválida.\n");
        return;
    }

    *value = (*value) / from_value * to_value;
}

int main()
{
    double value;
    char from[6];
    char to[6];

    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("Informe o valor a ser convertido: ");
    scanf("%lf", &value);
    printf("Informe a moeda de origem (EURO, DOLAR ou REAL): ");
    scanf("%s", from);
    printf("Informe a moeda de destino (EURO, DOLAR ou REAL): ");
    scanf("%s", to);

    convert_currency(&value, from, to);
    printf("O valor convertido é: %.2lf\n", value);

    char repeat[5];
    printf("Deseja realizar outra conversão? (SIM ou NÃO): ");
    scanf("%s", repeat);
    if (strcmp(repeat, "SIM") == 0)
    {
        main();
    }
    else
    {
        return 0;
    }
}
