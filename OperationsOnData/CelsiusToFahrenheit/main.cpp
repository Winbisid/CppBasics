#include <iostream>


double celsius;
double fahrenheit = ((9*celsius)/5) + 32;

int main()
{

/*
std::cout << "The weather is " << celsius << " degrees celsius and " <<
fahrenheit << " degrees fahrenheit" << std::endl;
*/

std::cout << "Enter the tempearture in degree celsius : " <<std::endl;
std::cin >> celsius;

fahrenheit = ((9*celsius)/5) + 32;
std::cout << "The weather is " << fahrenheit << " degrees fahrenheit" <<
                std::endl;

return 0;
}