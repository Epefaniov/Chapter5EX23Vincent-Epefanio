/* 
    Assignment: Chapter 5 Excersize 23

    Programmer: Vincent Epefanio

    Date: 11/23/2024

    Requirement: Write a program that uses a loop to display Pattern A below, followed by
    another loop that displays Pattern B.

    */



#include <iostream>
using namespace std;

int main() {
    // Pattern A: Increasing number of "+" symbols
    for (int i = 1; i <= 10; i++) {
        // Print `i` number of "+"
        for (int j = 1; j <= i; j++) {
            cout << "+";
        }
        cout << endl;
    }

    // Pattern B: Decreasing number of "+" symbols
    for (int i = 10; i >= 1; i--) {
        // Print `i` number of "+"
        for (int j = 1; j <= i; j++) {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}

