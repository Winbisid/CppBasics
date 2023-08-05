#include <iostream>

int main()

{
// Pointers
int* p_number0 {};              //Compiler will initialize to nullptr since it was left empty
double* p_fractional_number0{};

//Declare and explicitly initialize with nullptr
int *p_number{nullptr};
double *p_fractional_number1{nullptr};

std::cout << "size of int* : " << sizeof(int*) <<std::endl;         //Pointers to different variables are of the same size
std::cout << "size of double* : " << sizeof(double*) <<std::endl;   //No matter the variable. Size depends on the machine

std::cout << "Size of number pointer : " << sizeof(p_number) << ", size of int " << sizeof(int) <<std::endl;
std::cout << "Size of fractional number pointer : " << sizeof(p_fractional_number1) << ", size of double " <<
 sizeof(double) <<std::endl;

/*
int *p_number5{}, other_int_var{}; // Confusing as you wonder whether both are pointers or only the first one is
//Better to separate them on two different lines. (Only the first one is a pointer cos of the '*' sign.
//Add the sign to both if you want it this way but it's better to separate them like below)
int *p_number7{};
int *other_int_va7{}; */

//Assigning data into to pointer variables
int int_var {43}; //Initializing and assigning data
//Pointers store addresses of variables
int *p_int{&int_var}; //The address of the operator (&)

std::cout << "Int var : " << int_var << std::endl;
std::cout << "p_int (Addresss in memory) : " << p_int << std::endl;

//You can also change the value of the address stored in a pointer at any time
int int_var1{65};
int_var1 =126;

p_int = &int_var1; //Assign a different address to the pointer
std::cout << "p_int (with different addresss) : " << p_int << std::endl;

//Can't cross assign b/n pointers of different types 
int *p_int1{};
double double_var{33};

// p_int1 = &double_var; //Compiler error

//Dereferencing a pointer (Calling the value at the address stored in the pointer)
int int_data{35};
int *p_int2{&int_data};

std::cout << "The address of the value : " << p_int2 << std::endl;
std::cout << "The value at the address : " << *p_int2 << std::endl; //Dereferencing

return 0;
}