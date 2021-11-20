#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];

        }
        cout<<"Maximum number is"<<max<<endl;
        return 0;
    }
}