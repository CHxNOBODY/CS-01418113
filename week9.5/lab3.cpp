#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> scanned;
    vector<int> missing_odd, missing_even;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        scanned.insert(num);
    }
    
    for (int i = 1; i <= n; i++) {
        if (scanned.find(i) == scanned.end()) {
            if (i % 2 == 1) {
                missing_odd.push_back(i);
            } else {
                missing_even.push_back(i);
            }
        }
    }
    
    for (int num : missing_odd) {
        cout << num << " ";
    }
    cout << endl;
    
    for (int num : missing_even) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
