#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<a[0]<<" ";
    for(int i=0;i<n;i++){
        if(a[i]>a[i-1] && i!=0){
            cout<<a[i]<<" ";
        }
        else if(a[i-1]>a[i] && i!=0){
            cout<<a[i-1]<<" ";
        }
    }
    return 0;
}