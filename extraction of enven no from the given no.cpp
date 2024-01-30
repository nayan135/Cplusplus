#include<iostream>
using namespace std;
class evnno{
    int n, d;
    public:
    void in(){
        cout<<"enter a no";
        cin>>n;
    
    
}
void pro(){
    



cout<<"Even number from the given number is:"<<endl;
while (n>0)    
{
    d=n%10;
    if(d%2==0)
    cout<<d<<endl;
    n=n/10;
}
    }

};
int main(){
    evnno obj;
    obj.in();
    obj.pro();
    return 0;
}