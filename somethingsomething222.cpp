// File Name: somethingsomething222.ccp
//Programmer: Charles Duncan
//Date: 9/19/2025
//Requirements: write a program that can be used as a math tutor for a young student. the program should then pause while the student works on the problem. When the student is ready to check the answer, he or she can press a key and the program will display the correct solution

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>  // for numeric_limits
using namespace std;

int main() {
    // Seed random number generator
    srand(time(0));

    // Generate two random numbers (1–999)
    int num1 = rand() % 900 + 100; // three digits
    int num2 = rand() % 900 + 100;

    // Display the problem
    cout << num1 << " + " << num2 << endl;
    cout << "Press Enter when you are ready to see the answer...";
    
    // Wait for Enter key
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear buffer
    cin.get(); // wait for key press

    // Display the correct answer
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    return 0;
}
