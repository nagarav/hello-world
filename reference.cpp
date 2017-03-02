#include <stdio.h>
#include <iostream>
using namespace std;

int func1(int &a)
{
cout << endl << "in func1 a = " << a <<endl << "&a = " << &a << endl;
return *&a;
}

int func2(int* a)
{
cout << endl << "in func2 a =" << a << endl << "*a = "<< *a << endl; 
return *a;
} 


int main () 
{ 
int a = 10, b=20; 
int c,d; 
cout << "a = " << a << endl<<  "&a = " << &a <<endl<< "*&a = " << *&a <<endl<< "&*&a = " << &*&a << endl<< "*&*&a + 10  = " << *&*&a+10 <<endl;
c = func1(a);
cout<<"c = "<<c <<endl; 
d = func2(&a);
cout<<"d = "<<d <<endl; 
}


