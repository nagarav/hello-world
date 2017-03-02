#include<stdio.h>
#include<iostream>
using namespace std;

int SecondLargest(int*); // pointer

int main()
{
		int a[10] = {1,9,30,94,55,6,5,7,7,88};
		int result;
		
		result = SecondLargest(&a[0]); // sending an address
		cout<<result<<endl;
}

int SecondLargest(int*a)  // pointer 
{
	int m1,m2;
	m1= a[0];  m2 = a[0];
	for (int i = 1; i<10;i++){
		if (a[i] > m1 && a[i] >m2) {
			m2 = m1;
			m1 = a[i];
					    }
		else if (a[i] > m2 && a[i] < m1) {
			m2 = a[i];
						 }
			}
return m2;
}


	

