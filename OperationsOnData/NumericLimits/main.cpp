#include <iostream>
#include <limits>

int main()
{
std::cout << "The range for short is from " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << std::endl;

std::cout << "The range for unsigned short is from " << std::numeric_limits<unsigned short>::min() << " to " << std::numeric_limits<unsigned short>::max() << std::endl;

std::cout << "The range for int is from " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;

std::cout << "The range for unsigned int is from " << std::numeric_limits<unsigned int>::min() << " to " << std::numeric_limits<unsigned int>::max() << std::endl;

std::cout << "The range for long is from " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << std::endl;

std::cout << "The range for float is from " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl;

std::cout << "The range for float(with lowest) is from " << std::numeric_limits<float>::lowest() << " to " << std::numeric_limits<float>::max() << std::endl;

std::cout << "The range for double(with lowest) is from " << std::numeric_limits<double>::lowest() << " to " << std::numeric_limits<double>::max() << std::endl;

std::cout << "The range for long double(with lowest) is from " << std::numeric_limits<long double>::lowest() << " to " << std::numeric_limits<long double>::max() << std::endl;

//Other facilities. You can look them up
std::cout << "Int is signed : " << std::numeric_limits<int>::is_signed << std::endl;
std::cout << "Int digits : " << std::numeric_limits<int>::digits << std::endl;

return 0;
}