#include <stdio.h>
#include <stdlib.h>



int main()
{
	char b[128] = "iudhwbciwy(())ghasd";
	int otwet = 0;
	int i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == '(')
		{
			otwet++;
			printf("%d\n", otwet);
		}
		if (b[i] == ')')
		{
			otwet--;
			printf("%d\n", otwet);
		}
		i++;
	}

	if (otwet == 0)
	{
		printf("otwet:\n");
		printf("0\n");
	}
	else
	{
		printf("otwet:\n");
		printf("-1\n");
	}
	
}