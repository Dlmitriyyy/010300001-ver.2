#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Triangle
{
private:
	double side1, side2, side3;
	double area;
public:

	Triangle(double s1, double s2, double s3)
	{
		set_side(s1, s2, s3);
	}

	void set_side(double s1, double s2, double s3)
	{
		if (s1 > 0 && s2 > 0 && s3 > 0)
		{
			side1 = s1;
			side2 = s2;
			side3 = s3;
		}
		else
		{
			side1 = 0;
			side2 = 0;
			side3 = 0;
			cout << "Сторона або сторони не можуть бути меншими за 0. Розрахунки не відбудуться." << endl;
		}
	}

	double get_area()
	{
		double half_perimetr = (side1 + side2 + side3) / 2;
		area = sqrt(half_perimetr * (half_perimetr - side1) * (half_perimetr - side2) * (half_perimetr - side3));
		return area;
	}
};
class Rectangle
{
private:
	double side1, side2;
	double area;
public:

	Rectangle(double s1, double s2)
	{
		set_side(s1, s2);
	}

	void set_side(double s1, double s2)
	{
		if (s1 > 0 && s2 > 0)
		{
			side1 = s1;
			side2 = s2;
		}
		else
		{
			side1 = 0;
			side2 = 0;
			cout << "Сторона або сторони не можуть бути меншими за 0. Розрахунки не відбудуться." << endl;
		}
	}

	double get_area()
	{
		area = side1 * side2;
		return area;
	}
};
class Rhombus
{
private:
	double side1, side2;
	double area;
public:

	Rhombus(double s1, double s2)
	{
		set_side(s1, s2);
	}

	void set_side(double s1, double s2)
	{
		if (s1 > 0 && s2 > 0)
		{
			side1 = s1;
			side2 = s2;
		}
		else
		{
			side1 = 0;
			side2 = 0;
			cout << "Сторона або сторони не можуть бути меншими за 0. Розрахунки не відбудуться." << endl;
		}
	}

	double get_area()
	{
		area = (side1 * side2) / 2;
		return area;
	}
};
int main()
{
	system("chcp 1251 > nul");
	int choice_number;
	cout << "Меню програми: " << endl << endl << "1 - обчислення площі трикутника." << endl << "2 - обчислення площі прямокутника." << endl << "3 - обчислення площі ромба." << endl << "Інше число - вихід із програми. " << endl << endl << "Зробіть свій вибір: ";
	cin >> choice_number;
	if (choice_number != 1 && choice_number != 2 && choice_number != 3)
	{
		cout << endl << "Програма завершена." << endl;
		return 0;
	}
	if (choice_number == 1)
	{
		double s1, s2, s3;
		cout << endl << "Вкажіть три сторони трикутника у сантиметрах, обчислення відбудеться через формулу Герона: ";
		cin >> s1 >> s2 >> s3;

		Triangle triangle(s1, s2, s3);

		if (triangle.get_area() != 0)
		{
			cout << endl << "Площа трикутника = " << fixed << setprecision(3) << triangle.get_area() << " см^2" << endl;
		}
		else {}
	}
	if (choice_number == 2)
	{
		double s1, s2;
		cout << endl << "Вкажіть дві сторони прямокутника у сантиметрах для обчислення його площі: ";
		cin >> s1 >> s2;

		Rectangle rectangle(s1, s2);

		if (rectangle.get_area() != 0)
		{
			cout << endl << "Площа прямокутника = " << fixed << setprecision(3) << rectangle.get_area() << " см^2" << endl;
		}
		else {}
	}
	if (choice_number == 3)
	{
		double s1, s2;
		cout << endl << "Вкажіть дві сторони ромба у сантиметрах для обчислення його площі: ";
		cin >> s1 >> s2;

		Rhombus rhombus(s1, s2);

		if (rhombus.get_area() != 0)
		{
			cout << endl << "Площа ромба = " << fixed << setprecision(3) << rhombus.get_area() << " см^2" << endl;
		}
		else {}
	}

}
