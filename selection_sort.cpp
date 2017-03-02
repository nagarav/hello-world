#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int max = 0;
	int max_index; 
	int min = 32000; 
	int x[] = {23,4,6,2,45,7,11,5,7,77};
	int y[] = {13,24,63,12,5,7,1,52,71,25};
for (int i1=0;i1<10;i1++) {
max = 0; 
	for (int i=i1;i<10;i++)
	{ 
		if (x[i] > max){
		  max = x[i];
		  max_index = i; 
		}
	}

		  x[max_index] = x[i1];
		  x[i1] = max; 
}

for (int j=0;j<10;j++)
	{ 
		if (y[j] < min)
		  min = y[j];
	}

for (int i=0; i<10;i++)
cout << x[i] << endl; 
}
