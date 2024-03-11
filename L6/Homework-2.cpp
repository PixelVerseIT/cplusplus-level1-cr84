#include "iostream"
using namespace std;

int main(){
    char inputChar;
    cout << "Enter a character (lowercase or uppercase): ";
    cin >> inputChar;

    if (inputChar >= 'a' && inputChar <= 'z') {
        char outputChar = inputChar - ('a' - 'A');
        cout << "Output: " << outputChar << endl;
    }
    if (inputChar >= 'A' && inputChar <= 'Z') {
        char outputChar = inputChar + ('a' - 'A');
        cout << "Output: " << outputChar << endl;
    }
    return 0;
}