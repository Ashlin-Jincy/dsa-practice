// Program to take input for different variable types and print them

#include <iostream>
using namespace std;

int main() {
    int i;
    float f;
    double d;
    char c;
    bool b;
    string s;

    cout << "Enter an integer: ";
    cin >> i;

    cout << "Enter a float: ";
    cin >> f;

    cout << "Enter a double: ";
    cin >> d;

    cout << "Enter a character: ";
    cin >> c;

    cout << "Enter a boolean (0 or 1): ";
    cin >> b;

    cout << "Enter a word (string): ";
    cin >> s;

    cout << "Integer: " << i << endl;
    cout << "Float: " << f << endl;
    cout << "Double: " << d << endl;
    cout << "Character: " << c << endl;
    cout << "Boolean: " << b << endl;
    cout << "String: " << s << endl;

    return 0;
}

// Time Complexity: O(1) – fixed number of input/output operations
// Space Complexity: O(1) – constant extra memory usage
