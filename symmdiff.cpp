#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[100],arr2[100],arr3[100],arr4[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int count1=0;
    int r=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(arr1[i]==arr2[j]){
            count1++;
        }
    }
    if(count1==0){
        arr3[r]=arr1[i];
        r++;
    }
    count1=0;}
    int count2=0;
    int s=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(arr2[i]==arr1[j]){
            count2++;
        }
    }
    if(count2==0){
        arr4[s]=arr2[i];
        s++;
    }
    count2=0;}
    for(int u=0;u<r;u++){
        cout<<arr3[u]<<" ";
    }
    cout<<endl;
    for(int q=0;q<s;q++){
        cout<<arr4[q]<<" ";
    }
    cout<<endl;
    int io=0;
    for(int i=r;i<r+s;i++){
        arr3[i]=arr4[io];
        io++;
    }
    sort(arr3,arr3+r+s);
    for(int i=0;i<r+s;i++){
        if(arr3[i]==arr3[i+1]){
            cout<<arr3[i]<<" ";
            i++;
        }
        else{
            cout<<arr3[i]<<" ";
        }
    }
    return 0;
}
