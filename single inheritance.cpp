#include<iostream>
using namespace std;
class base{
    public:
    int x;
    void get(){
        cout<<"Enter 1st number";
        cin>>x;
    }
};
class derive: public base{
    protected:
    int y;
    public:
    void gets(){
        cout<<"Enter 2nd number";
        cin>>y;
    }    
void result(){
    cout<<x+y<<endl;
}
};
int main(){
    derive obj;
    obj.get();
    obj.gets();
    obj.result();
    return 0;
}

