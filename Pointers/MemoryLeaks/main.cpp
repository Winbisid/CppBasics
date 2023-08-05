#include <iostream>

int main()
{
    //Reassignment of stack address to active dynamic address pointer
int *p_number {new int {67}}; //Points to some address, say address1

// p_number=nullptr;//Should delete here

int number {55}; //Stack variable. lives at say address2

p_number = &number; //Now p_number points to address2, but address1 is still in use by our program
                    //But our program has lost access to that memory location. Memory has been leaked


    //Double allocation
int *p_number1 {new int {55}};

//Use the pointer
// delete p_number1; p_number1=nullptr;//Should delete and rest after use
p_number1 = new int {45}; //memory with int{55} leaked
// delete p_number1; p_number1=nullptr;


    //Pointer in local scope. Nested scope with dynamically allocated memory
{
    int *p_number2 {new int{57}};   //p_number2 is a local variable. So outside this, it will die
    // p_number2=nullptr;              //But the dynamic memory address itself will be active and non-accessible
}
//memory with int{57} leaked

return 0;
}