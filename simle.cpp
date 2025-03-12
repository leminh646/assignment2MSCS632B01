#include <iostream>
#include <string>

using namespace std;

void outerFunction(int x) {
    int y = 10; // Local variable

    auto innerFunction = [&]() { // Capture y by reference
        y += x;
        cout << "Inner function: y = " << y << endl;
    };

    innerFunction();
    cout << "Outer function: y = " << y << endl;
}

int main() {
    // Static typing example
    int variable = 10;
    cout << "Type before: int" << endl;
    // Uncommenting the line below will cause a compile error
    // variable = "Hello"; // Type mismatch error in C++
    
    // Calling the function
    outerFunction(5);
    
    return 0;
}
