#include <iostream>
#include <string>

int main()
{
std::string full_name;  //Empty string
std::string planet {"Earth. Where the sky is blue"};    //Initialize with string literal
std::string prefered_planet{planet};    //Initialize with other existing string
std::string message{"Hello there" , 5}; //Initialize with part of a string literal : Contains Hello
std::string weird_message(4,'e');   //Initialize with multiple copies of a char : Contains eeee
std::string greeting { "Hello World"};
std::string saying_hello { greeting,6,5};   //Initialize with part of an existing string starting at index 6, taking 5 characters : World

std::cout << "full_name : " << full_name << "\n";
std::cout << "planet : " << planet << "\n";
std::cout << "prefered_planet : " << prefered_planet  << "\n";
std::cout << "message : " << message << "\n";
std::cout << "weird_message : " << weird_message << "\n";
std::cout << "saying_hello : " << saying_hello << "\n";

//Changing std::string at runtime : Unlike arrays, std::string has a fluid size and can grow in size
planet = "Earth. Where the sky is blue, and the moon is bright at night";
std::cout << "planet : " << planet << "\n";

//Using a raw array
const char *planet1 = {"Earth. Where the sky is blue."};    //The memory is wasted here
planet1 = "Earth. Where the sky is blue and the moon is bright at night time";
std::cout << "planet1 : " << planet1 << "\n";

return 0;
}