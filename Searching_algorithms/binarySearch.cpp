#include<iostream>
using namespace std;

void binarySearch(int a[],int n, int s){
int f=0;
int l=n;
while (f<=l)
{
    int mid= f+l/2;
    
    if (a[mid]==s)
    {
        cout<<mid;
        break;
    }
    else if (a[mid]>s)
    {
        l=mid-1;

    }
    else{
        f=mid+1;
    }
    cout<<"enter valid number";
    
    
}

}


int main(){
    int n,s;
    cout<<"size of array:";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the array:";
        cin>>a[i];
    }
    cout<<"enter number to be search: ";
    cin>>s;
    binarySearch(a,n,s);
}