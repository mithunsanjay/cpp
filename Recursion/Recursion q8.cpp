#include <iostream>
using namespace std;

// Recursive function to calculate sum of array elements
int sumArray(int arr[], int n) {
    if (n == 0)
        return 0;
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << sumArray(arr, n) << endl;
    return 0;
}
