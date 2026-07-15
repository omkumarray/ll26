#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; 
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    int value = 1;
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; ++j)
            matrix[top][j] = value++;
        top++;

        for (int i = top; i <= bottom; ++i)
            matrix[i][right] = value++;
        right--;

        if (top <= bottom) {
            for (int j = right; j >= left; --j)
                matrix[bottom][j] = value++;
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; --i)
                matrix[i][left] = value++;
            left++;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}
