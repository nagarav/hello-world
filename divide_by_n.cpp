#include <stdio.h>
#include <iostream>
using namespace std;

int is_pow(int , int);

int main ()
{
cout << "12 is a power of 3"; if(is_pow(3,12))cout<<" TRUE"<<endl;else cout<<" FALSE"<<endl;
cout << "27 is a power of 9"; if(is_pow(9,27))cout<<" TRUE"<<endl;else cout<<" FALSE"<<endl;
cout << "16 is a power of 2"; if(is_pow(2,16))cout<<" TRUE"<<endl;else cout<<" FALSE"<<endl;
cout << "81 is a power of 9"; if(is_pow(9,81))cout<<" TRUE"<<endl;else cout<<" FALSE"<<endl;
cout << "256 is a power of 16"; if(is_pow(16,256))cout<<" TRUE"<<endl;else cout<<" FALSE"<<endl;


}

int is_pow(int n, int in){
if (n == 0 || in == 0) return 0;
while (in != n){
if(in % n != 0) return 0;
else in =in/n; 
}
return 1;
}

