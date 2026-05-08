#include <iostream>
using namespace std;
#include <string>

int main() {
int itemPrice = 20;
int shippingCost = 40;
int sum = itemPrice + shippingCost;
cout << sum << endl;

    string yourName;
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName;
    string number = "20";
    int numberr = 30;
    cout << number << " " << numberr << endl;

    cout << firstName.length() <<endl;
    cout << lastName[2];
    cout << endl << lastName[lastName.length()-1];
    cout << endl << lastName.at(lastName.length()-1) << endl;
    cout << "We are the so called \"vikings\" of the north! Plus, this is cool: \\";
    cout << string(3, '\n');

    cout << "Enter your username." << endl;
    cin >> yourName;
    cout << "Your name is " << yourName;

    // if you type name like "John Doe" for yourName, but cout it, it only gives the first name (spaces and everything after is omitted)
    // use getline to print full name

    cin.ignore();
    // use cin ignore

    string Bob;
    cout << "Enter your FULL NAME!";
    getline (cin, Bob);
    cout << "Your name is:" << Bob;
    cout << max(4, 3) << endl;

    bool isMathFun = true;
    cout << isMathFun << endl; // bool outputs 1 for true, 0 for false
    cout << boolalpha << endl; // turns values from 1s and 0s to trues and falses
    cout << isMathFun << endl; // outputs TRUE
    cout << noboolalpha << endl; // turns values back to 1s and 0s
    cout << isMathFun << endl; // outputs 1

    cout << (10 == 15);
    int myAge = 24;
    int votingAge = 18;
    if (myAge >= votingAge) { // if and else command for voting age, using >= for larger or equal to function
       cout << "You're able to vote!";
    } else {
        cout << "You can't vote.";
    }

    // combine boolean with if statements
    int g = 4;
    int o = 6;
    bool ifGreater = o > g;
    if (ifGreater) {
        cout << "You're great!";
    }

    // if (condition1) {
        // block of code to be executed if condition is true
    // } else if (condition2) {
        // block of code to be executed if condition1 is false and condition2 is true
    // } else {
// block of code to be executed if both are false
    // } also see the example below for extra, also using bool:
    int time = 16;
    bool isMorning = time < 12;
    bool isDay = time < 18;

    if (isMorning) {
        cout << "Good morning.";
    } else if (isDay) {
        cout << "Good day.";
    } else {
        cout << "Good evening.";
    }
// also use && if two conditions must be true:
    if (time <= 16 && 18 == votingAge) {
cout << "You're voted!";
    }
    // use OR (||)  when at least one condition is true
    // use AND (!) when testing if condition is NOT true

    // nice example:
    bool isLoggedIn = true;
    bool isAdmin = false;
    int securityLevel = 3; // 1 = highest

    if (isLoggedIn && (isAdmin || securityLevel <= 2)) {
        cout << "Access granted.";
    } else {
        cout << "Access denied.";
    }


    int age = 15;

    if (18 <= age) {
        cout << "Allowed.";
    } else {
        cout << "Not Allowed.";
    }
// can also use SWITCH STATEMENTS:
switch (time) {
        case 14: // ITS CASE 14: NOT CASE: 14
        cout << "2:00 PM";
        case 15:
        cout << "3:00 PM";
        case 16:
        cout << "4:00 PM";
        // use default to make sure if no case is met, something is outputted
        default:
        cout << "No time.";
}

    return 0;
}
