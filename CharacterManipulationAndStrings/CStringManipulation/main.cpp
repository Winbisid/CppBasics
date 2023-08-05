#include <iostream>
#include <cstring>

int main()
{
    /*
    //std::strlen : Find the length of a string
    // real arrays and those decayed into pointers
const char message1 [] {"The sky is blue"};

//Array decays into pointer when we use const char*
const char *message2 {"The sky is blue"};
std::cout << "message1 : " << message1 << std::endl;

//strlen ignores null character
std::cout << "strlen(message1) : " << std::strlen(message1) << std::endl; 

//Includes the null character
std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl; 

//strlen still works with decayed characters
std::cout << "strlen(message2) : " << std::strlen(message2) << std::endl; 

//Prints size of pointer
std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl; 
*/
/*
//std::strcmp : signature is int strcmp(const char *lhs, const char *rhs)
//Returns negative value if lhs appears before rhs in lexicographical order
//Zero if lhs and rhs compare
//Positive value if lhs appears after rhs in lexicographical order
std::cout << "std::strcmp : " << std::endl;
const char *string_data1{ "Alabama" };
const char *string_data2{ "Alabama" };

char string_data3[]{"Alabama"};
char string_data4[]{"Blabama"};

//Print out the comparison
std::cout << "std::strcmp (" << string_data1 << ", " << string_data2 << ") : " << std::strcmp(string_data1,string_data2) << std::endl;

std::cout << "std::strcmp (" << string_data3 << ", " << string_data4 << ") : " << std::strcmp(string_data3,string_data4) << std::endl;

string_data1={ "Alabama" };
string_data2={ "Alabamb" };
//Print out the comparison
std::cout << "std::strcmp (" << string_data1 << ", " << string_data2 << ") : " << std::strcmp(string_data1,string_data2) << std::endl;
*/
/*
//std::strncmp : int strncmp (const char *lhs, const char *rhs, std::size_t count );
//compares n characters in the strings
//returns : negative value if lhs appears before rhs in lexicographical order
//zero if lhs and rhs compare equal, or if count is zero
//positive value if lhs appears after rhs in lexicographical order
size_t n {3};
std::cout << "std::strncmp : " << std::endl;
const char *string_data1{ "Alabama" };
const char *string_data2{ "Blabama" };

//Print out comparison
std::cout << "std::strncmp (" << string_data1 << ", " << string_data2 << ") : " << std::strncmp(string_data1,string_data2,n) << std::endl;

string_data1={ "aaaia" };
string_data2={ "aaance" };

std::cout << "std::strncmp (" << string_data1 << ", " << string_data2 << ") : " << std::strncmp(string_data1,string_data2,n) << std::endl;

n=5;

std::cout << "std::strncmp (" << string_data1 << ", " << string_data2 << ") : " << std::strncmp(string_data1,string_data2,n) << std::endl;
*/
/*
//Find the first occurrence of a character
//we use std::strchr to find all the characters one by one
std::cout << "std::strchr : " << std::endl;

//Can make this const to prevent users from making it point somewhere else
const char * const str {"Try not. Do, or do not. There is no try."};

char target = 'T';
const char *result = str;
size_t iterations{};

while ((result = std::strchr(result, target)) !=nullptr){
    std::cout << "Found '" << target << "' starting at '" << result << "'\n";
    //increment result, otherwise we'll find target at same location
    ++result;
    ++iterations;
}
std::cout << "iterations : " << iterations << std::endl;
*/
/*
//Using str directly in the loop //BAD! because you might modify it's contents through the increments and change your final value/result causing it to loop 25 times instead of 2
//Find the first occurrence of a character
//we use std::strchr to find all the characters one by one
std::cout << "std::strchr : " << std::endl;

//Can make this const to prevent users from making it point somewhere else
const char *str {"Try not. Do, or do not. There is no try."};
char target = 'T';
const char *result {};
size_t iterations{};

while ((result = std::strchr(str, target)) !=nullptr){
    std::cout << "Found '" << target << "' starting at '" << result << "'\n";
    //increment result, otherwise we'll find target at same location
    ++str;
    ++iterations;
}
std::cout << "iterations : " << iterations << std::endl;
*/

//Find last occurence : starts searching for the character at the occurence of '/' in this case so just before 'h' in hello.cpp
std::cout << "std::strrchr : " << std::endl;

char input[]{"/home/user/hello.cpp"};
char *output = std::strrchr(input, '/');

if(output){
    std::cout << output+1 << std::endl; //+1 because we want to start printing past the character found in std::strrchr
}

return 0;
}