#include <stdio.h>
#include <iostream>
using namespace std;

int fact(int n)
{
if(n<=0){cout<<"error input"; return 0;}
else if(n==1) {return 1;}
else { return n*fact(n-1);}
}
int main()
{
int n = 5;
cout << "factorial of "<< n <<" = " << fact(n) <<endl;
return 0;
}
