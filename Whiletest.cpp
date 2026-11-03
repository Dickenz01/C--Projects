#include <iostream>
#include<limits>
using namespace std;

int main (){
    int myNumber = 0;

     //initiall prompt
    cout << "Enter a number between 5 and 10: " << endl;

    while(true) {
        cin >> myNumber;

        if (cin.fail()){ 
            cin.clear(); // clear the error state on cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard the bad input
            cout << "Sorry, you entered an invalid number, please try again. " << endl;
        }
        //Checking the integer range
        else if (myNumber < 5 || myNumber > 10){
            cout << "You entered " << myNumber << ". Please enter a number between 5 an 10"<< endl;
        }
        else {
            // if it is a valid integer btwn 5 and 10, brk out of the loop
            break;
        }
    }
    //Output after the loop finishes successfully
    cout << "Your input value (" << myNumber << ") has been accepted" <<endl;   
    return 0;    
}