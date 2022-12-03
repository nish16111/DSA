#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int size, mid, value, end, start = 0;
    cout<<"Enter the size of the array : ";
    cin>>size;
    for (int  i = 0; i < size; i++)
    {
        cout<<"Enter the "<<i+1<< " element of the array"<<endl;
        cin>>arr[i];
    }
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Enter the value of the elemoent whose index you want to find in the array "<<endl;
    cin>>value;
    end = size;
    while (start<=end)
    {
        mid = (start+end)/2;
        if (arr[mid]==value)
        {
            cout<<"The index of "<<value<<" is "<<mid; 
            break;
        }
        else if (value> arr[mid])
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
    
}