//
//  main.cpp
//  LabWork10_2
//
//  Created by Egor Martinovich on 2.11.21.
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
using namespace std;
setlocale(LC_ALL, "rus");
int a;
short col1 = 0, i;
char tmp[33];
cout << "Введите а: ";
cin >> a;
    cout << "Число в двоичной системе: " << to_binary_string(a) << endl;
col1 = 0;
for(i = 5; i <= 10; i++)
{
if ( ((a >> i) & 1) == 1)
col1++;

}
cout << "Количество 1: " << col1 << endl;
    return 0;
}
