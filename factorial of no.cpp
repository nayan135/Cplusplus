#include<iostream>
using namespace std;
class facto{
    int f=1,n,i;
    public:
    void data(){
        cout<<"Enter a number";
        cin>>n;
    }
    void process(){
        for(i=1;i<=n;i++){

            f=f*i;
        }
        cout<<"Factoiral of "<<n<< "is: "<<f;
    }
};
int main(){
    facto factorial;
    factorial.data();
    factorial.process();
}
