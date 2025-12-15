
#include <iostream>

using namespace std;

int main()
{
    int i = 60;
    int a;
    cout << "input 0 -100??" << endl;
    do {
        cin >> a;
        if (a < i) cout << "LOW! Try again"<< endl;
        else if (a > i) cout << "HIGH! Try again"<< endl;
    } while (a != i); cout << "Success" << endl;
}
