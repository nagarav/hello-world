#include<stdio.h>
#include<iostream>
using namespace std;

bool PowerOf(int x, int n);

int main() 
{
	bool result;
	result = PowerOf(12,3);
	cout << result <<endl;
	result = PowerOf(32,2);
	cout << result <<endl;
	result = PowerOf(81,3);
	cout << result <<endl;
	result = PowerOf(100,5);
	cout << result <<endl;
return 0; 
}

bool PowerOf( int x, int n) 
{
	if ( x <= 0) return false; 
	else {
		while (x != 1) {
			if (x%n != 0) return false;
			else x = x/n;
		                }
	         return true;
	      }
}

 
