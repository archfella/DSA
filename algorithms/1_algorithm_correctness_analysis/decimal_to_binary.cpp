#include <iostream>

void decimal_to_binary(unsigned long n)
{
    bool binary_digits[32] = {false};

    int ind = 0;

    while (n)
    {
        binary_digits[ind++] = n % 2;
        n /= 2;
    }

    for (int i = 31; i >= 0; i--)
        std::cout << (binary_digits[i] ? 1 : 0);
    std::cout << std::endl;
}