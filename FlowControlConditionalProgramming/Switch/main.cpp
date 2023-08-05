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
    int tool {Circle};

    switch (tool){
        case Pen: {
            std::cout << "The active tool is a pen" << std::endl;
        }
        break;
    
        case Marker: {
            std::cout << "The active tool is a marker" << std::endl;
        }
        break;

        case Eraser: {
            std::cout << "The active tool is an eraser" << std::endl;
        }
        break;

//Multiple cases can also be grouped together for one output

        case Rectangle:
        case Circle:
        case Ellipse:
        {
            std::cout << "The active tool is a drawing shape" << std::endl;
            
            if (tool == Rectangle){
                std::cout << "The active tool is a rectangle" << std::endl;
            } else if (tool == Circle){
               std::cout << "The active tool is a circle" << std::endl; 
            } else {
                std::cout << "The active tool is an ellipse" << std::endl;
            }
        }
        break;

        default: {
            std::cout << "There is no active tool or no match found" << std::endl;
        }
        break;
    }




std::cout << "Moving on" << std::endl;

return 0;
}