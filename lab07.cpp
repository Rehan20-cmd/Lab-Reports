#include <iostream>
#include <conio.h>
#include <string.h>
#include <sstream>
#include <fstream>
#include <windows.h>
using namespace std;
class Rose{
    public:
   
    int r=5;
};
class Jasmine{
    public:
    int j =10;
};
class Flower:public Rose,public Jasmine{
    public:
    void total1(){
int total=r+j;
cout<<total;
    }

};
int main(){
    Flower obj;
    obj.total1();
}