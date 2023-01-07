#include <iostream> //Exercise 1.9: Write a program that uses a while to sum the numbers from 50 to 100.

using namespace std;

int main() {

    int number = 50, sum = 0;

    while (number <= 100) {
        sum = sum + number;
        number = number + 1;
    }

    cout << sum << endl;

    return 0;

}