#include <stdio.h>
#include <iostream>
using namespace std;


int fibo(int n)
{
int temp;
if (n<=1){
return n;
}
else if (n>1){
temp =(fibo(n-1)+fibo(n-2));
return temp; 
}
}

int fibo_dyn(int n)
{
int i;
int f[n+1];
f[0] = 0;
f[1] = 1;
for (i=2;i<n+1;i++){
f[i] =f[i-1]+f[i-2];
}
return f[n];
}

int fibo_optimal(int n)
{
int a = 0,b=1;
int c,i;
for(i =1;i<n;i++){
c=a+b;
a=b;
b=c;
}
return c;
}

int main()
{
int n =10;
cout<<"result_normal fibo("<<n<<")= "<<fibo(n)<<endl;
cout <<"result_array_dyn_programming fibo("<<n<<")= " << fibo_dyn(n) << endl;
cout <<"result_optimal fibo("<<n<<")= " << fibo_optimal(n) << endl;
return 0;
}

