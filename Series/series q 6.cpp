#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        long long term = 1;
        for (int j = 1; j <= i; j++) {
            term *= i;
        }
        cout << term << " ";
    }
    cout << endl;
    return 0;
}
