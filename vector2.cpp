#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

void print_vector(vector<int> &v)
{
	// method1 vector<int>::iterator i;
	// method1 for (i = v.begin(); i !=  v.end(); i++)
	// method1 cout<<*i<<" ";
	int size = v.size();
	for (int i = 0; i<size; i++)
	cout << v[i] << "  "; 
	cout<<endl; 
}

void multiply_vector(vector<int> &v, int n)
{
	vector<int>::iterator i;
	for (i = v.begin(); i !=  v.end(); i++)
	 *i  = (*i)*(n);
}  

int main() 
{

vector<int> first(2,10);
first.push_back(11);
first.push_back(12);
first.push_back(13);
cout << "Before multiply " << endl;
print_vector(first);
vector<int> second;

multiply_vector(first,2);
cout<<"After Multiply" << endl;
print_vector(first);

}

