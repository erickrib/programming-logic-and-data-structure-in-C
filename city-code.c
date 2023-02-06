#include <stdio.h>
int main()
{
	int ddd;
	char *city;
	printf("Digite o DDD: ");
	scanf("%d", &ddd);
	switch (ddd)
	{
	case 61:
		city = "Brasilia\n";
		break;
	case 71:
		city = "Salvador\n";
		break;
	case 11:
		city = "Sao Paulo\n";
		break;
	case 21:
		city = "Rio de Janeiro\n";
		break;
	case 32:
		city = "Juiz de Fora\n";
		break;
	case 19:
		city = "Campinas\n";
		break;
	case 27:
		city = "Vitoria\n";
		break;
	case 31:
		city = "Belo Horizonte\n";
		break;
	default:
		city = "DDD nao cadastrado\n";
	}
	printf("%s", city);
	return 0;
}
