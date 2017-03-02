#include <stdio.h>
#include <iostream>
using namespace std;

int divide(int , int);

int main ()
{
int n = 64 ,d = 3;
int count,result; 

count = divide(n,d);
result = (2 << (count-1));
cout << n << "/" << d << " = " << result << "  " <<  endl;
}


int divide (int n, int d) { 
int count = 0; 
int d_t = d; 	
	if ((n<d)|(d==0)) return 0;
	else {
		while (n >= d) {  
			 d = d << 1;
			 count++;
				}
	       cout << n << "\t" << d << endl;
	       return count;
	     }
}

		
