#include <iostream> // https://exercism.org/tracks/cpp/exercises/reverse-string
#include <string>

using namespace std;

int main () {

    string palavra = "eu sou uma palavra ao contrário";
    int i;
    cout << "Ao contrário: " << endl;

    for (i = palavra.length() - 1; i >= 0; i--)

    {

        cout << palavra[i];

    }
    return 0;
}
