#include <iostream>
using namespace std;
void compare(int a, int b)
{
	if (a < b)
	{
		cout << "the smallests from two integer is " << a << endl;
		cout << "the largest from two integers is " << b << endl;
	}
	else
	{
		cout << "the smallests integrer from two is " << b << endl;
		cout << "the largest integer from two is " << a << endl;
	}


}
void compare(int a, int b, int c)
{
	if (a < b && a < c)
	{
		cout << "the smallest integer from 3 numbers is " << a << endl;
		if (b > c)
		{
			cout << "the largest integers from 3 numbers is " << b << endl;
		}
		else
		{
			cout << "the largest integer from 3 number is " << c << endl;
		}
	}
	else if (b < a && b < c)
	{
		cout << "the smallest integrs from 3 numbers is " << b << endl;
		if (a > c)
		{
			cout << "the largest integrs from 3 numbers is " << a << endl;
		}
		else
		{
			cout << "the largest integer from 3 numbers is " << c << endl;
		}
	}
	else if (c < a && c < b)
	{
		cout << "the smallest integer from 3 numbers is " << c << endl;
		if (a > b)
		{
			cout << "the largest integer from 3 numbers is" << a << endl;
		}
		else
		{
			cout << "the largest iteger from 3 numbers is " << b << endl;
		}
	}

}

void compare(int a, int b, int c, int d)
{
	if (a < b && a < c && a < d)
	{
		cout << "the smallest integer from 4 numbers is " << a << endl;
		if (b > c && b > d)
		{
			cout << "the largest integrs from 4 numbers is " << b << endl;
		}
		else if (c > b && c > d)
		{
			cout << "the largest integer from 4 numbers is " << c << endl;
		}
		else
		{
			cout << "the largest integer from 4 numbers is " << d << endl;
		}

	}
	else if (b < a && b < c && b < d)
	{
		cout << "the smallest integer from 4 numbers is " << b << endl;
		if (a > c && a > d)
		{
			cout << "the largest integer from 4 numbers is " << a << endl;
		}
		else if (c > a && c > d)
		{
			cout << "the largest integer from 4 numbers is " << c << endl;
		}
		else
		{
			cout << "the largest integer from 4 numbers " << d << endl;
		}
	}
	else if (c < a && c < b && c < d)
	{
		cout << "the smallest integer from 4 numbers is " << c << endl;
		if (a > b && a > d)
		{
			cout << "the largest integer from 4 numbers is " << a << endl;
		}
		else if (b > a && b > d)
		{
			cout << "the largest integer from 4 numbers is " << b << endl;
		}
		else
		{
			cout << "the largest integer from 4 numbers is " << d << endl;
		}
	}
	else
	{
		cout << "the smallest integer from 4 numbers is " << d << endl;
		if (a > c && a >> b)
		{
			cout << "the largest integer from 4 numbers is " << a << endl;
		}
		else if (b > a && b > c)
		{
			cout << "the largest integer from 4 numbers is " << b << endl;
		}
		else
		{
			cout << "the largest integer from 4 numbers is " << c << endl;
		}



	}
}



int main()
{
	int a, b, c, d;
	cout << "enter number 1" << endl;
	cin >> a;
	cout << "enter number 2" << endl;
	cin >> b;
	cout << "enter number 3" << endl;
	cin >> c;
	cout << "enter number 4" << endl;
	cin >> d;
	cout << a << " " << b << " " << c << " " << d << endl;
	compare(a, b);
	compare(a, b, c);
	compare(a, b, c, d);
	
	return 0;
}