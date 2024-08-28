//write a function that takes an array of integers and its size and returns the product of
//all element in the array.
#include<iostream>
#include<climits>
using namespace std;
int productArray(int arr[],int size){
   int pro=1;
for(int i=0;i<size;i++){
pro*=arr[i];
}
return pro;
}
int main(){
int numbers[3]={3,5,6};
int total=productArray(numbers, 3);
cout<<"the product is"<<total<<endl;
return 0;
}