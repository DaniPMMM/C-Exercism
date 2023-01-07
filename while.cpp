#include <iostream>

int main() {

    int val = 1;
    int sum = 0;

    while (val <= 10) {
        sum = sum + val;
        ++val;
    }

    std::cout << sum;

}