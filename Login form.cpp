#include <iostream>
#include <stdlib.h>


using namespace std;

int main () {
    string password = "sella2367";
    string userName = "Reina";
    string pincode;
    string name;
    int entryAttempt = 0;
 
    system ("Color B0");
    
    while (entryAttempt <= 5){
    
    cout << "-------------------------------------------------------" << endl;
    cout << " ***Welcome to ReinaCode***"<< endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "Username : " << endl;
    cin >> name;
    cout << "Password :" << endl,
    cin >> pincode;
    cout << "-------------------------------------------------------" << endl;


     if (pin == password && userName == name ) {
            cout << "Welcome " << name << " to ReinaCode";
     }
     else {
            cout << "Please enter a correct password" << endl;
            entryAttempt++;
       }
    }
     if (entryAttempt == 5) {
        cout << "Try again after 1 hour" << endl;
    return 0;
       }
}
