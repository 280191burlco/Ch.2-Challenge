#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () {
    string name, address, phoneNumber, collegeMajor; //Store the info of the user
   
    cout << "What is your name? ";
    cin >> name;
    cout << "What is your address? Please include city, state, and ZIP ";
    cin >> address;
    cout << "What is your phone number? ";
    cin >> phoneNumber;
    cout << "What is your college major? ";
    cin >> collegeMajor;
    
    //Display the information, only use one cout statement
    cout << "Your information is: " << name << address << phoneNumber << collegeMajor << endl;
    return 0;
}
