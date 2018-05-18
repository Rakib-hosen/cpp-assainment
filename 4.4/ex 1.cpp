#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *p,n;
    cin>>n;
    p=new int();
    if(!p){
        cout<<"allocation error"<<endl;
        return 1;
    }
    *p=1000;
    cout<<*p;
    delete p;
    return 0;
}
