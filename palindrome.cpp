#include<iostream>
using namespace std;
class palindrome{
    int n, rev=1, st;
    public:
    void getdata(){
        cout<<"Enter a number";
        cin>>n;
        st=n;
    }
    void process(){
        while(n>0){
            rev=rev*10;
            rev=rev+n%10;
            n=n/10;
        }
        if(st==rev){
            cout<<"Number is palindrome";
        }
        else{
            cout<<"Number is not palindrome";
        }
    }
}