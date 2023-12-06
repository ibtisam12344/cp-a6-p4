#include<iostream>
#include<iomanip>
using namespace std;
float car_hour[3];
float charges[3];
float total_hour = 0;
float total_charges = 0;
void in()
{
	for (int i=1; i < 4; i++)
	{
		cout << "Enter the hour of car " << i << endl;
		cin >> car_hour[i - 1];
	}
}
void interface1()
{
	cout << "." << setw(37) << setfill('-') << "." << "\n";
	cout << "|" << "Car " << setw(15) << setfill(' ') << "Hours" << setw(16) << setfill(' ') << "Charges " << " |" << endl;
	cout << "`" << setw(37) << setfill('-') << "`";
	cout << "\n";
}
void calculate()
{ 
	for (int i = 1; i < 4; i++)
	{
		if (car_hour[i - 1] <= 3)
		{
			charges[i - 1] = 2;
			cout << "  " << i << setw(15) << setfill(' ') << car_hour[i - 1] << setw(15) << setfill(' ') << charges[i - 1] << endl;
		}
		else if (car_hour[i - 1] > 3 && car_hour[i - 1] < 24)
		{
			charges[i - 1] = 2 + (car_hour[i - 1] - 3) * (0.5);
			cout << "  " << i << setw(15) << setfill(' ') << car_hour[i - 1] << setw(15) << setfill(' ') << charges[i - 1] << endl;
		}
		else if (car_hour[i - 1] == 24)
		{
			charges[i - 1] = 10;
			cout << "  " << i << setw(15) << setfill(' ') << car_hour[i - 1] << setw(15) << setfill(' ') << charges[i - 1] << endl;
		}
		else if (car_hour[i - 1] > 24)
		{
			charges[i - 1] = 10 + (car_hour[i - 1] - 24) * (0.5);
			cout << "  " << i << setw(15) << setfill(' ') << car_hour[i - 1] << setw(15) << setfill(' ') << charges[i - 1] << endl;
		}
	}
}
void interface2()
{
	for (int i = 1; i < 4; i++)
	{
		total_hour = total_hour + car_hour[i - 1];
		total_charges = total_charges + charges[i - 1];
	}
	cout << "Total " << setw(12) << setfill(' ') << total_hour << setw(15) << setfill(' ') << total_charges << endl;
}
int main()
{
	in();
	interface1();
	calculate();
	interface2();

	return 0;
}