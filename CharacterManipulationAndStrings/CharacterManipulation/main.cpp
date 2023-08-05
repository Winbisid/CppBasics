#include <iostream>

int main()
{
    //If true, you'll get a non zero number, if false you get zero
    /*
//Check if a character is alphanumeric : std::isalnum
std::cout << "std::islnum :" << std::endl;

std::cout << "C is alphanumeric : " << std::isalnum('C') << std::endl;
std::cout << "^ is alphanumeric : " << std::isalnum('^') << std::endl;

//Can use as a test condition
char input_char {'*'};
if(std::isalnum(input_char)){
std::cout << input_char << " is alphanumeric" << std::endl;
}else{
std::cout << input_char << " is not alphanumeric" << std::endl;
}
*/
/*
//Check if a character is alphabetic : std::isalpha
std::cout << "std::isalpha :" << std::endl;

std::cout << "C is alphabetic : " << std::isalpha('C') << std::endl;
std::cout << "^ is alphabetic : " << std::isalpha('^') << std::endl;
std::cout << "7 is alphabetic : " << std::isalpha('7') << std::endl;

if(std::isalpha('e')){
std::cout << 'e' << " is alphabetic" << std::endl;
}else{
std::cout << 'e' << " is not alphabetic" << std::endl;
}
*/
/*
//Check if a character is blank : std::isblank
std::cout << "std::isblank :" << std::endl;

char message[] {"Hello there, How are you doing? The sun is shining."};
std::cout << "message : " << message << std::endl;

//Find and print blank index
size_t blank_count{};
for (size_t i{}; i < std::size(message); ++i){
    //std::cout << "value : " << message[i] << std::endl; 
    if(std::isblank(message[i])){
        std::cout << "Found a blank character at index : [" << i << "]" << std::endl;
        ++blank_count; 
    }
}
std::cout << "In total we found " << blank_count << " blank characters." << std::endl;

//Check if a character is lowercase or uppercase
std::cout << "std::islower and std::isupper :" << std::endl;

char thought[] {"The C++ Programming language is one of the most used on the Planet"};
size_t lowercase_count{};
size_t uppercase_count{};

//Print out original string
std::cout << "Original String : " << thought << std::endl;

for(auto character : thought){
    if(std::islower(character)){
        std::cout << " " << character << std::endl;
        ++lowercase_count;
    }
    if(std::isupper(character)){
        std::cout << " " << character << std::endl;
        ++uppercase_count;
    }
}
*/
/*
//Check if a character is a digit
std::cout << "std::isdigit" << std::endl;

char statement[]{"Mr. Hamilton owns 221 cows. That's a lot of cows! The kid exclaimed."};
size_t digit_count{};

for (auto character : statement){
    if(std::isdigit(character)){
        std::cout << "Found digit : " << character << std::endl;
        ++digit_count;
    }
}
std::cout << "Found " << digit_count << " digits in the statement string" << std::endl;
*/

//Turning a character to lowercase using the std::lower() function
std::cout << "std::tolower and std::toupper : " << std::endl;

char original_str[]{"Home. What feeling is that?"};
char dest_str[std::size(original_str)];

//Turn this to uppercase. Change the array in place
for (size_t i{}; i < std::size(original_str); ++i){
    dest_str[i] = std::toupper(original_str[i]);
}
        std::cout << "Original string : " << original_str << std::endl;
        std::cout << "Uppercase string : " << dest_str << std::endl;


//Turn this to lowercase. Change the array in place
for (size_t i{}; i < std::size(original_str); ++i){
    dest_str[i] = std::tolower(original_str[i]);
}
        std::cout << "Original string : " << original_str << std::endl;
        std::cout << "lowercase string : " << dest_str << std::endl;

return 0;
}