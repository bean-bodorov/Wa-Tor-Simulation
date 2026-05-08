#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int EMPTY = 0;
int FISH = 1;
int SHARK = 2;
int SIZE = 20;

int main() {
    // Seed the random number generator so it's different every time
    srand(time(0));

    int ocean[SIZE][SIZE];


    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            int r = rand() % 100; // Get a number 0-99
            if (r < 10) ocean[i][j] = SHARK;      // 10% Sharks
            else if (r < 40) ocean[i][j] = FISH;  // 30% Fish
            else ocean[i][j] = EMPTY;             // 60% Empty
        }
    }


    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (ocean[i][j] == SHARK) cout << "S ";
            else if (ocean[i][j] == FISH) cout << "f ";
            else cout << ". ";
        }
        cout << endl;
    }

    return 0;
}