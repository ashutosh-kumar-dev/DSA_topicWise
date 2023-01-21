#include<iostream>
using namespace std;

//we assume that array is sorted and rotated form some pivot axis.
//12345678 ---->  pivot is 4th index ....rotated ---->>56781234
int main(){

    int arr[8]= {5,6,7,8,1,2,3,4};
    int siz= sizeof(arr)/sizeof(int);
    int elem=7;


    int high=siz-1;
    int low=0;
    int mid;

    while(low<=high){

        mid=(high+low)/2;

        if(arr[mid]==elem) {
                cout<<mid;
                break;
                }

        else if(arr[low]<=arr[mid]){

            if(arr[low]<=elem  && elem<arr[mid]){
                high = mid-1;
            }
            else low= mid+1;

        }
        else {
            if(arr[mid]<elem && elem<=arr[high]){
                low=mid+1;
            }
            else high= mid-1;
        }



    }




}
