#include<iostream>
using namespace std;

void bbs(int a[],int n){
    int temp;
    for(int i=0;i<=n;i++){
        for(int j=0;j<n;j++){
            if(a[i]<a[j+1]){
                temp = a[i];
                a[i]=a[j+1];
                a[j+1] = a[i];
            }
        }


    }
    for(int i=0;i<=n;i++){
        cout<<a[i]<<endl;
    }
}

int main (){
    int n;
    cout<<"enter number of array ";
    cin>>n;
    int a[n];
    for(int i=0;i<=n;i++){
        cin>>a[i];
    }
    bbs(a,n);
}