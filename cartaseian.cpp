#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,y;
    cout<<"Enter the number of co ordinates you want to insert"<<endl;
    cin>>n;
    pair<int,int>arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the x and y coordinate"<<endl;
        cin>>x>>y;
        arr[i]={x,y};
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i].first>0&&arr[i].second>0)
        {
            cout<<"The given cordinates"<<arr[i].first<<","<<arr[i].second<<"lie in first cartesian plane"<<endl;
        }
        else
         if(arr[i].first<0&&arr[i].second>0)
        {
            cout<<"The given cordinates"<<arr[i].first<<","<<arr[i].second<<"lie in second cartesian plane"<<endl;
        }
        else
         if(arr[i].first<0&&arr[i].second<0)
        {
            cout<<"The given cordinates"<<arr[i].first<<","<<arr[i].second<<"lie in third cartesian plane"<<endl;
        }
        else
         if(arr[i].first>0&&arr[i].second<0)

           {
            cout<<"The given cordinates"<<arr[i].first<<","<<arr[i].second<<"lie in forth cartesian plane"<<endl;
        }
        else
        {
            cout<<"The cordinates are at the origin"<<endl;
        }
    }
    return 0;
}
