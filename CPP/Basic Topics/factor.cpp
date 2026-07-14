#include<bits/stdc++.h>
using namespace std;
void factor(int num) {
    vector<int> ans;
    for(int i = 1; i <= sqrt(num); i++) {
        if(num % i == 0) {
            cout << i << " ";
            if(i != num/i) {
                cout << num/i << " ";
            }
        }
    }
}

bool isPrime(int num) {
    if(num < 2) return false;
    for(int i = 2; i <= sqrt(num); i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cin >> num;

    cout << isPrime(num);
    // factor(num);;
    return 0;
}