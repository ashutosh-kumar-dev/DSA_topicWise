#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int n=5;
    int arr[n]={3,1,4,5,3};

    sort(arr,arr+n);

    int duplicate;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            duplicate=arr[i+1];
            break;
        }
    }


    int s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    int nat_sum=n*(n+1)/2;

    int missing = nat_sum-s+duplicate;
    cout<<"duplicate : "<<duplicate<<endl<<"missing : "<<missing;

}
