include <iostream>  
#include <string> 
using namespace std;

int main() {
    string name;       
    double voltage;    
    double resistance;
    double current;
    double power;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter voltage: ";
    cin >> voltage;

    cout << "Enter resistance: ";
    cin >> resistance;

    current = voltage / resistance;
    power = voltage * current;      

    cout << "Hello, " << name << "!" << endl;
    cout << "Current = " << current << " A" << endl;
    cout << "Power = " << power << " W" << endl;

    return 0;
}
