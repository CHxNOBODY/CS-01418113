#include <iostream>
#include <vector>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size();
    int primaryDiagonal = 0, secondaryDiagonal = 0;
    
    for (int i = 0; i < n; ++i) {
        primaryDiagonal += arr[i][i];
        secondaryDiagonal += arr[i][n - 1 - i];
    }
    
    return abs(primaryDiagonal - secondaryDiagonal);

}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> arr(n);

    for (int i = 0; i < n; ++i) {
        arr[i].resize(n);
        for (int j = 0; j < n; ++j) {
            int temp;
            cin >> temp;
            arr[i][j] = temp;
        }
    }

    int result = diagonalDifference(arr);
    cout << result << endl;
    return 0;
}