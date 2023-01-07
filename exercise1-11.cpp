#include <iostream>

using namespace std;

int main (){

    int num1, num2;


    if (num1 < num2) {

        cout << "Enter two integers: " << endl;
        cin >> num1 >> num2;

        while (num1 < num2) {
            num1++;
            cout << num1 << endl;
        }
    } else if (num2 < num1) {
        
        while (num2 < num1) {
            cout << num2 << endl;
            num2++;
            
        }
    }
    

    return 0;

}