#include <iostream>
using namespace std;

int main() {
    int array1[10], array2[10];
    int n1, n2;

    while (true) {
        cout << "Enter the number of elements for array1 (max 10): ";
        if (cin >> n1 && n1 >= 0 && n1 <= 10) {
            break;
        } else {
            cout << "Invalid input. Please enter a number between 0 and 10." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }

    if (n1 > 0) {
        cout << "Enter " << n1 << " elements for array1:" << endl;
        for (int i = 0; i < n1; ++i) {
            while (true) {
                cout << "Element " << (i + 1) << ": ";
                if (cin >> array1[i]) {
                    break;
                } else {
                    cout << "Invalid input. Please enter a valid integer." << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                }
            }
        }
    }

    while (true) {
        cout << "Enter the number of elements for array2 (max 10): ";
        if (cin >> n2 && n2 >= 0 && n2 <= 10) {
            break;
        } else {
            cout << "Invalid input. Please enter a number between 0 and 10." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }

    if (n2 > 0) {
        cout << "Enter " << n2 << " elements for array2:" << endl;
        for (int i = 0; i < n2; ++i) {
            while (true) {
                cout << "Element " << (i + 1) << ": ";
                if (cin >> array2[i]) {
                    break;
                } else {
                    cout << "Invalid input. Please enter a valid integer." << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                }
            }
        }
    }

    int mergedSize = n1 + n2;
    int mergedArray[20];

    for (int i = 0; i < n1; ++i) {
        mergedArray[i] = array1[i];
    }
    for (int i = 0; i < n2; ++i) {
        mergedArray[n1 + i] = array2[i];
    }

    for (int i = 0; i < mergedSize - 1; ++i) {
        for (int j = 0; j < mergedSize - i - 1; ++j) {
            if (mergedArray[j] < mergedArray[j + 1]) {
                int temp = mergedArray[j];
                mergedArray[j] = mergedArray[j + 1];
                mergedArray[j + 1] = temp;
            }
        }
    }

    cout << "Merged array in descending order: ";
    for (int i = 0; i < mergedSize; ++i) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}