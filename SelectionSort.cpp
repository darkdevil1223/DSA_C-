#include<iostream>
using namespace std;

void SelectionSort(int a[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[j]<a[i]){
                int temp = a[j];
                a[j]= a[i];
                a[i] = temp;

            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    
    
 

}



int main (){
    int n;
    cout<<"size of array:";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the array:";
        cin>>a[i];
    }

    SelectionSort(a,n);

}