#include<iostream>
#include<string>
using namespace std;
class String{
    public:
    string str;
   void getdata(){
        cout<<"Enter String";
        cin>>str;
    }
  void display(){
        cout<<str;
    }
    String operator+(String A){
        string S;
      S.str= str+A.str;
        return S;
    }
};
int main(){
    String S1,S2,S3;
    S1.getdata();
    S2.getdata();
    S3= S1 + S2;
    S3.display();
}