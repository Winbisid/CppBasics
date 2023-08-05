#include <iostream>

int main(){

    int elephant_count; //Variable may contain random garbage value
    int lion_count {};  //Initializes to zero
    int dog_count {10}; //Initaializes to 10
    int cat_count {15}; //Initializes to 15

    int domesticated_animals {dog_count + cat_count}; // Can use expression as an initializer

    std::cout << elephant_count << std::endl;
    std::cout << lion_count << std::endl;
    std::cout << dog_count << std::endl;
    std::cout << cat_count << std::endl;
    std::cout << domesticated_animals << std::endl;

 return 0;
}