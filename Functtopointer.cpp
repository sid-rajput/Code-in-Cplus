// Functtopointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void swap(int *a , int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}
int main() {
	int a, b;
	cout << "Before swapping" << endl;
	cin >> a >> b;
	cout << "a=: \n" << a << "b = \n" << b;
	swap(&a, &b);
	cout << "after swapping" << endl;
	cout << "a=: \n" << a <<" b = \n" << b;
	return 0;
 }
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
