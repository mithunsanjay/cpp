/*Write a program to find the maximum element in each row of the matrix.

Input Format:
The input consists of (m*n+2) integers.
The first integer corresponds to m, the number of rows in the matrix
The second integer corresponds to n, the number of columns in the matrix.
The remaining integers correspond to the elements in the matrix.
The elements are read in row wise order, first row first, then second row and so on.
Assume that the maximum value of m and n is 10.

Output Format:
Refer sample output for details.


Constraints:
NA


Example:
Sample Input 1:
3
2
4 5
6 9
0 3

Sample Output 1:
5
9
3

*//
#include<iostream>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;

    int matrix[10][10]; 
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        int maxInRow = matrix[i][0]; 
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] > maxInRow) {
                maxInRow = matrix[i][j];
            }
        }
        cout << maxInRow <<endl;
    }

    return 0;
}
