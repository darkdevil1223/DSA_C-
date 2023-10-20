#include<iostream>
using namespace std;

void linearSearch(int a[],int n,int s){
    int i = 0;

    while (i<=n)
    {
         if (a[i]==s)
        {
            cout<<i;
            break;
        }
        else{
            i++;
        }
        
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
    cout<<"enter number to be search";
    cin>>s;
    linearSearch(a,n,s);
}