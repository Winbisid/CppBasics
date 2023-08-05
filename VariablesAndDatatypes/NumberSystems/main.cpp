#include <iostream>
#include <string>

int main()
{
    int number1 (15);           //Dec
    int number2 = 017;          //Oct
    int number3 {0xf};          //Hex
    int number4 (0b00001111);   //Bin
    
    int conversion {2.9};

    std::cout << "Hello, testing my number systems! " << std::endl;
    std::cout << "Number1 is " << number1 << std::endl;
    std::cout << "Number2 is " << number2 << std::endl;
    std::cout << "Number3 is " << number3 << std::endl;
    std::cout << "Number4 is " << number4 << std::endl;
    std::cout << conversion << std::endl;

    std::cout << "sizeof int : " << sizeof(int) << std::endl;
    std::cout << "sizeof number3 : " << sizeof(number3) << std::endl;

return 0;
}