#include <iostream>

int main()
{
    /*
//How we've used pointers so far
int number {22};  //Stack
int *p_number = &number;

std::cout << "Declaring pointer and assigning address : " << std::endl;
std::cout << "number : " << number << std::endl;
std::cout << "p_number : " << p_number << std::endl;
std::cout << "&number : " << &number << std::endl;
std::cout << "*p_number : " << *p_number << std::endl;
std::cout << std::endl;

int *p_number1;         //Uninitialized pointer, contains junk address
int number1 {12};
p_number1 = &number1;   //Make it point to a valid address

std::cout << "Uninitialized pointer" << std::endl;
std::cout << "*p_number1 : " << *p_number1 << std::endl;
std::cout << std::endl;
*/
/*
//BAD!
//Writing into uninitialized pointer through dereference
int *p_number2;     //Contains junk address : could be anything
std::cout << "Writing in the 55" << std::endl;
*p_number2 = 55;    //Writing into junk address : BAD!

std::cout << "Writing into uninitialized pointer through dereference" << std::endl;
std::cout << "p_number2 : " << p_number2 << std::endl;      //Reading from junk address
std::cout << "*p_number2 : " << *p_number2 << std::endl;
std::cout << std::endl;
*/
/*
//Initializing pointer to null
//int *p_number3{nullptr}; //Also works
int *p_number3{};       //Initialized with pointer equivalent of zero : nullptr
                        //A pointer pointing nowhere
                        std::cout << "Writing into nullptr" << std::endl;
*p_number3 = 33;    //Writing into a pointer pointing nowhere : BAD!, CRASH!
                        std::cout << "Done writing" << std::endl;
std::cout << "Reading and writing through nullptr" << std::endl;
std::cout << "p_number3 : " << p_number3 << std::endl;
std::cout << "*p_number3 : " << *p_number3 << std::endl;        //Raeding from nullptr
std::cout << std::endl;
*/
/*
// Dynamic Heap memory allocation
int *p_number4 {nullptr};
p_number4= new int;         //Dynamically alllocate space for a single int on the heap
                            //This memory belongs to our program for now on
                            //The system can't use it for anything else until we return it
                            //After this line executes,  we will have a valid memory location allocated
                            //The size of the memory allocated will be such that it can store the type pointed to by the pointer

*p_number4 = 77;

std::cout << "Dynamically allocating memory : " << std::endl;
std::cout << "*p_number4 : " << *p_number4 << std::endl;

//Returning the allocated heap space to the OS
delete p_number4;
p_number4 = nullptr; //best practice to show you're not using the memory and the address is valid for another use
*/
/*
std::cout << "*p_number4 : " << *p_number4 << std::endl; //Since memory is released, contains junk or another program/process' data
std::cout << std::endl; */

/*
std::cout << "Writing in bad memory : " << std::endl;
*p_number4 = 45;    //Memory is already released to the system so don't do this right after deleting
std::cout << "*p_number4 : " << *p_number4 << std::endl;
std::cout << "Done writing" << std::endl;
std::cout << std::endl;
*/

//Dynamically initialize pointer with a valid address upon declaration. Not with nullptr
int *p_number5{new int};        //Memory allocation contains junk value
int *p_number6{new int(22)};    //Use direct initialization
int *p_number7{new int{23}};    //Use uniform initialization

std::cout << "Initialize with valid memory address at declaration : " << std::endl;
std::cout << "p_number5 : " << p_number5 << std::endl;
std::cout << "*p_number5 : " << *p_number5 << std::endl;

std::cout << "p_number6 : " << p_number6 << std::endl;
std::cout << "*p_number6 : " << *p_number6 << std::endl;

std::cout << "p_number7 : " << p_number7 << std::endl;
std::cout << "*p_number7 : " << *p_number7 << std::endl;

delete p_number5;
p_number5 = nullptr;

delete p_number6;
p_number6 = nullptr;

delete p_number7;
p_number7 = nullptr;

//Can reuse pointers after releasing and resetting them
p_number5 = new int {81};
std::cout << "p_number5 : " << p_number5 << std::endl;
std::cout << "*p_number5 : " << *p_number5 << std::endl;

delete p_number5;       //Deleting again to free it
p_number5 = nullptr;    //Making it clear it is available for reuse.

std::cout << "Program ended well" << std::endl;

//Calling delete twice on a pointer : BAD! 
p_number5 = new int {99};
std::cout << "*p_number5 : " << *p_number5 << std::endl;

delete p_number5;       //Never delete twice
delete p_number5; 
p_number5 = nullptr;

std::cout << "Program ended well" << std::endl;

return 0;
}