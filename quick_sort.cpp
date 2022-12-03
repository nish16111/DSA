#include <iostream>
using namespace std;

// void swap(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
// }

int partition(int array[],int s,int e){
    int temp;

    
    int pIndex=s;
    int pivot=array[e];
    for(int i=0;i<e;i++){
        if(array[i]<=pivot){
             int temp=array[i];
             array[i]=array[pIndex];
             array[pIndex]=temp;
             pIndex++;
            
        }
            int temp=array[e];
            array[e]=array[pIndex];
            array[pIndex]=temp;
            
        
        // swap(array[e],array[pIndex]);
        
    }
    return pIndex;
}
void quickSort(int array[],int s,int e){
    if(s<e){
        int p=partition(array,s,e);
        quickSort(array,s,(p-1));
        quickSort(array,(p+1),e);
        
    }
}
void print(int array[]){
    for(int i=0;i<5;i++){
        cout<<array[i]<<" ";
    }
}
int main()
{
    int arr[5]={8,4,9,2,3};
    quickSort(arr,0,4);
    print(arr);
    cout<<"Hello";
    return 0;
}