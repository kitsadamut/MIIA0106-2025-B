
#include <iostream>
using namespace std;

int Max(int a, int b , int c)
{
    int max_val = a;
    if (b > max_val)
        max_val = b;
    if (c > max_val)
        max_val = c;
    return max_val;
}

int Min(int a, int b , int c)
{
    int min_val = a;
    if (b < min_val)
        min_val = b;
    if (c < min_val)
        min_val = c;
    return min_val;
}


int main()
{

	int a, b, c;
	cout << "Enter three integers: " << endl;
	cout << "num1 : " ;
	cin >> a;
	cout << "num2 : " ;
	cin >> b;
	cout << "num3 : " ;
	cin >> c;
	cout << "Maximum: " << Max(a, b, c) << endl;

	cout << "Enter three integers: " << endl;
	cout << "num1 : ";
	cin >> a;
	cout << "num2 : ";
	cin >> b;
	cout << "num3 : ";
	cin >> c;
	cout << "Minimum: " << Min(a, b, c) << endl;
	return 0;
    
}
