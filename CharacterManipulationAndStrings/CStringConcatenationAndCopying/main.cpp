#include <iostream>
#include <cstring>

int main()
{
/*
//Concatenation : std::strcat : joining strings
std::cout << "std::strcat : \n";

char dest[50] {"Hello "};
char src[50] {"World!"};
std::strcat(dest,src);      //Some compilers like MSVC think these functions are unsafe because you might mistakenly
std::strcat(dest, " Goodbye World!");   //overload your character or run out of bounds 
std::cout << "dest : " << dest << "\n"; //if you don't check both their sizes first
*/
/*
//More concatenation
std::cout << "\n";
std::cout << "More std::strcat : " << '\n';

char *dest1 = new char[30]{'F','i','r','e','l','o','r','d','\0'};
char *source1 = 
new char[30]{',','T','h','e',' ','P','h','o','e','n','i','x',' ','K','i','n','g','!','\0'};

//source is going to be appended to dest, and the process
//will start by overiding the null character in dest
std::cout << "std::strlen(dest1) :" << std::strlen(dest1) << "\n";
std::cout << "std::strlen(source1) : " << std::strlen(source1) << "\n";

std::cout << "Concatenating..." << "\n";
std::strcat(dest1,source1);

std::cout << "std::strlen(dest1) :" << std::strlen(dest1) << "\n";
std::cout << "dest1 : " << dest1 << "\n";
*/
/*
//std::strncat  : concatenates n characters from src to dest and returns a pointer to the result string
//signature : char *strncat( char *dest, const char *src, std::size_t count );
std::cout << "std::strncat: " << "\n";

char dest2[50] { "Hello" };
char source2[30] = {" There is a bird on my window"};

//You can even use the returned pointer immediately for print out. This is a pattern you'll see a lot in C++ code out there.
std::cout << std::strncat(dest2,source2,6) << "\n";

//Or you can do std::strncat separately and print dest2
std::strncat(dest2,source2,6);
std::cout << "The concatenated string is : " << dest2 << "\n";
*/
/*
//std::strcpy : signature is char* strcpy( char* dest, const char* src );
std::cout << "std::strcpy : " << "\n";

const char *source3 {"C++ is a multipurpose programming language."};
char *dest3 = new char[std::strlen(source3) + 1];   // +1 for the null character
											        //Contains garbage data
											        //Not initialized
											
std::strcpy(dest3,source3);

std::cout << "sizeof(dest3) : " << sizeof(dest3) << "\n";
std::cout << "std::strlen(dest3) : " << std::strlen(dest3) << "\n";
std::cout << "dest3 : " << dest3 << "\n";
*/

//std::strncpy : Copy n characters from src to dest
//signature : char *strncpy( char *dest, const char *src, std::size_t count );
std::cout << "std::strncpy:" << "\n";
const char* source4 = "Hello";
char dest4[] = {'a', 'b', 'c', 'd', 'e', 'f','\0'}; // Have to put the terminating
												    //null char if we want to print

std::cout << "dest4 : " << dest4 << "\n";

std::cout << "Copying..." << "\n";
std::strncpy(dest4,source4,5);

std::cout << "dest4 : " << dest4 << "\n";

return 0;
}