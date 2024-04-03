#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    void getDescription() {
        cout << "Enter car name: ";
        cin>>name;
        cout << "Enter brand model: ";
        cin>>brandModel;

        cout << "Enter price: ";
        cin >> price;
    }

    void displayCar() {
        cout << "\nCar Details:\n";
        cout << "Name: " << name << endl;
        cout << "Brand Model: " << brandModel << endl;
        cout << "Price: $" << price << endl; 
    }

private:
    string name;
    string brandModel;
    double price;
};

int main() {
    Car car;

    car.getDescription();
    car.displayCar();

    return 0;
}
