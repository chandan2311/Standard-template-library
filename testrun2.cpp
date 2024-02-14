#include<bits/stdc++.h>
using namespace std;

int main()
{
   /*vector<int>p1;
    p1.push_back(1);
    p1.emplace_back(2);
    for(int i=0;i<2;i++)
    {
        cout<<p1[i]<<endl;
    }*/
    int n,a,b;
    vector<pair<int,int>>p1;
    cout<<"Enter the number of pair to insert"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter a and b"<<endl;
        cin>>a>> b;
        p1.emplace_back(a,b);
    }
    for(int i=0;i<n;i++)
    {
        cout<<p1[i].first<<"\t"<<p1[i].second<<endl;


    }
    vector<pair<int,int>>v2(p1);
     for(int i=0;i<n;i++)
    {
        cout<<v2[i].first<<"\t"<<v2[i].second<<endl;


    }

}
