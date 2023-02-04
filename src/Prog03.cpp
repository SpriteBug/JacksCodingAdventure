//Program03
//John Braman 02/03/2023
// COSC 1030 Section 11 Spring 2023


#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3, interval = 0, expNum, exp, answer = 0;
	// First Problem
	cout << "Enter a number greater than 0: ";
	cin >> num1;
	int sum = 0;
	for (int i = 1; i <= num1; i++)
	{
		sum = sum + i;
	}
	if (num1 >= 1)
	{
		cout << "The sum of the numbers from 1 to " << num1 << " is " << sum << endl;
	}
	if (num1 < 1)
	{
		cout << "Enter a number greater than or equal to 1 ";
	}
	
	// Second Problem
	cout << "\nEnter two numbers: ";
	cin >> num2 >> num3;
	int saveNum2 = num2;
	if (num2 < num3)
	{
		while (++num2 < num3)
		{
			interval++;
		}
	}
	cout << "The interval between " << saveNum2 << " and " << num3 << " is: " << interval << endl;
	
	// Third problem

	cout << "\nEnter two numbers (the second number cannot be negative): ";
	cin >> expNum >> exp;
	if (exp < 0)
	{
		if (exp == 0)
		{
			answer = 0;
		}
	}
	else if (answer = expNum)
	do
	{
		answer = answer * expNum;
	} 
	while (--exp > 1);
	exp = exp + 1;
	cout << "The product of " << expNum << " ^ " << exp << " is: " << answer << endl;
	return 0;
}

