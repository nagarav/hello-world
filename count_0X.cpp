#include <stdio.h>
#include <stdlib.h> // for rand 
#include <iostream>
using namespace std;

int main() 
{
        int max_0 = 0;
	int pos;  
	int array[100];
	int i;
	for (i=0;i<100;i++){
		array[i] = rand()%2;
		}
	
	int count_0 = 0,count_1 = 0;
	for (i=0;i<100;i++){
	if(array[i] == 0){
		count_0++;
		if (count_0 > max_0) {
				
				max_0 = count_0; 
				pos = i; 
				     }
		} 
	else {
		count_0 = 0; 	
		count_1++;
		} 
		}
cout << count_0<< "   "  << count_1 << endl;
for ( i =0; i<100;i++){ cout << array[i] << "  "; }
cout << endl; 
cout << "max_0s before a 1: " << max_0 << " at position " << pos+1 << endl;
}

