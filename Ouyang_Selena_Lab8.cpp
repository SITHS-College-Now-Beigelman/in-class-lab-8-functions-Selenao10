//Selena Ouyang
//Lab 8 
//11-2-24

#include<iostream>
#include<cmath>
using namespace std;

//Part 2
int doubleMultiply(int a, int b)
{
    int product; //variable to hold the product 
    product = a * b * 2; 
    return product;
}
//Part 3
double getSum(double a, double b, double c)
{
    double result;
    result = a + b + c; 
    return result;
}
int main ()
{
    //Part 1
    cout << "Part 1" << endl; //organization
    
    double number; //variable to hold the number
    
    cout << "Enter a floating point number: ";
    cin >> number; //user assigned value for the number
    
    cout << "The square root of " << number << " is " 
    << sqrt(number) << endl; //a) square root of the number
    cout << number << " raised to the 4th power is " 
    << pow(number, 4) << endl; //b) number raised to the 4th power
    cout << "The floor of " << number << " is " 
    << floor(number) << endl << endl; //c) floor of the number
    
    //Part 2
    cout << "Part 2" << endl; //organization
    
    /*The program asks for two integers from the user and 
    multiplies those two numbers together to get the product. 
    Then it multiples the product by two and prints out that value. */
    
    int num1, num2; //variables to store the numbers 
    cout << "Enter two integers: ";
    cin >> num1 >> num2; //User assigned values to the two numbers
    cout << "Twice the product of the number is: "
    << doubleMultiply(num1, num2) << endl << endl; //Finds twice the value of the product
    
    //Part 3
    cout << "Part 3" << endl; //organization
    
    double float1, float2, float3; // variable to hold the three numbers
    cout << "Enter three floating point numbers: ";
    cin >> float1 >> float2 >> float3; //user assigned values to the three numbers
    cout << "The sum is: "
    << getSum(float1, float2, float3) << endl; //gets the sum of all three numbers

    return 0;
}

/*
Part 1
Enter a floating point number: 4.5
The square root of 4.5 is 2.12132
4.5 raised to the 4th power is 410.062
The floor of 4.5 is 4

Part 2
Enter two integers: 4 5
Twice the product of the number is: 40

Part 3
Enter three floating point numbers: 2.1 2.3 3.4
The sum is: 7.8
*/
