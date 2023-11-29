#include <iostream>
#include <cmath>
using namespace std;

class Arena {
protected:
    int radius;
    
public:
    void display() {
        cout << radius * radius << endl; //displays the square of rad
    }
};

class ArenaArea : public Arena {
public:
    void scan_input() {
        cin >> radius; //read the input rad
    }
    
    void display() {
        cout << 3.14 * radius * radius; //displays area
    }
};

int main()
{
    //DO NOT MODIFY ANYTHING IN THE main() !!!
    
    ArenaArea stadium; //Declaring ArenaArea object stadium
    
    stadium.scan_input(); //Read the radius input
    
    stadium.Arena::display(); //Print the radius squared
    
    cout << endl;
    
    stadium.display(); //Print the area of the Arena (stadium) object
    
    return 0;
}
