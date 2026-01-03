// Program to check whether a number is even or odd
// Understand if-else construct

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (n % 2 == 0) 
    {
        cout<<"The number is Even"<<endl;
    } 
    else 
    {
        cout<<"The number is Odd"<<endl;
    }

    return 0;
}

// Time Complexity: O(1) - The program performs a constant number of operations regardless of the input value.
// Space Complexity: O(1) - The program uses only one integer variable and does not require any extra memory.
