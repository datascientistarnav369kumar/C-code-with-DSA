//selection sort
#include<iostream>
using namespace std;
//sorting the elment by swaping the element
int selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex])
            minindex=j;
        }
        swap(arr[minindex],arr[i]);
    }
}
// Display the element after swaping the element
int display(int arr[],int n){
    for(int i=0;i<n;i++){
         cout<<arr[i]<<"  ";

    }
   
}
int main(){
    int arr[5]={10,78,96,56,45};
    selectionsort(arr,5);
    display(arr,5);
}