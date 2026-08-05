#include <iostream>
using namespace std;

double celsiusToFahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32;
}

double fahrenheitToCelsius(double f) {
    return (f - 32) * 5.0 / 9.0;
}

int main(){

    double c,f;
    cin >> c >> f;

    cout << "Cel TO Far - " << celsiusToFahrenheit(c) << endl;
    cout << "Far TO Cel - " << fahrenheitToCelsius(f) << endl;

    
}