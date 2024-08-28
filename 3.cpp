//write a function that takes an array of integers and its size and finds the maximum value
//in the array.
#include<iostream>
#include<climits>
using namespace std;
int maxArray(int arr[],int n){
    int maxNo=0;
for (int i = 0; i < n; i++)
{
    if (arr[i]>maxNo)
    {
        maxNo=arr[i];
    }
    
}
return maxNo;
}
int main(){
    int numbers[]={23,45};
int total=maxArray(numbers,2);
cout<<"maxNo is "<<total<<endl;
return 0;
}

