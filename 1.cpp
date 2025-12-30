#include<iostream>
#include<conio.h>
using namespace std;
class Student{
    public:
    string name;
    int number,roll;
 void get(){
cout<<"Enter your name";
cin>>name;
cin>>roll;
cin>>number;
}
void display(){
    cout<<name;
    cout<<roll;
    cout<<number;
}

};
int main()
{
Student s;
s.get();
s.display();
return 0;
}
