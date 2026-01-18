#include <iostream>
using namespace std;  // "using" declaration is important

int main() {
    int sum = 0, value = 0;
    //read until end of file (until an invalid value is given to terminal)
    while (cin >> value)
        sum += value;
    cout << "Sum = " << sum << endl;
    return 0;
}