#include <iostream>

int main()
{
int int_data {33};
double double_data{55};

//References
int& ref_int_data {int_data};
double& ref_double_data {double_data};

//Printing out
std::cout << "int_data :" << int_data << std::endl;
std::cout << "&int_data :" << &int_data << std::endl;
std::cout << "double_data :" << double_data << std::endl;
std::cout << "&double_data :" << &double_data << std::endl;

std::cout << "------------------------------------" << std::endl;

std::cout << "ref_int_data :" << ref_int_data << std::endl;
std::cout << "&ref_int_data :" << &ref_int_data << std::endl;
std::cout << "ref_double_data :" << ref_double_data << std::endl;
std::cout << "&ref_double_data :" << &ref_double_data << std::endl;

std::cout << "------------------------------------" << std::endl;

int_data=111;
double_data= 67.2;

//Printing out changes to the original variables.
std::cout << "int_data :" << int_data << std::endl;
std::cout << "&int_data :" << &int_data << std::endl;
std::cout << "double_data :" << double_data << std::endl;
std::cout << "&double_data :" << &double_data << std::endl;

std::cout << "------------------------------------" << std::endl;

std::cout << "ref_int_data :" << ref_int_data << std::endl;
std::cout << "&ref_int_data :" << &ref_int_data << std::endl;
std::cout << "ref_double_data :" << ref_double_data << std::endl;
std::cout << "&ref_double_data :" << &ref_double_data << std::endl;

std::cout << "------------------------------------" << std::endl;

//Changing data through references
ref_int_data=1012;
ref_double_data=1000.45;

//Printing out changes. Changing one affects the other
std::cout << "int_data :" << int_data << std::endl;
std::cout << "&int_data :" << &int_data << std::endl;
std::cout << "double_data :" << double_data << std::endl;
std::cout << "&double_data :" << &double_data << std::endl;

std::cout << "------------------------------------" << std::endl;

std::cout << "ref_int_data :" << ref_int_data << std::endl;
std::cout << "&ref_int_data :" << &ref_int_data << std::endl;
std::cout << "ref_double_data :" << ref_double_data << std::endl;
std::cout << "&ref_double_data :" << &ref_double_data << std::endl;

return 0;
}