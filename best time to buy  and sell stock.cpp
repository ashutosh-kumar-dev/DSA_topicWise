#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=0;
    int mini=INT_MAX;

    for(int i=0;i<n;i++){

        if(arr[i]<mini){
            mini=arr[i];
        }
        else if((arr[i]-mini)>maxi){
            maxi=(arr[i]-mini);
        }
    }
    cout<<maxi;



}
