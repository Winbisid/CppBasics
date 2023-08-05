#include <iostream>

int main()
{
// Declare pointer and reference
double double_value {12.34};
double& ref_double_value{double_value}; //References must always be initialized
double *p_double_value {&double_value};

//Reading
std::cout << "double_value : " << double_value << std::endl;
std::cout << "ref_double_value : " << ref_double_value << std::endl;
std::cout << "p_double_value : " << p_double_value << std::endl;
std::cout << "*p_double_value : " << *p_double_value << std::endl;
std::cout << std::endl;

//Writing through pointer
*p_double_value = 15.4;

std::cout << "double_value : " << double_value << std::endl;
std::cout << "ref_double_value : " << ref_double_value << std::endl;
std::cout << "p_double_value : " << p_double_value << std::endl;
std::cout << "*p_double_value : " << *p_double_value << std::endl;
std::cout << std::endl;

//Writing through reference
ref_double_value = 18.44;

std::cout << "double_value : " << double_value << std::endl;
std::cout << "ref_double_value : " << ref_double_value << std::endl;
std::cout << "p_double_value : " << p_double_value << std::endl;
std::cout << "*p_double_value : " << *p_double_value << std::endl;
std::cout << std::endl;

//Changing the value of the reference will change it but not affect the address/memory location
//Trying to make a reference refer to something else won't work,
//it'll just change the value of the current variable it is referencing
double some_other_double {78.45};
ref_double_value = some_other_double;

std::cout << "double_value : " << double_value << std::endl;
std::cout << "ref_double_value : " << ref_double_value << std::endl;
std::cout << "p_double_value : " << p_double_value << std::endl;
std::cout << "*p_double_value : " << *p_double_value << std::endl;
std::cout << std::endl;

//Pointers can however change which variable/address they're referencing
p_double_value = &some_other_double;    //Pointer now has new address
std::cout << "double_value : " << double_value << std::endl;
std::cout << "ref_double_value : " << ref_double_value << std::endl;
std::cout << "&double_value : " << &double_value << std::endl;
std::cout << "&ref_double_value : " << &ref_double_value << std::endl;
std::cout << "p_double_value : " << p_double_value << std::endl;
std::cout << "*p_double_value : " << *p_double_value << std::endl;
std::cout << std::endl;

//Changing pointer value to show it lives elsewhere therefore won't affect its previous variable(double_value)
*p_double_value= 555.5;
std::cout << "double_value : " << double_value << std::endl;
std::cout << "ref_double_value : " << ref_double_value << std::endl;
std::cout << "&double_value : " << &double_value << std::endl;
std::cout << "&ref_double_value : " << &ref_double_value << std::endl;
std::cout << "p_double_value : " << p_double_value << std::endl;
std::cout << "*p_double_value : " << *p_double_value << std::endl;
std::cout << std::endl;

return 0;
}