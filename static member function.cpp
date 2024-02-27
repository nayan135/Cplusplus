#include<iostream>
using namespace std;
class A{
    int p,t,i;
    double static r;
    public:
    void getdata(){
        cout<<"Enter Principle, time";
        cin>>p>>t;
 
   }
   static void modify(double s){
    r= r+s;
   }
  void calc(){
    i=(p*t*r)/100;
  int T=p+i;
    cout<<T<<endl;


   }
};
double A::r=1.3;
int main(){
    A a1,a2,a3;
    a1.getdata();
    a2.getdata();
    a3.getdata();
    A::modify(1.25);
    a1.calc();
    a2.calc();
    a3.calc();
    return 0;
}