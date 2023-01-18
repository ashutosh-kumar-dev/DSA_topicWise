#include<iostream>
using namespace std;

int main(){

    int arr[5]={65,5,2,4,3};

    int maxi=arr[0]; //we can take any value for max || min.
    int mini=arr[0];

    for(int i=0;i<5;i++){

        if(maxi<=arr[i]){
            maxi=arr[i];
        }
        if(mini>=arr[i]){
            mini=arr[i];
        }
    }
    cout<<"max : "<<maxi<<endl<<"mini : "<<mini;




}
