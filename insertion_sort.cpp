#include<stdio.h>
#include"populate_array.h"

using namespace std; 

void insertion_sort(int* , int ); 

int main()
{
	int x[30],len=30;
	populate_array(x,len);
	insertion_sort(x,len);

for (int i=0; i<len;i++)
{
cout << x[i]<<"\t"; 
}
cout<<endl; 
return 0; 
}

void insertion_sort(int a[], int n){
for(int i = 1; i<n;i++){
	int key = a[i];  // select first unsorted element 
	int j = i-1; 
	while (j>=0 && a[j]>key){   // if element greater than key move the element forward 
		a[j+1] = a[j];  
		j = j-1;
		}
		a[j+1] = key; // insert key in the right place 
}
}

