#include <string>
#include <iostream>

using namespace std;

int main()
{
    cout << "start for" << endl;

    for (int i = 1; i < 11;i++)
    {
        cout << i << endl;
    }

    cout << "start while" << endl;

    int i = 1;
    while (i < 11) {
        cout << i << endl;
        i++;
    }

    cout << "start do while" << endl;

    int b = 1; 

    do {
        cout << b << endl;
        b++;
    } 
    while (b < 11);
}
