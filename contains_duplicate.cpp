#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int > arr={9,8,5,2,0,22,3,6,5,4};

    sort(arr.begin(),arr.end());

    for(int i=0;i<arr.size();i++){
        if(arr.at(i)==arr.at(i+1)) cout<<"contains duplicate"; break;
    }

}

