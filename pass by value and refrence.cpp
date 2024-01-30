#include<iostream>
using namespace std;

// Pass by Value
void changeValue(int x) {
    x = x+1;
    cout<<"on the function :"<<x<<endl;
}

// Pass by Reference
void changeValueRef(int &x) {
    x = 10;
}

int main() {
    int y = 5;
    //pass byy value
    cout << "Before pass by value, y = " << y << endl;
    changeValue(y);
    cout << "After pass by value, y = " << y << endl;

   //pass by refrence
    cout << "Before pass by reference, y = " << y << endl;
    changeValueRef(y);
    cout << "After pass by reference, y = " << y << endl;
 
    return 0;
}
