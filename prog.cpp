#include <iostream>
using namespace std;

int main() {
    cout << "Give me a name and city: " << endl;
    char name[10] = "", city[10] = "";
    cin >> name >> city;
    cout << "The name of the contestant is " << name << " from the land of " << city << "!" << endl;
    return 0;
}