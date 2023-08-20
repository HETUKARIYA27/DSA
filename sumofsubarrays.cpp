#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++){
        int t=a[i];
        for(int j=i;j<n;j++){
             if(i==j){
                cout<<a[i]<<" ";
             }
             j++;
             while(j<n && i!=j){
                t=t+a[j];
                cout<<t<<" ";
                j--;
                break;
             }
        }
    }
    return 0;
}