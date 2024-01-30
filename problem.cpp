#include <iostream>
using namespace std;

class A {
public:
    int id;
    string name, address;
    void get() {
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter address: ";
        cin >> address;
    }
};

class B : public A {
public:
    int M1, M2, M3, M4, total = 0;
    void marks() {
        cout << "Enter marks of 1st sub: ";
        cin >> M1;
        cout << "Enter marks of 2nd sub: ";
        cin >> M2;
        cout << "Enter marks of 3rd sub: ";
        cin >> M3;
        cout << "Enter marks of 4th sub: ";
        cin >> M4;
        total = M1 + M2 + M3 + M4;
    }
};

class C : public B {
public:
    void showdetail() {
        
        cout << id << "\t\t" << name << "\t\t" << address << "\t\t" << total << endl;
    }
};

int main() {
    C obj[3]; 
    for (int i = 0; i < 3; i++) {
        cout << "Enter details for Student " << i + 1 << ":" << endl;
        obj[i].get();
        obj[i].marks();
    }

    cout << "Detail of Students:" << endl;
    cout << "Id\t\tName\t\tAddress\t\tTotal Marks" << endl;
    for (int i = 0; i < 3; i++) {
        obj[i].showdetail();
    }

    return 0;
}
