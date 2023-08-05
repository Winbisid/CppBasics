#include <iostream>

//Overloading by changing the parameter types
int max (int a, int b) {
    std::cout << "int overload called\n";
    return (a > b) ? a : b;
}

double max (double a, double b) {
    std::cout << "double overload called\n";
    return (a > b) ? a : b;
}

std::string_view max (std::string_view a, std::string_view b) {
    std::cout << "string_view overload called\n";
    return (a > b) ? a : b;
}

//Overloading by changing the parameters types||order
double max (int a, double b) {
    std::cout << "(int,double) overload called\n";
    return (a > b) ? a : b;
}

double max (double b, int a) {
    std::cout << "(double,int) overload called\n";
    return (a > b) ? a : b;
}

//Overloading by changing the number of parameters
double max (double b, int a, int c) {
    std::cout << "(double,int, int) overload called\n";
    return (a > b && c) ? a : b;    //Can do better than this 
}

int main()
{
int int_value1 {41};
int int_value2 {29};

double double_value1 {47.2};
double double_value2 {55.01};

std::string_view first("Hello");
std::string_view second("World");

std::cout << "max (" << int_value1 << "," << int_value2 << ") : " << max(int_value1, int_value2) << "\n";
std::cout << "max (" << 5 << "," << 7 << ") : " << max(5,7) << "\n";

std::cout << "max (" << double_value1 << "," << double_value2 << ") : " << max(double_value1, double_value2) << "\n";

std::cout << "max (" << first << "," << second << ") : " << max(first,second) << "\n";
std::cout << "max (dog,cat) : " << max("dog","cat") << "\n";

std::cout << "max (" << int_value1 << "," << double_value2 << ") : " << max(int_value1, double_value2) << "\n";
std::cout << "max (" << double_value1 << "," << int_value2 << ") : " << max(double_value1, int_value2) << "\n";

std::cout << "max (" << double_value1 << "," << int_value1 << "," << int_value2 << ") : " << max(double_value1, int_value1, int_value2) << "\n";
return 0;
}