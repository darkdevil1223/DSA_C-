// this is the code of insersion short
#include<iostream>
using namespace std;


void insert(int a[],int i){
    int temp = a[i];
    for (int  j = i-1; j >=0; j--)
    {
        if (temp<a[j])
        {
            a[i]=a[j];
            i--;
        }
        else {break;}
        
    }
    a[i]= temp;
    

}
void insertionsort(int a[],int n){

for (int i = 1; i < n; i++)
{
    insert(a,i);
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
    insertionsort(a,n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
}