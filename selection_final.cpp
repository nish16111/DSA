#include<iostream>
using namespace std;

void show(int arr[100], int size)
{
    for (int  i = 0; i < size; i++)
    {
        cout<<" "<<arr[i];
    }
    
}

void selection(int arr[100], int size)
{
    for (int  i = 0; i < size; i++)
    {
        for (int  j = i+1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[i];
                arr[i]  = temp;
                show(arr, size);
                cout<<endl;
            }
            
        }
        
    }
    
}

int main(){
    int arr[100]; int size;
    cout<<"Enter the size of the array "<<endl;
    cin>>size;
    for (int  i = 0; i < size; i++)
    {
        cout<<"Enter the "<<i+1<<" element of the array "<<endl;
        cin>>arr[i];
    }
    selection(arr, size);
    cout<<"The sorted array is "<<endl;
    show(arr, size);
    
    return 0;
}