// leet code add 2 numbers
#include<iostream>
using namespace std;

void add(int a[],int t,int n){
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < n-1; j++)
        {
            if (a[i]+a[j]==t){
                cout<<j<<"and"<<i;

            }
            else{
                break;
            }
        }
        
    }
    
}

int main (){
    int a[] = {2,7,11,15};
    int t=13 ,n=4;
    add(a,t,n);

}