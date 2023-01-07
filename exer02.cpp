#include <iostream> // https://exercism.org/tracks/cpp/exercises/leap

using namespace std;

int main() {
    
    int year;

    cout << "Digite o ano: " << endl;
    cin >> year;

    if (year % 4 == 0) {

        if (year % 100 == 0 && year % 400 == 0) {

            cout << "Esse ano é bissexto" << endl;  

        } else {
            cout << "Esse ano não é bissexto" << endl;
        }

    }

    return 0;

}