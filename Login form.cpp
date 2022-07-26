#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {
    string password = "sella2367";
    string userName = "Reina";
    string pin;
    string name;
    
 
    system ("Color B0");
    
    cout << " ***Welcome to ReinaCode***"<< endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "Username : " << endl;
    cin >> name;
    cout << "Password :" << endl,
    cin >> pin;
    cout << "-------------------------------------------------------" << endl;


     if (pin == password && userName == name ) {
            cout << "Welcome " << name << " to ReinaCode";
     }
     else {
            cout << "Please enter a correct password" << endl;
       }
    return 0;
}
