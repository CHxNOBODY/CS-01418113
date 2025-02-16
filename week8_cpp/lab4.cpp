#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdio>
using namespace std;

void signedRatio(vector<int> arr) {
    int n = arr.size();
    int positive = 0, negative = 0, zero = 0;
    
    for (int num : arr) {
        if (num > 0) positive++;
        else if (num < 0) negative++;
        else zero++;
    }
    
    cout << fixed << setprecision(6);
    cout << (double)positive / n << endl;
    cout << (double)negative / n << endl;
    cout << (double)zero / n << endl;

}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);

    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        ar[i] = temp;
    }

    signedRatio(ar);
    return 0;
}
