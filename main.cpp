#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age < 12) {
        cout << "child" << endl;
    } else if (age >= 12 && age <= 19) {
        cout << "teen" << endl;
    } else if (age >= 20 && age <= 64) {
        cout << "adult" << endl;
    } else {
        cout << "senior" << endl;
    }

    return 0;
}