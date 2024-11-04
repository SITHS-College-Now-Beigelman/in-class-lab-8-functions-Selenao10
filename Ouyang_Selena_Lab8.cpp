//Selena Ouyang
//Lab 8 Part 2
//11-2-24

/*The program asks for two integers from the user and 
    multiplies those two numbers together to get the product. 
    Then it multiples the product by two and prints out that value. */

#include<iostream>
using namespace std;
//Part 1
int doubleMultiply(int a, int b)
{
    int product; //variable to hold the product 
    product = a * b * 2; 
    return product;
}
//Part 2
double getSum(double a, double b, double c)
{
    double result;
    result = a + b + c; 
    return result;
}
int main ()
{
    //Part 2
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2; //Read two numbers
    cout << "Twice the product of the number is: "
    << doubleMultiply(num1, num2) << endl; //Finds twice the value of the product

    //Part 3
    double float1, float2, float3; // variable to hold the three numbers
    cout << "Enter three floating point numbers: ";
    cin >> float1 >> float2 >> float3; //reads three numbers
    cout << "The sum is: "
    << getSum(float1, float2, float3) << endl; //gets the sum of all three numbers
    
    system("PAUSE");
    return 0;
}

/*Part 1

*/
/* Part 2
Enter two integers: 5 6 
Twice the product of the number is: 60
*/

/* Part 3
Enter three floating point numbers: 3.8 4.3 3.3
The sum is: 11.4
*/