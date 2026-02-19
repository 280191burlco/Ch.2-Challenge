#include <iostream>
using namespace std;

int main () {
    double gasoline, miles;//Variables to be stored
    double MPG;//Miles per gallon to be stored
    
    cout << "How many gallons of gasoline do you have? ";
    cin >> gasoline;
    cout << "How many miles have you traveled? ";
    cin >> miles;
    
    //Calculate the MPG
    MPG = miles / gasoline;
    
    //Display the result
    cout << "Your miles per gallon is: " << MPG << endl;
    return 0;
}
