#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int z;
    int b;
    int q;
    int num = 1;
    cout << "Enter 5 numbers to create a bar chart:" << endl;
    cout << "set x as:" << endl;
    cin >> x;
    cout << "set y as:" << endl;
    cin >> y;
    cout << "set z as:" << endl;
    cin >> z;
    cout << "set b as:" << endl;
    cin >> b;
    cout << "set q as:" << endl;
    cin >> q;

    while (num <= x)
    {
        cout << "*" ;
        num++;
    }
    cout << "  " << x << endl;
    num = 1;

     while (num <= y)
    {
        cout << "*" ;
        num++;
    }
    cout << "  " << y << endl;
     num = 1;

    while (num <= z)
    {
        cout << "*" ;
        num++;
    }
    cout << "  " << z << endl;
     num = 1;

    while (num <= b)
    {
        cout << "*" ;
        num++;
    }
    cout << "  " << b << endl;
     num = 1;

      while (num <= q)
    {
        cout << "*" ;
        num++;
    }
    cout << "  " << q << endl;
     num = 1;
    return 0;
}
