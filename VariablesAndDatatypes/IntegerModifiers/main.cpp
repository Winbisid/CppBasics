#include <iostream>
#include <cmath>

int main()
{
unsigned short int value1 {220};
signed long int value2 {-300}; 
signed long long value3 {-434};
signed value4 {2};

std::cout << "Hello Bird!" << std::endl;
std::cout << value1 << std::endl;
std::cout << value2 << std::endl;
std::cout << value3 << std::endl;
std::cout << sizeof(value2) << std::endl;
std::cout << value4 << std::endl;




return 0;
}