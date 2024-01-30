#include<iostream>
using namespace std;
class sum{
    int a,b,c;
    public:
   void getdata();
   void process();
};
void sum::getdata(){
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;

}
void sum::process(){
    c=a+b;
    cout<<"The Sum is "<<c<<endl;
}
int main(){
    sum s1;
    s1.getdata();
    s1.process();
    return 0;
}