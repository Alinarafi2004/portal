//write a function that takes an array of integers and its size as arguments and returns the average
//of all elements.
#include<iostream>
#include<climits>
using namespace std;
int averageArray(int arr[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    return sum/n;
}
int main(){
   int numbers[]={2,4};
    int total=averageArray(numbers,2);
    cout<<"the average is"<<total<<endl;
    return 0;
} 