#include <iostream>

using namespace std;

// Structure to represent a term in a polynomial
struct Term {
    int coefficient;
    int exponent;
};

// Function to add two polynomials
void addPolynomials(Term poly1[], int size1, Term poly2[], int size2, Term result[], int& size_result) {
    int i = 0, j = 0, k = 0;

    // Traverse both polynomials and add terms
    while (i < size1 && j < size2) {
        if (poly1[i].exponent == poly2[j].exponent) {
            // If exponents are equal, add coefficients
            result[k].coefficient = poly1[i].coefficient + poly2[j].coefficient;
            result[k].exponent = poly1[i].exponent;
            i++;
            j++;
        } else if (poly1[i].exponent > poly2[j].exponent) {
            // If exponent of poly1 is greater, add term from poly1
            result[k].coefficient = poly1[i].coefficient;
            result[k].exponent = poly1[i].exponent;
            i++;
        } else {
            // If exponent of poly2 is greater, add term from poly2
            result[k].coefficient = poly2[j].coefficient;
            result[k].exponent = poly2[j].exponent;
            j++;
        }
        k++;
    }

    // Add remaining terms of poly1, if any
    while (i < size1) {
        result[k].coefficient = poly1[i].coefficient;
        result[k].exponent = poly1[i].exponent;
        i++;
        k++;
    }

    // Add remaining terms of poly2, if any
    while (j < size2) {
        result[k].coefficient = poly2[j].coefficient;
        result[k].exponent = poly2[j].exponent;
        j++;
        k++;
    }

    size_result = k; // Update the size of the result
}

// Function to print a polynomial
void printPolynomial(Term poly[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << poly[i].coefficient << "x^" << poly[i].exponent << " + ";
    }
    cout << "0" << endl;
}

int main() {
    int n1, n2;
    cout << "Enter the number of terms in first polynomial: ";
    cin >> n1;

    Term poly1[n1];
    cout << "Enter the terms of first polynomial (coefficient exponent):" << endl;
    for (int i = 0; i < n1; ++i) {
        cin >> poly1[i].coefficient >> poly1[i].exponent;
    }

    cout << "Enter the number of terms in second polynomial: ";
    cin >> n2;

    Term poly2[n2];
    cout << "Enter the terms of second polynomial (coefficient exponent):" << endl;
    for (int i = 0; i < n2; ++i) {
        cin >> poly2[i].coefficient >> poly2[i].exponent;
    }

    // Resultant polynomial
    Term result[n1 + n2];
    int size_result;

    // Add polynomials
    addPolynomials(poly1, n1, poly2, n2, result, size_result);

    // Print the resultant polynomial
    cout << "Resultant polynomial after addition: ";
    printPolynomial(result, size_result);

    return 0;
}
