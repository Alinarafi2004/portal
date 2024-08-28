//write a function that takes an integer array and its size and returns the smallest
//element in the array.
#include<iostream>
#include<climits>
using namespace std;
int smaEle(int arr[],int size){
    int smaEle=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]=smaEle)
        {
            smaEle<arr[i];
        }
        
    }
    return smaEle;

}
int main(){
    int numbers[]={0,2,3,4};
    int total=smaEle(numbers,4);
    cout<<"the smallest element is "<<total<<endl;
    return 0;
}