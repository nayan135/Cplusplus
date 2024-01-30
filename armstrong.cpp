#include<iostream>
using namespace std;

class arm {
    int n, s, d, ad=0;
public:
    void getdata() {
        cout << "enter a no: ";
        cin >> n;
        s = n;
        
    }

    void process() {
        while (n != 0) {
            d = n % 10;
            ad = ad + (d * d * d);
            n = n / 10; 
        }

        if (s == ad) {
            cout << "It's an Armstrong number." << endl;
        } else {
            cout << "Not an Armstrong number. Try again." << endl;
        }
    }
};

int main() {
    arm p;
    p.getdata();
    p.process();
    return 0;
}
