#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,var;
    cout<<"Enter the size of the arrays to be swapped"<<endl;
    cin>>n;
    vector<int>a1,a2;
    cout<<"Enter the elements in first array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the elements\n"<<endl;
        cin>>var;
        a1.emplace_back(var);
    }
    for(auto it= a1.begin();it!=a1.end();it++)
    {
        cout<<*(it)<<"\t";
    }
    cout<<"Enter the elements in the second array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the elements\n"<<endl;
        cin>>var;
        a2.emplace_back(var);
    }
    for(auto it= a2.begin();it!=a2.end();it++)
    {
        cout<<*(it)<<"\t";
    }
    a2.swap(a1);
    cout<<"After swapping first array the values are"<<endl;
    for(auto it= a1.begin();it!=a1.end();it++)
    {
        cout<<*(it)<<"\t";
    }
    cout<<"After swapping second  array the values are"<<endl;

    for(auto it= a2.begin();it!=a2.end();it++)
    {
        cout<<*(it)<<"\t";
    }

}
