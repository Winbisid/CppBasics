#include <iostream>

int main()

{

int numbers []{1,4,5,6,2,7};

//Read beyond bounds : Will read garbage or crash your program
std::cout << "numbers [12] : " << numbers[12] << std::endl;

//Write beyond bounds. The compiler allows it.
//But you don't own the memory index 12,
//so other programs may modify it and your program may even read bogus data at a later time.
//Or you can corrupt data used by other parts of your program.
numbers[126] = 100;
std::cout << "numbers [126] : " << numbers[126] << std::endl;


/*
for (auto c : numbers){
    std::cout << "Numbers : " << c << std::endl;
}
std::cout << "size of numbers : " << sizeof(numbers) << std::endl;
*/

return 0;
}