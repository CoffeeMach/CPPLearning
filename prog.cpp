#include <iostream>
#include <cstring>

using namespace std;  // "using" declaration is important

int main() {
    string password, pass;

    cout << "Determine the password: " << endl;
    cin >> password;

    while (true) {
        cout << "Enter the password: " << endl;
        cin >> pass;
        if (password == pass) {
            cout << "logged in" << endl;
        } else {
            cout << "wrong password" << endl;
        }
    }

    return 0;
}