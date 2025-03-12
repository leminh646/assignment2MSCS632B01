#include <iostream>
using namespace std;

int main() {
    int* arr = new int[5];  // Dynamically allocated array
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    cout << arr[0] << endl;

    delete[] arr;  // Manual deallocation of memory
    return 0;
}
