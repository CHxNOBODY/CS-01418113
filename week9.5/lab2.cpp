#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {
    string name;
    double salary, total_income;
    double sales[12];
    
    getline(cin, name);
    cin >> salary;
    
    total_income = salary * 12; 
    
    for (int i = 0; i < 12; i++) {
        cin >> sales[i];
        total_income += sales[i] * 0.15;
    }
    
    char result[50];
    sprintf(result, "%.2f", total_income);
    
    cout << name << " " << result << endl;
    
    return 0;
}
