#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){

    srand(time(0));
    int daysUntillExpiration = rand() % 12 + 0 ;

    cout << "Days before expiration: " << daysUntillExpiration << endl;

    switch(daysUntillExpiration){
        case 0: 
            cout << "Your subscription has expired. \n";
            break;

        case 1: 
            cout << "Your subscription expires in a day! \n" << "Renew now and save 20%" << endl;
            break;
            //Grouping case 2 through 5 together (fall-through behaviour)

        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription expires in " << daysUntillExpiration << " days. Renew now and save 10%! \n";
           break; 
            
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription expires will expire soon. Renew now!" << endl;
            break;

        default:
        //Catches any value not matched above (11 in this case)
            cout <<"You have an active subscription." << endl;
            break;      
    }
    return 0;
}        