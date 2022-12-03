#include <iostream>
using namespace std;

int main()
{
    int size;
    int arr[100];
    int condition = -1;
    int value;
    cout<<"Enter the size of the array : ";
    cin>>size;
    for (int  i = 0; i < size; i++)
    {
        cout<<"Enter the "<<i+1<<" element of the array : ";
        cin>>arr[i];  
    }
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Enter the value of the element whose index you want to find "<<endl;
    cin>>value;
    for (int  k  = 0; k  < size; k ++)
    {
        if (arr[k]== value)
        {
            cout<<"The index of element "<<value<<" is "<<k;
            condition = 0;
        }
        
    }
    if (condition==-1)
    {
        cout<<" Not valid ";
    }    
}