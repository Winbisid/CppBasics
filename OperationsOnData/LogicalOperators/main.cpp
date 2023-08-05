#include <iostream>

int main()
{
bool a {true};
bool b {false};
bool c {true};

std::cout << std::boolalpha;
std::cout << "a : " << a << std::endl;
std::cout << "b : " << b << std::endl;
std::cout << "c : " << c << std::endl;

std::cout << std::endl;
//AND evaluates to true when all operands are true.
//A single false will drag the entire expression to evaluating false.

std::cout << "Basic AND operations"<< std::endl;

std::cout << "a&&b : " << (a&&b) << std::endl;
std::cout << "a && c : " << (a && c) << std::endl;
std::cout << "a&&b&&c : " << (a&&b&&c) << std::endl;

std::cout << std::endl;
//OR evaluates to true when only one operand is true.
//A single true is all it needs no matter how many falses.

std::cout << "Basic OR operations"<< std::endl;

std::cout << "a||b : " << (a||b) << std::endl;
std::cout << "a || c : " << (a || c) << std::endl;
std::cout << "a||b||c : " << (a||b||c) << std::endl;

std::cout << std::endl;
//NOT negates whatever value you put it with
//So basically not that value it is put with but any other value.

std::cout << "Basic NOT operations"<< std::endl;

std::cout << "!a : " << (!a) << std::endl;
std::cout << "!b : " << !b << std::endl;
std::cout << "!c : " << !c << std::endl;

std::cout << std::endl;
//Combining logical operators in expression

std::cout << "!(a&&b) || c : " << (!(a&&b) || c) << std::endl;

std::cout << std::endl;
//Combining Logical and Relational operators in expressions

std::cout << "Relational and Logical operations on integers"<< std::endl;

int d {45};
int e {20};
int f {11};

std::cout << "d : " << d << std::endl;
std::cout << "e : " << e << std::endl;
std::cout << "f : " << f << std::endl;
std::cout << std::endl;

std::cout << "(d>e) && (d>f) : "   << ((d>e) && (d>f))   << std::endl;
std::cout << "(d==e) || (e<=f) : " << ((d==e) || (e<=f)) << std::endl;
std::cout << "(d<e) || (d>f) : "   << ((d<e) || (d>f))   << std::endl;
std::cout << "(f>e) || (d<f) : "   << ((f>e) || (d<f))   << std::endl;
std::cout << "(d>f) && (f<=d) : "  << ((d>f) && (f<=d))  << std::endl;
std::cout << "(d>e) && (d<=f) : "  << ((d>e) && (d<=f))  << std::endl;
std::cout << "(!a) && (d==e) : "   << ((!a) && (d==e))   << std::endl;
std::cout << "(!b) && (d<e) : "   << ((!b) && (d<e))   << std::endl;


return 0;
}