// this is a bubble sort code 

#include<iostream>
using namespace std;

void bubblesort(int a[],int n){
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < n-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1]= temp;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    
    
}
int main(){
    int n;
    cout<<"size of array:";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the array:";
        cin>>a[i];
    }
    
    bubblesort(a,n);

    
}