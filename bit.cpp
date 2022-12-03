#include<iostream>
using namespace std;

void bitstuff(int arr[], int size)
{
    int brr[30];  //stores the stuffed array

    int i=0,j=0,k; //variables to travserse the array
    int count = 1; //stores the count of consecutive ones

    while(i<size)  //loop from 0 to size 
    {
        if(arr[i]==1)
        {
            //insert into stuffed array
            brr[j]=arr[i];

            for(k=i+1;k<size && arr[k]==1 && count<5; k++)
            {
                j++;
                brr[j]=arr[k];
                count ++;
                
                // if 5 consecutive set bits are found thn insert 0
                if(count == 5)
                {
                    j++;
                    brr[j]=0;
                }

                i=k;
            }
        }

        else{
            brr[j]= arr[i];
        }

        i++;
        j++;
    }
    
    cout<<"The stuffed array is: "<<endl;
    for (i = 0; i < j; i++)
        cout << brr[i]<<" ";
}

int main()
{
    int size, arr[size];
    cout<<"Enter the size of unstuffed array: "<<endl;
    cin>>size;
    
    cout<<"Enter 0's or 1's in the array: "<<endl;
    for(int i=0; i<size;i++)
    {
        cin>>arr[i];
    }

    bitstuff(arr,size);

    return 0;
}