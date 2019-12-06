//Jordan Cole
//CO SCI_802_26188FA19V
//Chap. 6: Markup
//Program that receives wholesale cost and markup percentage then displays retail price,
//Should have a function name calculateRetail (two parameters, return double),
//Validate user inputs for both entries.

#include <iostream>
#include <iomanip>
using namespace std;

//Function prototype - calculateRetail
double calculateRetail (double, double);

int main()
{
    //Create variables for needed input
    double wholesale, markup;
    
    //Get input (wholsale price) / input validation (no 0 or negative #s)
	do
	{
		cout << "Enter the item's wholesale cost: ";
		cin  >> wholesale;
		
		if (wholesale <= 0)
        cout << "Error: The item's wholesale cost must be greater than 0." << endl;
	
	} while (wholesale <= 0);
	
	//Get input (markup %) / input validation (no 0 or negative #s)
	do
	{
		cout << "Enter the item's markup percentage (e.g. 15.0): ";
		cin  >> markup;
		
		if (markup <= 0)
		cout << "Error: The item's markup percentage must be greater than 0." << endl;	
	
	} while (markup <= 0);
	
	//Set formatting before output
	cout << fixed << showpoint << setprecision(2);
	
	//Show retail price by calling function calculateRetail
	cout << "The retail price is $" << calculateRetail(wholesale, markup) << endl;
	
	system("pause");
	return 0;
}

//Function definition - calculateRetail (calculates retail cost based on input wholesale and markup)
double calculateRetail (double wholesale, double markup)
{
	double retail;
    markup /= 100;
    retail = wholesale * (1 + markup);
	
	return retail;
}
