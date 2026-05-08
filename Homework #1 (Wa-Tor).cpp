#include <iostream>
#include <vector>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

const int SIZE = 20;
const int EMPTY = 0;
const int FISH = 1;
const int SHARK = 2;

int main() {
    srand(time(0));
    // We use a 2D vector here - it's a bit more modern C++ than a raw array
    vector<vector<int>> ocean(SIZE, vector<int>(SIZE, EMPTY));

    // 1. Initially Populate
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            int r = rand() % 100;
            if (r < 5) ocean[i][j] = SHARK;      // 5% Sharks
            else if (r < 30) ocean[i][j] = FISH; // 25% Fish
        }
    }

    while (true) {
        // Clear screen (use "cls" for Windows, "clear" for Mac/Linux)
        system("clear || cls");

        // 2. Display
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                if (ocean[i][j] == SHARK) cout << "S ";
                else if (ocean[i][j] == FISH) cout << "f ";
                else cout << ". ";
            }
            cout << endl;
        }

        // 3. Movement Logic (The "Homework" part)
        vector<vector<int>> nextOcean(SIZE, vector<int>(SIZE, EMPTY));

        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                if (ocean[i][j] == FISH) {
                    // Try to move to a random neighbor
                    int ni = (i + (rand() % 3 - 1) + SIZE) % SIZE; // Torus logic!
                    int nj = (j + (rand() % 3 - 1) + SIZE) % SIZE;

                    if (nextOcean[ni][nj] == EMPTY) {
                        nextOcean[ni][nj] = FISH;
                    } else {
                        nextOcean[i][j] = FISH; // Stay put if blocked
                    }
                }
                // NOTE: You'll need to add Shark logic here to eat the fish!
                if (ocean[i][j] == SHARK) {
                    nextOcean[i][j] = SHARK; // For now, sharks just sit there
                }
            }
        }

        ocean = nextOcean; // Update the ocean
        this_thread::sleep_for(chrono::milliseconds(150));
    }
    return 0;
}