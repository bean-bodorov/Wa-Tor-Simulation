#include <iostream>
#include <ostream>
using namespace std;


int main () {
    bool isMathFun = true;
    cout << isMathFun << endl; // bool outputs 1 for true, 0 for false. Outputs 1 here
    cout << boolalpha << endl; // turns values from 1s and 0s to trues and falses
    cout << isMathFun << endl; // outputs TRUE
    cout << noboolalpha << endl; // turns values back to 1s and 0s
    cout << isMathFun << endl; // outputs 1




    cout << (10 == 15); // outputs false.
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
    bool ifGreater = o > g; // 6 > 4 so outputs 1
    if (ifGreater) {
        cout << "You're great!"; // since bool is true, outputs the string.
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

    if (isMorning) { // if it is morning (true):
        cout << "Good morning.";
    } else if (isDay) { // if it is day (true)
        cout << "Good day.";
    } else { // if it is neither morning/day (false on both cases)
        cout << "Good evening.";
    }



    //  use && if two conditions must be true:
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



    // while loop: keeps repeating statemnt until false is reached (prints 0, 1, 2, 3, 4, then ends because reaches 5)
    int i = 0; // i is typically used as a variable name (supposed to stand for index)
    while (i < 5) {
        cout << i << "\n";
        i++; // adds one to i, then repeats statement
    }
    cout << endl;
    // real life example: countdown!
    int timeTillBirthday = 3;
    while (timeTillBirthday > 0) {
        cout << timeTillBirthday << "\n";
        timeTillBirthday--;
    } cout << "Happy Birthday!";

    // can also do while/do
    int choice;
    do {
        cout << endl << "1. Play Game" << endl;
        cout << "2. Settings" << endl;
        cout << "3. Quit" << endl;
        cout << "Choose an option: ";
        cin >> choice;
    } while (choice != 3); // keep showing menu until 3 is pressed, at which point next line will run.
    cout << "Game quit." << endl;


    // A variable with some specific numbers
    int numbers = 12345;
    // A variable to store the reversed number
    int revNumbers = 0;

    // Reverse and reorder the numbers
    while (numbers) {
        // Get the last number of 'numbers' and add it to 'revNumbers'
        revNumbers = revNumbers * 10 + numbers % 10;
        // Remove the last number of 'numbers'
        numbers /= 10;
    }
    cout << "Reversed numbers: " << revNumbers << "\n";


    for (int e = 0; e < 5; e++) { // start with 0, until e is outside of range, and add one to e every repeat of loop
        cout << e << "\n"; // for loop is like while loop but can specify number of times loop should repeat
    }

    // also use for to get SUM:
    int sum = 0;
    for (int a = 1; a <= 5; a++) {
        sum = sum + a;
    }
    cout << "Sum is " << sum;

    // another version of a countdown:
    for (int oa = 5; oa > 0; oa--) {
        cout << oa << "\n";
    }

    for (int ee = 6; ee > -5; ee = ee - 2) {
        cout << ee << "\n";
    }


    // NESTED LOOPS: create outer and inner loop:
    for (int outer = 1; outer <= 2; outer++) {
        cout << outer << "\n";
        for (int inner = 1; inner <= 3; inner++) {
            cout << inner << "\n";
        }
    }

    // interesting multiplication table:
    for (int mult = 1; mult <= 3; mult++) {
        for (int mult2 = 1; mult2 <= 3; mult2++) {
            cout << mult * mult2 << " ";
        }
        cout << "\n";
    }

    // can also output all numbers in an ARRAY (group of numbers)
    int groupNumbers [3] = {2, 3, 4};
    for (int numOut : groupNumbers) {
        cout << numOut << "\n";
    } // note: can also do this withs tring, getting each letter printed out

    // BREAK: can help 'jump out' of a statement
    for (int breakExample = 0; breakExample < 10; breakExample++) {
        if (breakExample == 4) {
            break;
        }
        cout << breakExample << "\n";
    }

    // continue can help skip or add to a certain step
    for (int continueExample = 0; continueExample < 10; continueExample++) {
        if (continueExample == 4) {
            cout << "magic number!" << endl;
            continue; // Skips the next line, so only 'magic number' is printed for 4
        }
        cout << continueExample << "\n";
    }




    // ARRAYS:


    // Arrays store multiple values in one set.
    string companies[3]= {"amazon", "netflix", "ebay"}; // NOTE: can omit "3" at start, it already knows #
    int arrayExample[3] = {1, 2, 3};
    cout << arrayExample[0] << " " << arrayExample[1] << " " << arrayExample[2] << "\n"; // outputs 1, 2, and 3
// change a value after the varaible is already defined
companies[0] = "twitter";

    // use for loops (consider: 'manual') to print out every value in array
    for (int forArrayExample = 0; forArrayExample <= 2; forArrayExample++) {
        cout << companies[forArrayExample] << "\n";
    }

    // for each, loops (consider: 'automatic'), automatically prints out next number and stops when at end of array
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int num : myNumbers) {
        cout << num << "\n";
    }

    // vectors can also be used (vector library must be added to code, though)
    // they can be adjusted to add or remove certain values, like here:
    //      vector<string> cars = {"Volvo", "BMW", "Ford"};
    // Adding another element to the vector:
    //       cars.push_back("Tesla");


    // SIZE of an array:
    cout <<sizeof(myNumbers) << endl; // outputs 20 (each int is 4 bytes, 5 * 4 = 20)
    // # of elements of an array:
    cout << sizeof(myNumbers)/sizeof(myNumbers[0]) << endl; // outputs 5 (20/4 = 5)


    // multi-dimensional arrays:
    string carBrands[2][2][2] = {
        {
            { "A", "B" },
            { "C", "D" }
        },

        {
        { "E", "F" },
        { "G", "H" }
        }
    };



    // Examples:


    // An array storing different ages
    int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};
    float avg, sum3 = 0;
    // Get the length of the array
    int length = sizeof(ages) / sizeof(ages[0]);
    // Loop through the elements of the array
    for (int ageReal : ages) {
        sum3 += ageReal;
    }
    // Calculate the average by dividing the sum by the length
    avg = sum3 / length;
    // Print the average
    cout << "The average age is: " << avg << "\n";




    // An array storing different ages
    int ages5[8] = {20, 22, 18, 35, 48, 26, 87, 70};
    // Create a variable and assign the first array element of ages to it
    int lowestAge = ages5[0];
    // Loop through the elements of the ages array to find the lowest age
    for (int age8 : ages5) {
        if (lowestAge > age8) {
            lowestAge = age8;
        }
    }
    // Print the lowest age
    cout << "The lowest age is: " << lowestAge << "\n";




                                        // STRUCTURES (aka struct)

                        // each variable of a struct is referred to as a "member"
            // similar to array, BUT INCLUDES MULTIPLE VARIABLES (int, string, float, bool)


    // Use struct --> variables in bracket --> defining the name of the variable
    struct {
        int myStructureNum; // see later for definition
        string myStructureWord = "Bobetta";
        bool myStructureCool = true;
    } myStructure;
    // Every time defining variable, use =, not :
    // Using : sets the bit field (putting, say, 2, results in using 2 bits memory, resulting in holding space of 4 numbers)

