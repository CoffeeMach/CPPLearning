#include <iostream>
using namespace std;  // "using" declaration is important

int main() {
    cout << "Enter number: " << endl;
    int count = 0, sum = 0, val;
    cin >> val;
    while (0 <= val) {
        sum += val;
        val--;
    }
    cout << "The sum is " << sum << endl;
    return 0;
}