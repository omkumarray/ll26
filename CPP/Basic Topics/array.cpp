#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];
    int i = n;

    while(i--){
        cin >> arr[i];
    }

    i=n;
    while (i--){
        cout << arr[i];
    }

    
    // // with diffrent loop.

    // int arr[5];

    // for (int i = 0; i < 5; i++) {
    //     cin >> arr[i];
    // }

    // for (int i = 0; i < 5; i++) {
    //     cout << arr[i] << " ";
    // }

}