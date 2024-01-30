#include<iostream>
using namespace std;
class factor{
    int f,i, n;
    public:
    void input(){
        cout<<"enter a number";
        cin>>n;

}
void process(){
    for(i=1;i<=n; i++){
        if (n%i==0){
            cout<<i<<endl;
    }
}
}
};
int main(){
    factor obj; 
    obj.input();
    obj.process();
    return 0;
}