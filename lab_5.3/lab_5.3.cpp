#include <iostream>

using namespace std;

class A
{
protected:
	int x;
public:
	A(int x = 0)
	{
		this->x = x;
	}

	void setX(int X) {
		x = X;
	}

	int getX() {
		return x;
	}
};
class B
	: public A
{
	int y;
public:
	B(int x = 0, int y = 0)
		: A(x)
	{
		this->y = y;
	}
	B(A a)
	{
		throw a;
	}
};
int main() {
	A a(1);
	B b(2, 3);
	try
	{
		b = B(a);
		cout << "Continue" << endl;
	}
	catch (B)
	{
		cout << "catch(B)" << endl;
		exit(1);
	}
	catch (A)
	{
		cout << "catch(A)" << endl;
		exit(2);
	}

	cout << "End" << endl;

	return 0;
}