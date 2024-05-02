

#include <iostream>

#include <cmath>

using namespace std;

int main()
{
	double x, a, y, b;
	cout << "Enter The Value Of X1:";
	cin>> x;
	cout << "Enter The Value Of X2:";
	cin >> a;
	cout << "Enter The Value Of Y1:";
	cin >> y;
	cout << "Enter The Value Of Y2:";
	cin >> b;

	double X = x - a, Y=y-b;

	double eucludien_distance = sqrt(pow(X, 2) + pow(Y, 2));

	cout << "The distance between point 1 and 2 is " << eucludien_distance;

	return 0;

}

