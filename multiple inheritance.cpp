#include<iostream>
using namespace std;
class m{
    public:
    int x;
    void get(){
        cout<<"Enter a number";
        cin>>x;
    }
};
class n{
    public:
    int y;
    void gets(){
        cout<<"Enter a number";
        cin>>y;
}  
};
class d: public m, public n{
public: 
void result(){
    cout<<x+y<<endl;
}
};
int main() {
    d obj;
    obj.get(); 
  obj.gets(); 
    obj.result();
    return 0;
}
