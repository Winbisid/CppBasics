#include <iostream>

int main()
{


//Verbose nullptr check
int *p_number{new int{}};

if (!(p_number == nullptr)){
    std::cout << "p_number points to a VALID address" << std::endl;
    std::cout << "*p_number : " << *p_number << std::endl;
}else{
        std::cout << "p_number points to an INVALID address" << std::endl;
}

delete p_number;
p_number = nullptr;

//Compact nullptr check
if (p_number){  //Compiler takes it as a boolean
    std::cout << "p_number points to a VALID address" << std::endl;
}else{
        std::cout << "p_number points to an INVALID address" << std::endl;
}
/*
//Calling delete on a nullptr is OK
int *p_number1 {};
delete p_number1;   //This won't cause any problem even though p_number1 contains nullptr

//So no need to overdo something like :
if(p_number1){
    delete p_number1;
    p_number1 = nullptr;
}
*/

return 0;
}