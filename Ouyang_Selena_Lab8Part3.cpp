//Selena Ouyang
//Lab 8 Part 3
//11-4-24
#include<iostream>
using namespace std;
double getSum(double a, double b, double c)
{
    double result;
    result = a + b + c; 
    return result;
}
int main ()
{
    
    double num1, num2, num3; // variable to hold the three numbers
    cout << "Enter three floating point numbers: ";
    cin >> num1 >> num2 >> num3; //reads three numbers
    cout << "The sum is: "
    << getSum(num1, num2, num3) << endl; //gets the sum of all three numbers

    system("PAUSE");
    return 0;
}
/* Part 3
Enter three floating point numbers: 3.8 4.3 3.3
The sum is: 11.4
*/