#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,int> p ={23,889};
    cout<<"The value of first a="<<p.first<<"The second value b:"<<p.second<<endl;
    pair<int,pair<int,float>> p1={1,{23,89.67}};
    cout<<"The first pair within is:"<<p1.first<<"The second is "<<p1.second.second<<"\n"<<p1.second.first<<endl;
    pair <int,int> arr[]={{1,2},{2,3},{6,7},{9,0} };
    for(int i=0;i<4;i++)
    {
        cout<<arr[i].first<<"\t"<<arr[i].second<<endl;
    }
    return 0;
}
