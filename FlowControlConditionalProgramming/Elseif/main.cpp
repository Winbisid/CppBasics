#include <iostream>

//Tools
const int Pen {10};
const int Marker {20};
const int Eraser {30};
const int Rectangle {40};
const int Circle {50};
const int Ellipse {60};

int main()
{

int tool {Rectangle};

if (tool==Pen){
    std::cout << "Active tool is pen" << std::endl;
} else if(tool==Marker){
    std::cout << "Active tool is Marker" << std::endl;
} else if(tool==Rectangle){
    std::cout << "Active tool is Rectangle" << std::endl;
} else if(tool==Circle){
    std::cout << "Active tool is Circle" << std::endl;

} else if(tool==Ellipse){
    std::cout << "Active tool is Ellipse" << std::endl;
} else {
    std::cout << "You have not selected a tool" << std::endl;
}

return 0;
}