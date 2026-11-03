#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){

    srand(time(0));
    int daysUntillExpiration = rand() % 12 + 0 ;

    cout << "Days before expiration: " << daysUntillExpiration << endl;

    if(daysUntillExpiration > 5 && daysUntillExpiration <= 10)
        cout << "Your subscription will expire soon. Renew now!" << endl;
        else if(daysUntillExpiration > 1 && daysUntillExpiration <= 5)
             cout << "Your subscription expires in " << daysUntillExpiration << " days. Renew now and save 10%!" << endl;
        else if(daysUntillExpiration == 1)
             cout << "Your subscription expires in a day. Renew now and save 20%!" << endl;
        else if(daysUntillExpiration < 1 && daysUntillExpiration == 0)
             cout << "Your subscription has expired" << endl;
    else
        cout << "You have an active subscription" << endl;
}