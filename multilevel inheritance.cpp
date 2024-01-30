#include<iostream>
using namespace std;
class fac{
    public:
    int n;
    void data(){

    
    cout<<"Enter a number";
    cin>>n;
}
};
class pr: public fac{
    public:
    int f=1,i;
    void process(){
    for(i=1;i<=n;i++){
        f=f*i;
    }
    }
};
class detail: public pr{
    public:
    void display(){
        cout<<"The factorial of given number is: "<<f;
    }
};
int main(){
    detail x;
    x.data();
    x.process();
    x.display();
    return 0;
}
