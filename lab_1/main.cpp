#include "Rhombus.h"
#include "Pentagon.h"
#include "Hexagon.h"
#include "Rhombus.cpp"
#include "Pentagon.cpp"
#include "Hexagon.cpp"
using namespace std;

int main()
{
    int figure;
    cout << "Enter the number of figure: 1-Rhombus, 2-Pentagon, 3-Hexagon: ";
    cin >> figure;
    switch (figure)
    {
        case 1:
        {
            Figure *ptr = new Rhombus(cin);
            ptr->Print();
            cout << ptr->Square() << endl;
            delete ptr;
            break;
        }
        case 2:
        {
            Figure *ptr = new Pentagon(cin);
            ptr->Print();
            cout << ptr->Square() << endl;
            delete ptr;
            break;
        }
        case 3:
        {
            Figure *ptr = new Hexagon(cin);
            ptr->Print();
            cout << ptr->Square() << endl;
            delete ptr;
            break;
        }
        default:
        {
            cout << "This is not a figure";
        }
    }
    return 0;
}
