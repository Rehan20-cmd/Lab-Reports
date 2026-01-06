#include <iostream>

using namespace std;

class Grand {
protected: 
    int totalamount;

public:
    Grand() {
        totalamount = 100;
        cout << "Total Amount of Grand Parent is: " << totalamount << endl;
    }
};

class Parent : public Grand {
protected:
    int pamount;

public:
    Parent() {
      
        pamount = totalamount - 50;
        cout << "Total Amount of Parent is: " << pamount << endl;
    }
};

class Child : public Parent {
public:
    Child() {
  
        int camount = pamount - 25;
        cout << "Total Amount of Child is: " << camount << endl;
    }
};

int main() {
    
    Child obj; 
    
    return 0;
}