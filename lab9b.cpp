#include <iostream>
#include <string>
using namespace std;

class Ford {
public:
    string brand = "Ford";

    void vehicleType() {
        cout << "Brand: " << brand << endl;
        cout << "General Type: Four Wheeler" << endl;
    }
};

class Car : public Ford {
public:
    
    void vehicleType() {
        cout << "Brand: " << brand << endl;
        cout << "Specific Type: Sports Vehicle" << endl;
    }
};

int main() {
   
    Car myCar;

    myCar.vehicleType();

    return 0;
}