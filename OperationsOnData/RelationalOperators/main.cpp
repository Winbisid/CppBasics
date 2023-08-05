#include <iostream>

int main()
{
    int number1 {45};
    int number2 {60};

std::cout << "number1: " << number1 << std::endl;
std::cout << "number2: " << number2 << std::endl;

std::cout << std::endl;
std::cout << "Comparing variables: " << std::endl;

std::cout << std::boolalpha; //Convert 1||0 to true||false
//Use parantheses to output the comparison else compiler error due to precedence of '<<' outranks '<'
std::cout << "number1 <  number 2 : " << (number1 < number2)  << std::endl;
std::cout << "number1 <= number 2 : " << (number1 <= number2) << std::endl;
std::cout << "number1 >  number 2 : " << (number1 > number2)  << std::endl;
std::cout << "number1 >= number 2 : " << (number1 >= number2) << std::endl;
std::cout << "number1 == number 2 : " << (number1 == number2) << std::endl;

std::cout << std::noboolalpha; //Reset true||false to 1||0
std::cout << "number1 != number 2 : " << (number1 != number2) << std::endl;

std::cout << std::endl;
std::cout << "Store a comparison result and use it later" << std::endl;

bool result = (number1 == number2);
std::cout << number1 << " == " << number2 << " : " << result << std::endl;

return 0;
}