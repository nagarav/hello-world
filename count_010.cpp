#include <stdio.h>
#include <stdlib.h> // for rand 
#include <iostream>
using namespace std;

int main() 
{
        int max_0 = 0;
	int pos;  
	int array[100];
	int i,j,k;
	for (i=0;i<100;i++){
		array[i] = rand()%2;
		}
	
	int count_0a = 0,count_0b = 0;
	for (i=0;i<100;i++){
	if(array[i] == 1){
		j = i-1; 
		while (array[j] == 0 && j>=0 )
			{
			 count_0b++;
			 j--; 
			}
		k = i+1;
		while (array[k] == 0 && k<100)
			{
			 count_0a++;
			 k++; 
			}
		if (count_0b+count_0a > max_0)
			{
				max_0 = count_0a+count_0b;
				pos = i+1; 
			}
			count_0a = 0;
			count_0b = 0;
			}
			} 



for ( i =0; i<100;i++){ cout << array[i] << "  "; }
cout << endl; 
cout << "1 with maximum zeros around it : " << max_0 << " at position " << pos+1 << endl;

}

