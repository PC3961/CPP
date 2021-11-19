#include<iostream>
using namespace std;
int main(){

int arr[10],temp, pass=0;
cout<<"Input List";
for (int i = 0; i < 10; i++)
{
    cin>>arr[i];
}
for (int n = 0; n < 10; n++)
{
    cout<<arr[n]<<endl;
}
for (int i = 0; i < 10; i++)
{
    cout<<arr[i]<<endl;
}
for (int i = 0; i < 10; i++)
{
    for (int j = i+1; j < 10; j++)
    {
        if (arr[j]<arr[i])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    pass++;
}
cout<<"The sorted list :"<<endl;
for (int i = 0; i < 10; i++)
{
    cout<<arr[i]<<endl;
}
cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;
return 0;
}
