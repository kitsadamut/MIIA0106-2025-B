
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}



int main()
{
	int a, b;
	cout << "Enter A : ";
	cin >> a;
	cout << "Enter B : ";
	cin >> b;
	cout << "Before Swap: " << "A = " << a << ", B = " << b << endl;
	swap(a, b);
	cout << "After Swap: " << "A = " << a << ", B = " << b << endl;
	return 0;

}
