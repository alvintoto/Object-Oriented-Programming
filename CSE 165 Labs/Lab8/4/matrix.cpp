#include <iostream>
#include <vector>
#include "Sortable.h"
#include "Matrix.h"

using namespace std;

int main() {

    int rows;
    int cols;

    cout << "NUMBERS: " << endl;

    cout << "sample row size: ";
    cin >> rows;

    cout << "sample column size: ";
    cin >> cols;

    Matrix<int> nums(rows, cols);

    cout << endl << "Before Sort:";
    nums.print();

    cout << endl << "After Sort:";
    nums.sort_print();

    int new_rows;
    cout << endl << "New number of rows: ";
    cin >> new_rows;

    cout << endl << "Resized matrix: ";
    nums.resize(new_rows);

    ///////////////////////////////////////////

    cout << endl << "CHARACTERS: " << endl;

    cout << "sample row size: ";
    cin >> rows;

    cout << "sample column size: ";
    cin >> cols;

    Matrix<char> chars(rows, cols);

    cout << endl << "Before Sort:";
    chars.print();

    cout << endl << "After Sort:";
    chars.sort_print();

    cout << endl << "New number of rows: ";
    cin >> new_rows;

    cout << endl << "Resized matrix: ";
    chars.resize(new_rows);
}