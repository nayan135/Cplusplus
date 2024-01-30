#include<iostream>
using namespace std;
class overload{
    public:
    int add(int x,int y){
        return x+y;
    }
    int add(int x, int y, int z){
        return x+y+z;
    }
};
int main(){
    overload obj;
   cout<<obj.add(10,10)<<endl;
   cout<<obj.add(10,10,20);

}