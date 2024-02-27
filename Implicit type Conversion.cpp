// Implicit type Conversion.cpp
#include <iostream>
using namespace std;
int main() {
    int integerVar = 42;
    float floatVar;

    // Implicit conversion from int to float
    floatVar = integerVar;

    cout << "Integer value: " << integerVar << endl;
    cout << "Float value (after implicit conversion): " << floatVar << endl;

    return 0;
}