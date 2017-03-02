#include<stdio.h> 
#include"populate_array.h"

using namespace std; 

void bubble_sort(int a[], int n); 
int main()
{
	int x[30],len=30;
	populate_array(x,len);
	bubble_sort(x,len);

for (int i=0; i<len;i++)
{
cout << x[i]<<"\t"; 
}
cout<<endl; 
return 0; 
}

void bubble_sort(int a[],int n){

for(int i=0; i<n;i++){
bool swapped = false; 
	for (int j=0; j<n-1;j++){
		if (a[j]<a[j+1]){
			int temp =a[j];
			a[j] =a[j+1];
			a[j+1] =temp; 
			swapped = true; 
				}
}
if (swapped == false) break; 
	}
}
