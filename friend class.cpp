#include <iostream>
using namespace std;

class FriendClass {
private:
    int privateData;

public:
    FriendClass(int data) : privateData(data) {}

    friend void displayPrivateData(FriendClass obj);
};

void displayPrivateData(FriendClass obj) {
    cout << "Private data: " << obj.privateData << endl;
}

int main() {
    FriendClass obj(10);
    displayPrivateData(obj);
    return 0;
}