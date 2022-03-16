//
//  main.cpp
//  LabWork10_1
//
//  Created by Egor Martinovich on 9.11.21.
//

#include <string>
#include <limits>
#include <type_traits>
#include <stdio.h>
#include <iostream>

template<typename T>
std::string to_binary_string(T n)
{
    static_assert(std::is_integral<T>::value, "Integer required.");
    if (std::numeric_limits<T>::is_signed &&
        n == std::numeric_limits<T>::min()) // (*)
    {
        // переполнение в знаковом типе - UB, избегаем его
        return "-1" + std::string(std::numeric_limits<T>::digits, '0');
    }

    std::string buffer;
    buffer.reserve(std::numeric_limits<T>::digits + 1); // +1 для возможного минуса

    bool negative = (n < 0);
    if (negative)
        n = -n; // это можно делать вследствие проверки (*)

    do
    {
        buffer += char('0' + n % 2);
        n = n / 2;
    } while (n > 0);

    if (negative)
        buffer += '-';

    return std::string(buffer.crbegin(), buffer.crend());
}
int main()
{
    char buffer[33];
       std::cout << "Enter number A: ";
       int a;
       std::cin >> a;


       std::cout << "A in binary = " << to_binary_string(a) << '\n';

       std::cout << "How much bits your are want to make into '0': ";
       int n;
       std::cin >> n;

       int position = -1;
       while (position < 1)
       {
           std::cout << "From what position would you like to do it: ";
           std::cin >> position;
       }

       unsigned int mask = (1 << n) - 1;
       a &= ~(mask << (position - 1));

    std::cout<< to_binary_string(a) << std::endl;
       std::cout << "\nA in binary after all transformations: " << buffer << "\nIt's " << a << " in decimal.\n";
}
