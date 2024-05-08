//MIN AND MAX IN ARARY
#include<bits/stdc++.h>
using namespace std;

int min(int arr,int size)
{
    int min(int arr[0]);
    for(int i=1;i<size;i++){
        if(a[i]<min){
            min=arr[i];
        }
    }
    return min;
 
}

int max(int arr,int size){
    int max(int arr[0]);
    for(int i=1;i<size;i++){
        if(a[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr[5],i;
    cout<<"enter elements of  the array"<<endl;

    for(i=0;i<10;i++){
        cin>>arr[i];
    }

    cout<<"the max in array"<<max(arr,5)<<endl;
    cout<<"the min in array"<<min(arr,5)<<endl;
   return 0;
}