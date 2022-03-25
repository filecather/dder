//insert
#include <iostream>
#define MAX 100
using namespace std
void inserts(int a[],int n)
{
    for(j=1;j<n;j++)
    {
        int key=a[j];
        int i=j-1;
        while(i>=0)
        {
            if(key<a[i])
            a[i+1]=a[i],i--;
        }
        a[i+1]=key;
    }
}
void main()
{
    int p[MAX];
    int n;
    try{
    cin>>n;
    if(n>=MAX)
    throw "exception";
    for(i=0;i<n;i++)
    cin>>p[i];
    inserts(p,n);
    cout<<p<<endl
    }catch(const char*msg)
    {
        cerr<<msg<<endl;
    }
}