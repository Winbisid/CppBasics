#include <iostream>
#include <string>

int main(){
    //Addition
    int number1 = 7;
    int number2 = 4;

    auto sum {number1 + number2};
    auto other_sum {number1 + number2 + number1};

    std::cout << "The sum is " << sum << std::endl;
    std::cout << "The other sum is " << other_sum << std::endl;

    //Subtraction
    auto diff {number1 - number2};
    auto other_diff {number1 - number2 - number2};

    std::cout << "The difference is " << diff << std::endl;
    std::cout << "The other difference is " << other_diff << std::endl;

    //Multiplication
    auto product {number1 * number2};
    auto other_product {number1 * 2 * number2};

    std::cout << "The product is " << product << std::endl;
    std::cout << "The other product is " << other_product << std::endl;

    //Integer Division
    int quotient {number1 / number2};
    int other_quotient = number1 / 17;

    std::cout << "The quotient is " << quotient << std::endl;
    std::cout << "The other quotient is " << other_quotient << std::endl;

    //Modulus
    int remainder {number1 % number2};
    int other_remainder {number1 % 17};

    std::cout << "The remainder is " << remainder << std::endl;
    std::cout << "The other remainder is " << other_remainder << std::endl;

    int result {3242 % 1}; // 32%10 take the last number to the right which is 2 in this case
                          // Any number % 100 will take the last two numbers to the right
                          // This stands true for any number % 10, 100, 100, 1000, 10000 etc
    std::cout << "The result is " << result << std::endl;


return 0;
}