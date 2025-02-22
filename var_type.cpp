// C++ program to demonstrate
// working of auto keyword

#include <iostream>  // For input/output
#include <vector>    // For vectors
#include <algorithm> // For sorting and searching
#include <cmath>     // For mathematical functions
using namespace std;

// Driver Code
int main()
{

    // Variables
    auto an_int = 26;
    auto a_bool = false;
    auto a_float = 26.24;
    auto ptr = &a_float;

    // Print typeid
    cout << typeid(a_bool).name() << "\n";
    cout << typeid(an_int).name() << "\n";
    return 0;
}