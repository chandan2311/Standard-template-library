#include<bits/stdc++.h>

using namespace std;

int main()
{
    float start,ending,diff;
    int cost;
    pair<float,float>dist;
    cout<<"Enter the beginning odometer reading and the ending"<<endl;
    cin>>start>>ending;
    dist={start,ending};
    diff=dist.second-dist.first;
    cost=18*diff;
    cout<<"The cost to travel is :"<<cost<<endl;


}
