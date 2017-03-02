#include<stdio.h>
#include<iostream>
#include<cstdlib> 

void populate_array(int arr[],int len){
for (int j =0; j<len; j++){
arr[j] = rand() %100;
}
}

