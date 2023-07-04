#include<bits/stdc++.h>
# define    fast           ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

bool student_comparision(pair<string,pair<int, int>> &x, pair<string,pair<int, int>> &y)
{
    string name1 = x.first;
    int marks1= x.second.first,age1=x.second.second;
    string name2= y.first;    
    int marks2= y.second.first,age2= y.second.second;

    if(marks1 != marks2)
    {
        return (marks1>marks2);
    }
    else if(age1 != age2)
    {
        return(age1<age2);
    }
    else
    {
        return (name1<name2);
    }       
}
int main()
{
    int n;
    cin>>n;
    vector<pair<string,pair<int, int>>> v(n);

    for(int i=0; i<n ; i++)
    {
        int marks,age;
        string name;
        cin>>name>>marks>>age;

        v[i].first= name;
        v[i].second.first= marks;
        v[i].second.second= age;
    }
    //applying comparator function such that we want to first compare marks (m1>m2)
    //if marks are same than comparision is between ages (age1<age2)
    //if age same than according to the name (lexographically which comes earlier)

    sort(v.begin(),v.end(),student_comparision);
    cout<<"name"<<"  "<<"marks"<<"  "<<"age"<<endl;
    for(auto &i : v)
    {
        cout<<i.first<<"   "<<i.second.first<<"   "<<i.second.second<<endl;
    }

    return 0;
}