#include <stdio.h>
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
int temp;
temp = a;
a = b;
b =temp;
}   


int main () 
{ 
int a = 10, b=20;
cout << "a = " << a <<endl<< "b = " << b<<endl;
swap(a,b);
cout << "a = " << a <<endl<< "b = " << b<<endl;
}


