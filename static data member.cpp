#include<iostream>
using namespace std;
class account {
int balance, Accountno, Interest, Tbalance;
int static rate;
public:
void getdata(){
    cout<<"enter Account no.";
    cin>>Accountno;
    cout<<"Enter Balance";
    cin>>balance;

}
void display(){
    Interest= balance*rate;
    Tbalance= balance+Interest;
}
   void showdata() {
        cout << "Account no.: " << Accountno << endl;
        cout << "Balance: " << balance << endl;
        cout << "Rate: " << rate << endl;
        cout << "Interest: " << Interest << endl;
        cout << "Total Balance: " << Tbalance << endl;
    }
};
int account::rate=1.25;
int main(){
    account a1, a2;
    a1.getdata();
    a1.display();
 a1.showdata();
   a2.getdata();
    a2.display();
    a2.showdata();
    return 0;
}