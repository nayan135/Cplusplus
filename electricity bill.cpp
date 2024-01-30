#include<iostream>
using namespace std;
class elec{
    int u, t;
    int service = 150;
    int upto100 =5;
    int upto200 =10;
    int  above200 =15;
    public:
    void get(){
        cout<<"Enter electricity unit";
        cin>>u;

    }
    void process(){
        if(u<=100){
            t= (upto100*u)+service;
        }
        else if(u<=200){
        
            t= (upto100*100)+(upto200*(u-100))+service;


        }
        else{
            
            t=(upto100*100)+(upto200*100)+(above200*(u-200))+service;
        }

        cout<<"your electricity bill is: "<<t;
    }
};
int main(){
    elec x;
    x.get();
    x.process();
    return 0;
}