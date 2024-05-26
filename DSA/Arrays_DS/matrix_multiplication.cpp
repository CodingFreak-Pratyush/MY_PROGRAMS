#include <iostream>
#include <string>
using namespace std;

int main() {
    int m, n, p, q;
    cout << "Enter the number of rows for matrix A: ";
    cin >> m;
    cout << "Enter the number of columns for matrix A: ";
    cin >> n;
    cout << "Enter the number of rows for matrix B: ";
    cin >> p;
    cout << "Enter the number of columns for matrix B: ";
    cin >> q;

    if (n != p) {
        cout << "Matrix multiplication not possible" << endl;
    } else {
        int matrix_a[m][n];
        int matrix_b[p][q];
        int result[m][q]; // Resultant matrix

        // Input for Matrix A
        cout << "Enter the elements for matrix A:" << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << "Enter the element [" << i << "][" << j << "]: ";
                cin >> matrix_a[i][j];
            }
        }

        // Input for Matrix B
        cout << "Enter the elements for matrix B:" << endl;
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < q; j++) {
                cout << "Enter the element [" << i << "][" << j << "]: ";
                cin >> matrix_b[i][j];
            }
        }

        // Initialize result matrix with zeros
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                result[i][j] = 0;
            }
        }

        // Matrix multiplication
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                for (int k = 0; k < n; k++) {
                    result[i][j] += matrix_a[i][k] * matrix_b[k][j];
                }
            }
        }

        // Display result matrix
        cout << "Resultant Matrix after multiplication:" << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
