#include<iostream>
using namespace std;

// for loop
class A{
public:
// for loop
/*
void loop(){
    int i;
    int f=1;
    for(i=1;i<=5;i++){
        f=f*i;
        cout<<f<<endl;
    }
}
*/
/*
// do while loop
    void loop(){
        int i=1;
        int f=1;
        do{
            f=f*i;
            cout<<f<<endl;
            i++;
        }
        while(i<=5);
    }
*/

    //while loop
    void loop(){
int i=1;
    int f=1;
    while(i<=5){
        f=f*i;
        cout<<f<<endl;
        i++;
    }
    }
    
};

int main(){
 A obj;
 obj.loop();
}