#include <iostream>

int main()
{

//Declare array
char message [5] {'H','e','l','l','o'};

/*
//Print out an array through looping. Range based for loop
for (auto c : message){
    std::cout << "message : " << c << std::endl;
}
*/
/*
//Change characters in an array
message[1] = 'a';
for (auto c : message){
    std::cout << "message : " << c << std::endl;
}
*/

//Print out using std::size
// for(char a{}; std::size(message); ++a ){
//     std::cout << "message : " << message[a] << std::endl;
// }

// std::cout << "message : " << message << std::endl; // No Null termination above so garbage added after characters

//If a character is null terminated it is called a c string.
    char message1[] {'H','e','l','l','o','\0'};     //Adding a null terminator
std::cout << "message1 : " << message1 << std::endl;
std::cout << "the size of message1 : " << sizeof(message1) << std::endl;

    char message2[6]{'H','e','l','l','o'};          //Letting the compiler auto add a null terminator 
std::cout << "message2 : " << message2 << std::endl;
std::cout << "the size of message2 : " << sizeof(message2) << std::endl;

//Using string literals
    char message3[]{"Hello World"};          //Using "" auto adds a null terminator
std::cout << "message3 : " << message3 << std::endl;
std::cout << "the size of message3 : " << sizeof(message3) << std::endl;

//Printing out the array directly only works for char. Others give garbage output
int numbers []{1,2,3,4,5};
std::cout << "numbers : " << numbers << std::endl;

return 0;
}