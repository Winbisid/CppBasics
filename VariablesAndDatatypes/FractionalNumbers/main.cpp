#include <iostream>
#include <iomanip>

int main()
{
double number10 {-5.6};
double number11 {};
double number12 {};

//Infinity
double result {number10/number11};

std::cout << number10 << " / " << number11 << " yields " << result << std::endl;

std::cout << result << " + " << number10 << " yields " << result+number10 << std::endl;

//NaN
result = number11/number12;

std::cout << number11 << "/" << number12 << " = " << result << std::endl;

    
std::cout << "------------------------------------" << std::endl;

float number1 {1.12345678901234567890f}; //Precision is 7. The rest is rand garbage input
double number2 {1.12345678901234567890}; //Precison is 15. The rest is garbage input 
long double number3 {1.12345678901234567890l}; //This has the best precision. 15+

std::cout << std::setprecision(20);

std::cout << "float is: " << number1 << std::endl;
std::cout << "Size of float is: " << sizeof(float) << std::endl;

std::cout << "double is: " << number2 << std::endl;
std::cout << "Size of float is: " << sizeof(double) << std::endl;

std::cout << "long double is: " << number3 << std::endl;
std::cout << "Size of long double is: " << sizeof(long double) << std::endl;


//Float problems is that the precision is usually limited
float number5 {1924000023.21f}; //Error: narrowing conversion. Basiclly numbers get chopped off
std::cout << "number 5 is: " << number5 << std::endl; //Use double for greater precision

std::cout << "------------------------------------" << std::endl;

double number4 {3.92563256394367e12};
double number6 {192400023};
double number7 {1.92400023e8};
double number8 {1.924e8};   //Can omit the 00023 for simp[licity  
                            //but only if the application being written allows it
double number9 {0.00000000003498};
double number0 {3.498e-11}; 


std::cout << "number 4 is: " << number4 << std::endl;
std::cout << "number 6 is: " << number6 << std::endl;
std::cout << "number 7 is: " << number7 << std::endl;
std::cout << "number 8 is: " << number8 << std::endl;
std::cout << "number 9 is: " << number9 << std::endl;
std::cout << "number 0 is: " << number0 << std::endl;

return 0;
}