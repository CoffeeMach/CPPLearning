#include <iostream>
using namespace std;

int main() {
    std::cout << "Give me a name and city: " << std::endl;
    char name[10] = "", city[10] = "";
    std::cin >> name >> city;
    std::cout << "The name of the contestant is " << name << " from the land of " << city << "!" << std::endl;
    return 0;
}