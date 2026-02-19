#include <iostream>
using namespace std;

//A car with a 20-gallon tank averages 23.5 miles when driven in town and 28.9 mpg when driven on the highway

int main () {
    double gallons, MPG; //Variables to be stored
    double distance1; //Distance traveled, end variable to be stored
    
    cout << "How many galons do your tank hold (20)? ";
    cin >> gallons;
    cout << "How many miles per gallon do you get? (23.5 in town, 28.9 on highway ";
    cin >> MPG;
    
    //Calculate the distance traveled
    double distance = gallons * MPG;
    
    //Display the distance
    cout << "You can travel: " << distance << endl;
    return 0;
}
