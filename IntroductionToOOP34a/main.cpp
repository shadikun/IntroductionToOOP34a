#include<iostream>
using namespace std;

class Point
{
	double x;
	double y;
public:
	double get_x() const
	{
		return x;
	}
	double get_y() const
	{
		return y;
	}
	void set_x(double x)
	{
		if (x >= -100 && x <= 100)
		{
			this->x = x;
		}
		else
		{
			//this->x = 0;
			throw exception("Bad x");
		}
	}
	void set_y(double y)
	{
		this->y = y;
	}
};
//get/set - методов.
//Inheritance
class Point3D :public Point
{
	double z;
public:
	double get_z()const
	{
		return z;
	}
	void set_z(double z)
	{
		this->z = z;
	}
};
void main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	Point A;
	/*A.x = 2;
	A.y = 3;*/
	A.set_x(200);
	A.set_y(3);
	cout << A.get_x() << "\t" << A.get_y() << endl;	//Point operator
	//Arrow operator - оператор косвенного доступа
	Point* pA = &A;
	cout << pA->get_x() << "\t" << pA->get_y() << endl;
	cout << (*pA).get_x() << "\t" << (*pA).get_y() << endl;

	Point3D B;
	B.
}