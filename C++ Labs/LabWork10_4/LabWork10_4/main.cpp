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

int main(int argc, const char * argv[]) {
    
        using namespace std;
        setlocale(LC_CTYPE, "Russian");
        char tmp[33];
        int A, B, n, m, threeBits, mask = 0b111;
        cout << "Введите A: ";
        cin >> A;
        cout << "Введите B: ";
        cin >> B;
        cout << "Введите n: ";
        cin >> n;
        cout << "Введите m: ";
        cin >> m;
        cout << "Число A: " << to_binary_string(A) << endl;
        cout << "Число B: " << to_binary_string(B) << endl;
        mask = mask << n;
        threeBits = A & mask;
        threeBits = threeBits >> n;
        B = B & (~(0b111 << m));
        threeBits = threeBits << m;
        cout << "Маска: " << to_binary_string(threeBits) << endl;
        B = B | threeBits;
        cout << "Результат: " <<to_binary_string(B) << endl;
        
    }

