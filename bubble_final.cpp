#include<iostream>
using namespace std;

     void print(int arr[100], int size)
    {
        for (int  i = 0; i < size; i++)
        {
            cout<<" "<<arr[i];
        }
        
    }

    void bubble (int arr[100], int size)
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = i+1; j < size; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp;
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    print(arr, size);
                    cout<<endl;
                }
                
            }
            
        }
        
    }

int main(){
    int arr[100]; int size;
    cout<<"Enter the size of the array "<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the "<<i+1<<" element of the array "<<endl;
        cin>>arr[i];
    }
    bubble(arr, size);
    cout<<"The sorted array is "<<endl;
    print(arr, size);

    return 0;
}