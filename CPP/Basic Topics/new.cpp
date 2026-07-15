#include <iostream>
#include <vector>

using namespace std;

int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows and cols for matrix A: ";
    if (!(cin >> r1 >> c1)) return 0;
    cout << "Enter rows and cols for matrix B: ";
    if (!(cin >> r2 >> c2)) return 0;

    vector<vector<int>> A(r1, vector<int>(c1));
    vector<vector<int>> B(r2, vector<int>(c2));

    cout << "Enter matrix A elements:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter matrix B elements:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }
    
    if (r1 == r2 && c1 == c2) {
        cout << "Sum of A and B:\n";
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                cout << A[i][j] + B[i][j] << " ";
            }
            cout << '\n';
        }
    } else {
        cout << "Cannot add matrices of different sizes.\n";
    }

    if (c1 == r2) {
        cout << "Product of A and B:\n";
        vector<vector<int>> C(r1, vector<int>(c2, 0));
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                for (int k = 0; k < c1; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                cout << C[i][j] << " ";
            }
            cout << '\n';
        }
    } else {
        cout << "Cannot multiply matrices: columns of A must equal rows of B.\n";
    }

    cout << "Transpose of A:\n";
    for (int j = 0; j < c1; j++) {
        for (int i = 0; i < r1; i++) {
            cout << A[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
