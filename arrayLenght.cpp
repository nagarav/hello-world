#include<stdio.h>
#include<iostream>
using namespace std;


int main(){	
	int a[10] = {1,2,3,4,4,4,4};
	int len;
	len = sizeof(a)/sizeof(a[0]);
	cout<<len<<endl;
}

