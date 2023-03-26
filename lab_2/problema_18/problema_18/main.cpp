#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n = 0;
    int i = 0;
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int count = 1;

    cout << "Ingresa un numero: ";
    cin >> n;

    do {
        if (count == n) {
            for (; i < 10; i++) {
                cout << arr[i];
            }
            cout << endl;
            break;
        }
        count++;
    } while (next_permutation(arr, arr + 10));

    return 0;
}
