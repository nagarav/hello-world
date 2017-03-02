#include <stdio.h>
#include <iostream>
using namespace std;

void swap(int*a,int*b)
{
int temp = *a;
*a =*b;
*b = temp;
}

void swap(int &a, int &b) 
{
int temp =a;
a = b;
b =temp; 
}


int main ()
{
int a = 10, b=20;
//int* ap,bp; // throws error for bp as bp will just be declared as int and not int*
int *ap,*bp; // works fine. 
//int* ap;
//int* bp;
ap = &a;
bp = &b;
cout << "a = "<<a<<endl;
cout << "ap = " << ap<<endl<<"*ap = "<<*ap<<endl; 
cout << "b = "<<b<<endl;
cout << "bp = " << bp<<endl<<"*bp = "<<*bp<<endl; 
swap (ap,bp); // swap by pointers 
cout<<"*************After First Swap******************"<<endl;
cout << "a = "<<a<<endl;
cout << "ap = " << ap<<endl<<"*ap = "<<*ap<<endl; 
cout << "b = "<<b<<endl;
cout << "bp = " << bp<<endl<<"*bp = "<<*bp<<endl;
swap (a,b); // swap by reference 
cout<<"*************After Second Swap******************"<<endl;
cout << "a = "<<a<<endl;
cout << "ap = " << ap<<endl<<"*ap = "<<*ap<<endl; 
cout << "b = "<<b<<endl;
cout << "bp = " << bp<<endl<<"*bp = "<<*bp<<endl;
} 
