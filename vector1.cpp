#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

void print_vector(vector<int> &v)
{
	std::vector<int>::iterator i;

for (i = v.begin(); i != v.end();i++)
cout << *i << "\t";
cout << endl;
}
 

int main() 
{
// this program shows the different methods of initilizing a vector 
// Using push_back(element) 
// grows dynamically 

// 
	vector<int> first; // empty vector of ints
	cout << "first vector of size " << first.size() << " is "; 
	print_vector(first);
	vector<int> second(4,100); // vector of size 4 with values 100 vector(size,elements)
	cout << "second vector of size " << second.size() << " is "; 
	print_vector(second);
	vector<int> third (second.begin(),second.end()); // copying second vector 
	cout << "Third vector is "; 
	print_vector(third);

	vector<int> fourth;
	fourth.push_back(10);
	fourth.push_back(20);
	fourth.push_back(30);
	cout << "Fourth vector is "; 
	print_vector(fourth);

// Using array for initialization 
//  vec(initial pointer, final pointer);

	int arr[] = {11,12,13,14};  // or use static const int arr[] 
	vector<int> fifth(arr, arr+sizeof(arr)/sizeof(arr[0]));
	cout << "Fifth vector of size " << fifth.size() << " is "; 
	print_vector(fifth);

//

	vector<int> sixth = {1,2,3,4,5,6}; // works with c++11 so use 
	cout << "Sixth vector of size "<< sixth.size() << " is "; 
	print_vector(sixth);

//
	 

}
