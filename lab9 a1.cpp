#include <iostream>

using namespace std;
class base{
    public:
    int length=10;
    int width=20;
void show(){
    int rec=length*width;
    cout<<rec;
    cout<<endl;
}

};
class dervied{
public:
int l2=20;
void show(){
    int sq=l2*l2*l2*l2;
    cout<<sq;
}
};
int main(){
    base b;
    b.show();
    dervied d;
    d.show();
}