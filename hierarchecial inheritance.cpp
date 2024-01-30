#include<iostream>
using namespace std;
class h{
    public:
    int n;
    void data(){
        cout<<"Enter a number";
        cin>>n;
    }   
};
class fac: public h{
       public:
    int f=1,i;
    void process(){
    for(i=1;i<=n;i++){
        f=f*i;
    }
    cout<<"The factorial is: "<<f;
}
};
class factor: public h{
    public:
    int i;
     void process(){
        cout<<endl<<"The factor of given no is: ";
    for(i=1;i<=n; i++){
        if (n%i==0){
            cout<<i<<"\t";
    }
}
}
};
int main(){
    fac obj;
    factor obj2;
    obj.data();
    obj2.data();
    obj.process();
    obj2.process();
   return 0;
}