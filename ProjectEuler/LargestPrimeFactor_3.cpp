/*--------------------[3] Largest prime factor-----------------
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?

solved 2019. 06. 24. mon
--------------------------------------------------------------*/

#include <iostream>

void get_prime_factor(__int64 num);

int main(void)
{
    __int64 number;
    std::cout << "input number : " ;
    std::cin >> number;

    get_prime_factor(number); 
    return 0;
}

void get_prime_factor(__int64 num)
{
    __int64 i = 2;
    while (true)
    {
        if(num % i == 0)
        {
            std::cout << i << std::endl;
            num /= i;
            get_prime_factor(num);
            break;
        }

        else if(num < 2)
        {
            break;
        }

        else i++;
    }
}