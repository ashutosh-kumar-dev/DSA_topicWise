#include <iostream>

using namespace std;

int main(){

    int n=5;
    int arr[n]={1,2,3,4,5};


    int temp;
    for(int i=0;i<n;i++){

        if(i<((n-1)-i)){ // starting and ending of array
            temp=arr[i];
            arr[i]=arr[(n-1)-i];
            arr[(n-1)-i]=temp;

        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<ends;
    }

}
