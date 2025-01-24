#include <iostream>
using namespace std;

void fnc(int a[],int s,int k){
    int p=0;
    for (int i = 0; i <= s; i++)
    {
        for (int j = s; j >=0; j--)
        {
            if (a[i]*a[j]<k)
            {
                p++;
                

            }
            
        }
        
    }
    cout<<p;
    
    
}

int main(){
    int s,k;
    cout<<"enter size if arr: ";
    cin>>s;
    int a[s];
    cout<<"enter the value of arr: ";
    for (int i = 0; i < s; i++)
    {
        cin>>a[i];
    }
    
    cout<<"enter the value of k: ";
    cin>>k;
    fnc(a,s,k);

    return 0;
}