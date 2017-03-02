#include <stdio.h>
#include <iostream>
using namespace std 

int main()
{
int a[10] = {1,2,34,5,1,3,5,0,1,3,2};

for(i=0;i<10;i++){
cout << a[i] <<endl; 
}

delete_duplicate(a[]);


for(i=0;i<10;i++){
cout << a[i] <<"  "; 
}
return 0; 
x
}

void delete_duplicate(int * a)
{
for (int i =0; i<11;i++){
	int flag =0; 
	for(j=0;j<11;j++){
	if((a[i] == a[j]) && (i!=j)){
		flag = 1;
		}
	}
if (flag == 1)
{
cout << a[i] <<endl;
}
}
