#include<iostream>
using namespace std;
int evensum(int arr[],int size){
   int evensum=0;
for(int i=0;i<size;i++){
evensum+=arr[i];
}
return evensum;
}
int oddsum(int arr[],int size){
    int oddsum=0;
    for (int i = 0; i < size; i++)
    {
        oddsum+=arr[i];
    }
    return oddsum;
}
int main(){
int sumnumbers[]={2,4,6,8,10};
int total=evensum(sumnumbers, 5);
cout<<"the sum of even elements is"<<total<<endl;
int oddnumbers[]={1,3,5,7};
int result=oddsum(oddnumbers,4);
cout<<"the sum of odd elements is"<<result<<endl;


return 0;
}