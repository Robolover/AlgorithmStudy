#include"LargestPrimeFactor.h"
#include<iostream>

using namespace std;

void factorization(int num)
{
	while (1)
	{
		if (num < 2) return;
		int p = 2;
		int primes[50];
		int index = 0;
		int i;

		while (num != 1)
		{
			if (num % p == 0) 
			{
				num = num / p;
				primes[index] = p;
				index++;
				p = 2;
			}
			else 
			{
				p++;
			}
		}

		if (index == 1) cout << "¼Ò¼ö" << endl;
		else 
		{
			for (i = 0; i < index - 1; i++) 
			{
				cout << primes[i] << " * ";
			}
			cout << primes[i];
		}
	}
}