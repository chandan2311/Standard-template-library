
#include<bits/stdc++.h>

using namespace std;

int main()
{
list<int>chandan;
int n,a;
cout<<"Enter the size of the vector"<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
    cout<<"Enter the variable"<<endl;
    cin>>a;
    chandan.emplace_front(a);
}
for(list<int>::iterator it=chandan.begin();it!=chandan.end();it++)
{
    cout<<*(it)<<"\t"<<endl;
}
//for(vector<int>::iterator it =chandan.rend();it!=chandan.begin();it--)
//{
  // cout<<*(it)<<"\t"<<endl;
//}
//chandan.erase(chandan.begin()+2);
//chandan.insert(chandan.begin()+2,300);
for(list<int>::iterator it=chandan.begin();it!=chandan.end();it++)
{
    cout<<*(it)<<"\t"<<endl;
}
}


