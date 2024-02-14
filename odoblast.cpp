#include<bits/stdc++.h>

using namespace std;

int main()
{
    int no,dist;
    unordered_map<int,pair<float,float>>red;
    red[1]={3.4,4.2};
    red[2]={0.31,0.39};
    red[3]={0.4,0.5};
    red[4]={0.25,0.31};
    cout<<"Enter the pollutant no"<<endl;
    cin>>no;
    cout<<"Enter the distance travelled"<<endl;
    cin>>dist;
    if(dist<50000)
    {
        cout<<"The value shall be:"<<red[no].first<<endl;
    }
    else
    {
        cout<<"The value shall be:"<<red[no].second<<endl;

    }

}
