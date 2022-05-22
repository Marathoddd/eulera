#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
int main()
{

	
}

void Eu_1()
{
	int summa = 0;

	for (int i = 3; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			summa = summa + i;
		}

	}
	printf("%d\n", summa);
}


void Eu_2()
{
	unsigned long long summa = 0;
	int f1 = 1;
	int f2 = 1;
	while (f1 < 4000000 && f2 < 4000000)
	{
		if (f1 % 2 == 0)
		{
			summa = summa + f1;

		}
		if (f2 % 2 == 0)
		{
			summa = summa + f2;
		}
		f1 = f1 + f2;
		f2 = f2 + f1;
	}

	

	printf("%d\n", summa);
}


void Eu_3()
{

	long long int otwet = 0;
	long long int num = 600851475143;



	for (long long int i = num/2;i >2; i--)
	{
		flag = 1;
		if (num % i == 0)
		{
			for (int j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					flag = 0;
				}
			}

			if (flag)
				otwet = i;
		}
	}

	printf("%lli\n", otwet);

}

void Eu_4()
{
	int num = 0;
	int newnum = 0;
	int copy = 0;
	int count = 0;
	int otwet = 0;

	for i = 999; i >= 100; i--)
	{
	for (int j = 999; j >= 100; j--)
	{
		num = i * j;
		copy = num;
		count = 0;
		newnum = 0;
		while (numcopy > 0)
		{
			newnum = newnum * 10;
			newnum = newnum + copy % 10;
			copy /= 10;
			count++;
		}
		if (num == newnum && otwet < newnum)
		{
			otwet = newnum;
		}
	}
	}

	printf("%d\n", otwet);
}

void Eu_5()
{

	int otwet = 20;
	int i = 2;

	while (i < 21)
	{
		if (otwet % i != 0)
		{
			otwet++;
			i = 2;
		}
		else
			i++;
	}

	printf("%d\n", otwet);
}



void Eu_6()
{


	int Sum = 0;
	int sumsqr = 0;
	int otwet;

	for (int i = 1; i <= 100; i++)
	{
		Sum = Sum + i * i;
		sumsqr = sumsqr +  i;
	}
	sumsqr = sumsqr * sumsqr;

	otwet = sumsqr- Sum;

	printf("%d\n", otwet);
}

void Eu_7()
{

	int count = 0;
	int otwet = 0;

	for (; count < 10001; otwet++)
	{
		if (IsPrime(otwet) == 1)
			count++;
	}

	printf("%d\n", otwet - 1);
}
void Eul_8()
{
	int i = 0;
	unsigned long long otwet = 0;
	char big[1000] = { "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450" };
	int y = (int)(big[i] - '0');
	printf("%d\n", y);
	while (i < 987)
	{
		unsigned long long o = 0;
		o = ((int)(big[i] - '0')) * ((int)(big[i + 1] - '0'));
		o = o * ((int)(big[i + 2] - '0')) * ((int)(big[i + 3] - '0'));
		o = o * ((int)(big[i + 4] - '0')) * ((int)(big[i + 5] - '0'));
		o = o * ((int)(big[i + 6] - '0')) * ((int)(big[i + 7] - '0'));
		o = o * ((int)(big[i + 8] - '0')) * ((int)(big[i + 9] - '0'));
		o = o * ((int)(big[i + 10] - '0')) * ((int)(big[i + 11] - '0')) * ((int)(big[i + 12] - '0'));
		printf("%llu\n", o);
		if (otwet < o)
		{
			otwet = o;
			printf("%llu\n", otwet);
		}
		i++;
	}
	printf("%llu\n", otwet);
}

void Eul_9()
{
	int otwet = 0;
	for (int num1 = 1; num1 <= 995; num1++)
		for (int num2 = num1 + 1; num2 <= 996; num2++)
			for (int num3 = num2 + 1; num3 <= 997; num3++)
				if ((num1 * num1 + num2 * num2 == num3 * num3) && (num1 + num2 + num3 == 1000))
				{
					otwet = num1 * num2 * num3;
				}
				printf("%d\n", otwet);
}

void Eul_10()
{

}



void Eul_12()
{
	unsigned int otwet = 0;
	int count = 1;
	int dlina;

	for (int i = 1; count <= 500; i++)
	{
		count = 1;
		otwet =otwet+ i;
		dlina = otwet*otwet;
		for (int j = 2; j <= dlina; j++)
			if (otwet % j == 0)
				if (j == dlina)
					count++;
				else
					count += 2;
	}

	printf("12: %d\n", otwet);
}


void Eul_13()
{

}

void Eul_14()
{
	long long n = 0;
	long long count = 0;
	long long max = 0;
	int otwet = 0;
	int i = 1000000;
	while ( i > 1)
	{
		n = i;
		count = 1;
		while (n > 1)
		{
			if (n % 2 == 0)
			{
				n =n/ 2;
				++count;
			}
			else
			{
				n = (n * 3) + 1;
				++count;
			}
		}
		if (count >= max)
		{
			max = count;
			otwet = i;
		}
		i--;
	}
	printf("%d\n", otwet);
}

void Eul_15()
{
	long long int arr[21][21] = { 0 };
	int otwet;
	for (int i = 0; i < 21; i++)
		for (int j = 0; j < 21; j++)
		{
			if (i == 0 && j == 0)
				arr[i][j] = 0;
			else
				if (i == 0 || j == 0)
					arr[i][j] = 1;
				else
					arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}
	printf("15: %lli\n", arr[20][20]);
}