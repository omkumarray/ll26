#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variables & Data Types
    int age = 20;
    float height = 5.9f;
    double pi = 3.14159265359;
    char grade = 'A';
    bool isStudent = true;
    string name;
    const int MAX = 100;

    // Input
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    // auto keyword
    auto marks = 95;

    // Output
    cout << "\n----- Details -----\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Pi: " << pi << endl;
    cout << "Grade: " << grade << endl;
    cout << "Student: " << isStudent << endl;
    cout << "Marks: " << marks << endl;
    cout << "Constant MAX: " << MAX << "\n\n";

    // Arithmetic Operators
    int a = 10, b = 3;
    cout << "Arithmetic Operators\n";
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << "\n\n";

    // Assignment Operators
    int x = 5;
    x += 3;
    x -= 2;
    x *= 4;
    x /= 2;
    cout << "Assignment Result: " << x << "\n\n";

    // Relational Operators
    cout << "Relational Operators\n";
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << "\n\n";

    // Logical Operators
    cout << "Logical Operators\n";
    cout << ((a > 5) && (b < 5)) << endl;
    cout << ((a < 5) || (b < 5)) << endl;
    cout << !(a == b) << "\n\n";

    // Increment & Decrement
    int i = 5;
    cout << "Post Increment: " << i++ << endl;
    cout << "After Post Increment: " << i << endl;
    cout << "Pre Increment: " << ++i << endl;
    cout << "Pre Decrement: " << --i << endl;
    cout << "Post Decrement: " << i-- << endl;
    cout << "After Post Decrement: " << i << "\n\n";

    // Bitwise Operators
    cout << "Bitwise Operators\n";
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << "\n\n";

    // Ternary Operator
    string result = (age >= 18) ? "Adult" : "Minor";
    cout << "Ternary Result: " << result << "\n\n";

    // sizeof Operator
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(double) = " << sizeof(double) << endl;
    cout << "sizeof(char) = " << sizeof(char) << endl;
    cout << "sizeof(bool) = " << sizeof(bool) << endl;
    cout << "sizeof(string) = " << sizeof(string) << "\n\n";

    // Implicit Type Conversion
    int num = 10;
    double value = num;
    cout << "Implicit Conversion: " << value << endl;

    // Explicit Type Conversion (Casting)
    double price = 99.99;
    int roundedPrice = (int)price;
    cout << "Explicit Conversion: " << roundedPrice << endl;

    return 0;
}