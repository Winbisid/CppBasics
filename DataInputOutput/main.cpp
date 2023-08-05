#include <iostream>
#include <cmath>
#include <string>

int age;
std::string name, year, full_name; 
int century;

int add_numbers(int a, int b){
    return a+b;
}

int main()
{/*
    //Printing to console
    std::cout << "Hello world!" << std::endl;
    int num{12};
    std::cout << "Number is " << num << std::endl;

    //Errors
    std::cerr << "std::cerr output: There was something wrong here" << std::endl;

    //Log message
    std::clog << "std::clog output: This is a log message" << std::endl;

std::cout << "\n\n" << std::endl;
*/
    int s,d;
    std::cout << "Enter number s" << std::endl;
    std::cin >> s;
    std::cout << "Enter number d"  << std::endl;
    std::cin >> d;
    std::cout << "The sum of the two numbers is ";
    std::cout << add_numbers(s,d) << std::endl;
    


    //Data input with spaces
    std::cout << "Type in your full name: " << std::endl;
    std::getline(std::cin,full_name);
    std::cout << "Your full name is " << full_name << std::endl;


    std::cout << "Enter your name: " << std::endl;
    std::cin >> name;
    std::cout << "Enter your age : ";
    std::cin >> age;
    std::cout << "Hello, "<< name << "! You are " << age << " years old." << std::endl;
    std::cout << year << std::endl;

    bool elderly(int age);{
        if(age>=50&&age<=130){
            std::cout << name << ", you're old af. Grow up or die soon." << std::endl;
        }else if(age>25&&age<50){
            std::cout <<"You've got some time to grow" << std::endl;
        }else if(age<25&&age>0){
            std::cout << "Still young. Keep wasting your youth. You'll grow up next summer." << std::endl;
        }
        else{
            std::cout << "Stop playing with me. On god, I got better to do tings bruv.\n" <<std::endl;
        }
        }


    std::cout << "\nEnter the year followed by the century, separated with spaces" << std::endl;
    std::cin >> year >> century;
    std::cout << "The year is " << year << ". In the " << century;

bool theCentury(std::string century);{
    if(century%10==2){
        std::cout << "nd century.";
    }else if(century%100==11){
        std::cout << "th century.";
    }else if(century%10==1){
        std::cout << "st century.";
    }else if(century%10==3){
        std::cout << "rd century.";
    }else{
        std::cout << "th century.";
      }
}
std::cout << "\nThe thing is it's difficult to touch type shit like this. Damn it." << std::endl;

//Different number systems
std::cout << 017 << 15 << 0x00f << 0b00001111 << std::endl;

return 0;
}