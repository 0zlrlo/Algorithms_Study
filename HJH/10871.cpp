#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int N,X;
    cin>>N>>X;
    int *arr = new int[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    for(int i=0;i<N;i++){
        if(arr[i]<X){
            cout<<arr[i];
            cout<<" ";
        }
        else
            continue;
    }
           
    return 0;
}