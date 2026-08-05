#include <iostream>
using namespace std;

int main() {
    int age;
    bool hasID;

    cin >> age >> hasID;

    if (age >= 18) {
        if (hasID) {
            cout << "Entry Allowed";
        } else {
            cout << "Bring ID";
        }
    } else {
        cout << "Not Eligible";
    }

    return 0;
}