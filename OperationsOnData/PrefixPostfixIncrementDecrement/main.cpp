#include <iostream>
int main()
{
    int value {5};
//Prefix
    //Increment by 1
    value = value + 1;
    std::cout << "The value is: " << value << std::endl;

    //Reset value to 5
    value = 5;

    //Decrement by 1
    value = value - 1;
    std::cout << "The value is: " << value << std::endl;

std::cout << "=======Postfix increment and decrement=======" << std::endl;

//Postfix
    value = 5;

    //Increment
    std::cout << "The value is (incrementing): " << value++ << std::endl; //5 
                            //Increment takes place the next time the value is called
    std::cout << "The value is: " << value << std::endl; //6

    value = 5; //Reset value to 5

    //Decrement
    std::cout << "The value is (decrementing): " << value-- << std::endl; //5
                            //Decrement takes place the next time the value is called
    std::cout << "The value is: " << value << std::endl; //4

std::cout << "=======Prefix increment and decrement=======" << std::endl;

//Prefix of +1
    value = 5; //Reset value to 5

    ++value;    //Increment takes place here so the value changes instantly
    std::cout << "The value is (prefix++): " << value << std::endl;

    value = 5;
    std::cout << "The value is (prefix++ in place): " << ++value << std::endl;

//Prefix of -1
    value = 5;//Reset value to 5

    --value;    //Decrement takes place here so the value changes instantly
    std::cout << "The value is (prefix--): " << value << std::endl;

    value = 5;
    std::cout << "The value is (prefix-- in place): " << --value << std::endl;

return 0;
}