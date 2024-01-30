#include<iostream>
using namespace std;
class prime{
    int n, i;
    public:
    void getdata(){
        cout<<"enter a no.";
        cin>>n;
    }
    void proc(){
        for(i=2; i*i<=n; i++){
            if(n%i==0){
                cout<<" not prime";
                break;
            }
            else{
                cout<<"prime";
            }
        }
    }
};
int main(){
    prime x;
    x.getdata();
    x.proc();
    return 0;
}