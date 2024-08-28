//write a function that takes an integer array and its size as arguments and returns the sum 
//of all elements in the array.
#include<iostream>
using namespace std;
int sumArray(int arr[],int size){
   int sum=0;
for(int i=0;i<size;i++){
sum+=arr[i];
}
return sum;
}
int main(){
int numbers[3]={1,2,3};
int total=sumArray(numbers, 3);
cout<<"the sum is"<<total<<endl;

return 0;
}