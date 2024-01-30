#include<iostream>
using namespace std;
class mid{
    int n, d,s,sum=0;
public:
void getinfo(){
    cout<<"enter a no: ";
    cin>>n;
    s=n%10;
}
void process(){
  
while(n>=10){
   n=n/10;
}
cout<<s+n;
}

};
int main(){
  mid x;
  x.getinfo();
  x.process();
  return 0;
}