#include <iostream>
#include <fstream>
int main()
{
    std::ifstream in("f.txt");
    std::ofstream out1("g.txt");
    std::ofstream out2("h.txt");
    int number;
    while(in >> number)
    {
        if(number%2) out2 << number << " ";
        else out1 << number << " ";
    }
    return 0;
}
