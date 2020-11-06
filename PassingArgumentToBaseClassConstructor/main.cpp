#include <iostream>
#include "Cube.h"
using namespace std;

int main()
{
    double cubeWidth;
    double cubeLength;
    double cubeHeight;

    cout<<"Enter the dimensons of the cube:\n";
    cout<<"Width: ";
    cin >> cubeWidth;
    cout<<"Length: ";
    cin >> cubeLength;
    cout<<"Heigth: ";
    cin >> cubeHeight;

    Cube myCube(cubeWidth, cubeLength, cubeHeight);

    cout<<"Here are the Cube Dimensions.\n";
    cout<<"Width: "<<myCube.getWidth()<<endl;
    cout<<"Length: "<<myCube.getLength()<<endl;
    cout<<"Heigth: "<<myCube.getHeight()<<endl;
    cout<<"Base Area: "<<myCube.getArea()<<endl;
    cout<<"Volume: "<<myCube.getVolume()<<endl;

    return 0;
}
