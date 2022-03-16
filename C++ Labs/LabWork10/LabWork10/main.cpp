//
//  main.cpp
//  LabWork10
//
//  Created by Egor Martinovich on 9.11.21.
//
#include <string>
#include <limits>
#include <type_traits>
#include <stdio.h>
#include <iostream>
using namespace std;
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

int main() {
cout << "Integer: "; int n; cin >> n;
   cout<< to_binary_string(n) <<endl;
unsigned significant = 0, zero = 0;
while (n) {
if (n & 1) ++significant;
else ++zero;
n >>= 1;
}
cout << significant - zero << endl;
cin.sync();
cin.get();
}
