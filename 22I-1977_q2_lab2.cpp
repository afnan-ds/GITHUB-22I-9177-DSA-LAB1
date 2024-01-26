#include<iostream>
#include<math.h>
using namespace std;
class Point
{
private:
	int x;
	int y;

public:
	Point()
	{
		x = 0;
		y = 0;
	}
	void setx(int x_)
	{
		x = x_;
	}
	void sety(int y_)
	{
		y = y_;
	}
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}
	int distance(int x1,int x2)
	{
		int z;
		z= sqrt(((x - x1)*(x - x1)) + ((y - x1)*(y - x1)));
		return z;
	}

};
int main()
{

	int x2, y2;
	int x1, y1;
	Point p;
	cout << "Enter The X2 Coordinate:" << endl;
	cin >> x2;
	cout << "Enter The Y2 Coordinate:" << endl;
	cin >> y2;
	cout << "Enter The X1 Coordinate:" << endl;
	cin >> x1;
	cout << "Enter The Y1 Coordinate:" << endl;
	cin >> y1;
	p.setx(x2);
	p.sety(y2);
	cout << "The Distance Comes Out To Be: " << p.distance(x1,x2) << endl;
	return 0;
}
