#include <iostream>
using namespace std;
#include<limits>

// a function to calculate the are a of a square
double areaOfSquare(double side) {
    return side * side;
}   

// A function to calculate the area of a rectangle
double areaOfRectangle(double length, double width) {
    return length * width;
}  

// A function to calculate the area of a triangle
double areaOfTriangle(double base, double hieght) {
    return 0.5 * base * hieght;
}

int main(){
    double area = 0.0;
    double length = 0.0;
    double width = 0.0;
    double base = 0.0;
    double height = 0.0;
    int selection = 0;

      //initiall prompt
    cout << "Pleas select the area to calculate: " << endl;
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Quit Program" << endl;
    cout << "Enter your selection : ";

        while(true) {
         cin >> selection;

             if (cin.fail()){ 
            cin.clear(); // clear the error state on cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard the bad input
            cout << "Sorry, you entered an invalid input, please try again. " << endl;
            }
             //Checking the integer range
             else if (selection < 1 || selection > 4){
            cout << "Input provided is out of bounds. Please try again."<< endl;
             }   
             else if (selection >= 1 && selection <= 3){
                switch(selection) {
                    case 1: {
                        double side;
                        cout << "Enter the length of the side of the square: ";
                        cin >> side;
                        cout << "The area of the square is: " << areaOfSquare(side) << endl;
                        break;
                    }
                    case 2: {
                        double length, width;
                        cout << "Enter the length and width of the rectangle: ";
                        cin >> length >> width;
                        cout << "The area of the rectangle is: " << areaOfRectangle(length, width) << endl;
                        break;
                    }
                    case 3: {
                        double base, height;
                        cout << "Enter the base and height of the triangle: ";
                        cin >> base >> height;
                        cout << "The area of the triangle is: " << areaOfTriangle(base, height) << endl;
                        break;
                    }
                }
             }
            // if it is a valid integer btwn 1 and 3, brk out of the loop
            else {
                cout << "Quiting mode activated. Enjoy bra!" << endl;
                break;
            }
            
        }
    return 0;
}