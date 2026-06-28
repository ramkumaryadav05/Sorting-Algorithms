#include<iostream>
using namespace std;

int main(){
    int arr[]={6,3,0,8,2,7,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }
    cout<<"sort array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}