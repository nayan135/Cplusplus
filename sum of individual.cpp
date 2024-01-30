#include<iostream>
using namespace std;
class sumind{
    int n, d, sum=0;
public:
void getdata(){
    cout<<"enter a no: ";
    cin>>n;

}
void process(){
    while(n>0){
        d=n%10;
        sum= sum+d;
        n=n/10;
    }
    cout<<"SUm of individual digits of given no: "<<sum;
}

};
int main(){
    sumind x;
    x.getdata();
    x.process();
    return 0;
}