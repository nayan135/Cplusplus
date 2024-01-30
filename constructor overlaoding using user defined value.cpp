#include<iostream>
#include<conio.h>
using namespace std;
class cons{
  int a,b;
  public:
  cons(){
    a=0;
    b=0;
  }
  cons(int x,int y){
    a=x;
    b=y;
  }
  void result(){
    cout<<a*b<<endl;
  }


};
int main(){
    int x,y;
    cout<<"enter a no";
    cin>>x>>y;
  cons obj;
  cons objj(x,y);
  obj.result();
  objj.result();
  getch();
}
