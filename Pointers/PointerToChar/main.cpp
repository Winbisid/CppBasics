#include <iostream>

int main()
{

//Can use normal pointer to char like we've been doing for double, int and anything else really
char *p_char_var{nullptr};
char char_var{'A'};
p_char_var=&char_var;

std::cout << "The value stored in p_char_var is : " << *p_char_var << std::endl;

char char_var1 {'C'};
p_char_var=& char_var1;

std::cout << "The value stored in p_char_var is : " << *p_char_var << std::endl;

//Initialize with string literal.(C-string) Converts the string into arrays of characters
//The first character of the array is going to be pointed to the pointer initialized
const char *p_message {"Hello World!"};

std::cout << "The message is " << p_message << std::endl;   //Printing out

std::cout << "The value (stored in the first location in the array) is " << *p_message << std::endl; //Dereferencing the pointer

//Since the string literal is made up of const char, modifying it will only end in disaster
/*
*p_message = 'B';
std::cout << "The message (after modification of the first char to B) is : " << p_message << std::endl;
*/

//Can modify the pure array initialized with string literal. Use this if you wan a modifiable string literal
char message2[]{"Hello there!"};
message2[0] = 'T';

std::cout << "*message2 : " << *message2 << std::endl;
std::cout << "message2[0] : " << message2[0] << std::endl;
std::cout << "message2 : " << message2 << std::endl;

return 0;
}