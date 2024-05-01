#include <iostream>
using namespace std;

class Distance
{
private:
	int feet;
	float inches;

public:
	Distance() : feet(0), inches(0.0)
	{
	}
	Distance(int ft, float in)
	{
		feet = ft;
		inches = in;
	}
	void get_dist()
	{
		cout << "Please enter feet: ";
		cin >> feet;
		cout << "Please enter the inches: ";
		cin >> inches;
	}

	void show_dist() const
	{
		cout << feet << "/'-" << inches << '\"';
	}
	Distance operator+(Distance) const;
};

Distance Distance::operator+(Distance d2) const
{
	int f = feet + d2.feet;
	float i = inches + d2.inches;
	if (i >= 12.0)
	{
		i -= 12.0;
		f++;
	}
	return Distance(f, i);
}

int main()
{
	Distance dist1, dist3, dist4;
	dist1.get_dist();
	Distance dist2(15, 45.6);

	dist3 = dist1 + dist2;
	cout << "the distance 1 = \n"
		 << endl;
	dist1.show_dist();
	cout << "the distance 2 = \n"
		 << endl;
	dist2.show_dist();
	cout << "the distance 3 =\n"
		 << endl;
	dist3.show_dist();
	return 0;
}