cout << myStructure.myStructureWord; // outputs "Bobetta"
    // Structure is basically an inventory, and you can choose an item in it and define it --> use .
    myStructure.myStructureNum = 1;
    myStructure.myStructureWord = "NotBobetta";
    cout << "\n" << myStructure.myStructureWord << myStructure.myStructureNum << "\n"; // outputs "NotBobetta1"
    //(materovover) can also use multiple structure variables for one:
struct {
    int StructExample = 222;
} Struct1, Struct2;

    //Example with cars!
    struct {
        string brand;
        int cost;
    } Car1, Car2;
    Car1.brand = "Ford";
    Car2.brand = "Nissan";
    Car1.cost = 10;
    Car2.cost = 20;

    cout << Car1.brand << " " << Car1.cost << "\n";
    cout << Car2.brand << " " << Car2.cost << "\n";
    // basically simplifies variables into one when defining for multiple of the same thing (e.g. multiple car brands)

    // also call structure at start of variable
    struct broomName {
        int Broom1;
    };


                                            // ENUMERATIONS (ENUMS)
             // An enum is a special type that represents a group of constants (unchangeable values).
    // Use enums when you have values that you know aren't going to change, like month days, days, colors, deck of cards, etc.

    enum Level { // Aim to use UPPERCASE for better reference
        Low = 25,
        Medium = 50,
        High = 75
    };
    // access the enum with a variable

    enum Level ChoiceLevel = Medium;


    switch (ChoiceLevel) {
        case 1:
            cout << "Low Level";
            break;
        case 2:
            cout << "Medium level";
            break;
        case 3:
            cout << "High level";
            break;
    }




                                                 // REFERENCES
                    // Define same string for two variables, refer one to another
                            // Use & operator to create REFERENCE VARIABLE

    string fooder = "Boulder";
    string &Fooder2 = fooder;
    cout << Fooder2 << "\n"; // outputs Boulder!
    Fooder2 = "ChangedBoulder";
    cout << Fooder2 << "\n"; // Outputs ChangedBoulder


    // Can also get memory address of variable!
    cout << &fooder << "\n"; // outputs 0x16dcdaf70





                                                // POINTERS
                        // a variable that stores the memory address as its value.
                                        // CREATED WITH * OPERATOR

    string cheeseType = "Parmesan";
    string* pointer = &cheeseType; // Pointer variable, w/ name "pointer"

    cout << cheeseType; // Outputs "Parmesan"
    cout << &cheeseType; // Outputs memory address of variable
    cout << pointer; // Outputs memory address with pointer

    // note that the type of pointer variable MUST correspond with original variable. cannot be string and num, for example
    // & operator stores memory address, pointer now holds that

    // three ways to make the ptr variable, but first way is preferred:
    // string * mystring;
    // string* mystring;
    // string *mystring;


    // can also use pointer to get the value! (reverse the process)
    cout << pointer; // outputs memory address
    cout << *pointer; // outputs VALUE! ("Parmesan")
    *pointer = "Blue"; // Change the value!!



                                            // Memory Management

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    cout << sizeof(myInt) << "\n";     // 4 bytes (typically)
    cout << sizeof(myFloat) << "\n";   // 4 bytes
    cout << sizeof(myDouble) << "\n";  // 8 bytes
    cout << sizeof(myChar) << "\n";    // 1 byte



    // new Keyword/operator: Can let me manage own memory
    int* ptr = new int;
    *ptr = 34;
    cout << *ptr;
   //  new int creates memory space for one integer
// ptr stores the address of that space
// *ptr = 35; stores the number 35
// cout << *ptr; prints the value




    // if using new, must eventually use DELETE keyword:
    delete ptr;
    // basically states that the memory is completed and used, and can be cleaned up now
    // **KEY IDEA** If manually made memory not deleted, it can cause memory to stack over time, leading to MEMORY LEAK!



    


    // also use new/delete for arrays (?)
    int numGuests;
    cout << "How many guests? ";
    cin >> numGuests;

    // Check for invalid input
    if (numGuests <= 0) {
        cout << "Number of guests must be at least 1.\n";
        return 0;
    }

    // Create memory space for x guests (an array of strings)
    string* guests = new string[numGuests];

    // Ignore the leftover newline character after reading numGuests
    cin.ignore(); // e

    // Enter guest names
    for (int i = 0; i < numGuests; i++) {
        cout << "Enter name for guest " << (i + 1) << ": ";
        getline(cin, guests[i]); // Read the full name (including spaces)
    }

    // Show all guests
    cout << "\nGuests checked in:\n";
    for (int i = 0; i < numGuests; i++) {
        cout << guests[i] << "\n";
    }

    delete[] guests; // Clean up memory



        return 0;
}