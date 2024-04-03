#include<iostream>
using namespace std;

// for loop
class A{
public:
// for loop

void loop(){
    int i;
    int f=1;
    for(i=1;i<=10;i++){
        f=f*i;
        cout<<f<<endl;
    }
}

/*
// do while loop
    void loop(){
        int i=0;
        int f=1;
        do{
            f=f*i;
            cout<<f<<endl;
            i++;
        }
        while(i<=10);
    }
*/
/*
    //while loop
    void loop(){
int i=0;
    int f=1;
    while(i<=10){
        f=f*i;
        cout<<f<<endl;
        i++;
    }
    }
    */
};

int main(){
 A obj;
 obj.loop();
}