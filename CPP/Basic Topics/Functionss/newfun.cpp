#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int multi(int a, int b){
    return a*b;
}
int divd(int a, int b){
    return a/b;
}
int rem(int a, int b){
    return a%b;
}

int main() {
    int a,b;
    cin >> a >> b;

    int addition = sum(a,b);
    int substraction = sub(a,b);
    int multiplication = multi(a,b);
    int division = divd(a,b);
    int remender = rem(a,b);

    cout << "Addition = " << addition << endl;
    cout << "Subtraction = " << substraction << endl;
    cout << "Multiplication = " << multiplication << endl;
    cout << "Division = " << division << endl;
    cout << "Remainder = " << remender << endl;
}