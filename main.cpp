//Libraries
#include <iostream>

//Namespaces
using std::cout;
using std::cin;
using std::endl;

//Function Prototypes
void calculateCost();
void admin();
void calculator();

//Main Function
int main()
{
	cout << "Type in 's' to sell a product, 'a' for admin rights, 'c' for a calculator and 'e' to exit the program: " << endl;
	
	while (true)
	{
		char command;
		cout << "> ";
		cin >> command;
		
		if (command == 's')
		{
			calculateCost();
		}
		else if (command == 'a')
		{
			admin();
		}
		else if (command == 'c')
		{
			calculator();
		}
		else if (command == 'e')
		{
			cout << "Thank you for using this program." << endl;
			break;
		}
		else
		{
			cout << "\aSorry, the command you gave was invalid." << endl;
		}
	}
	return 0;
};

//Functions
void calculateCost()
{
	unsigned short numberOfElements;
	float taxes;
	cout << "Tax amount: %";
	cin >> taxes;
	cout << "Number of items: ";
	cin >> numberOfElements;
	double costs[numberOfElements] = {};
	
	for (int i = 0; i < numberOfElements; i++)
	{
		float cost;
		float finalCost;
		cout << "Cost of item: Rs. ";
		cin >> cost;
		finalCost = cost + ((taxes / 100) * cost);
		cout << "Final cost: " << finalCost << endl;
		costs[i] = finalCost;
	}
	
	long double totalCost = 0;
	for (int i = 0; i < numberOfElements; i++)
	{
		totalCost += costs[i];
	}
	
	cout << "\aThe total cost is Rs. " << totalCost << "." << endl;
}

void admin()
{
	int adminCode;
	cout << "Enter the admin code: ______ \b\b\b\b\b\b\b";
	cin >> adminCode;
	if (adminCode == 135790)
	{
		float overrideCostf;
		cout << "\aYou are now authorized to override the system. What would you like the cost to be? Rs. ";
		cin >> overrideCostf;
		cout << "The cost of the product is Rs. " << overrideCostf << "." << endl;
	}
	else
	{
		cout << "Sorry, the code you gave was incorrect." << endl;
	}
}

void calculator()
{
	char calculatorOperator;
	float firstDigitf;
	float secondDigitf;
	cout << "You have now entered the calculator." << endl;
	cout << "For the operator, please enter '+' for addition, '-' for subtraction, '*' or 'x' for multiplication, and '/' for division." << endl;
	cout << "Operator: ";
	cin >> calculatorOperator;
	
	cout << "First Digit: ";
	cin >> firstDigitf;
	cout << "Second Digit: ";
	cin >> secondDigitf;
	
	if (calculatorOperator == '+')
	{
		double result = firstDigitf + secondDigitf;
		cout << "Result: " << result << endl;
	}
	else if (calculatorOperator == '-')
	{
		double result = firstDigitf - secondDigitf;
		cout << "Result: " << result << endl;
	}
	else if (calculatorOperator == '*' || calculatorOperator == 'x')
	{
		double result = firstDigitf * secondDigitf;
		cout << "Result: " << result << endl;
	}
	else if (calculatorOperator == '/')
	{
		double result = firstDigitf / secondDigitf;
		cout << "Result: " << result << endl;
	}
	else
	{
		cout << "Sorry, the operator you entered was invalid." << endl;
	}
};