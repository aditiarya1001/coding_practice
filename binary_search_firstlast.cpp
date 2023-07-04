#include<bits/stdc++.h>
# define    fast           ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

vector<int> first_last_occurence_of_number(vector<int> v,int k)
{
    int n = v.size();
    int st=0;
    int end= n-1;
    int first=-1;
    int last=-1;
    int mid=0;
    if(n==1)
    {
        if(v[0]==k)
        {
            return {0,0};
        }
    }
    while(st<=end)
    {
        mid = st+ (end-st)/2;

        if(v[mid]==k)
        {
        first= mid;
        end= mid-1;
        }

        else if(v[mid]<k)
        {
            st= mid+1;
        }

        else{
            end= mid-1;
        }

    }

//last occurrence
st=0;
end=n-1;
mid=0;
    while(st<=end)
    {
        mid = st+ (end-st)/2;

        if(v[mid]==k)
        {
        last= mid;
        st= mid+1;
        }

        else if(k<v[mid])
            {
                end=mid-1;
            }
            else
            {
                st=mid+1;
            }
     }
    return {first,last};
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);

    for(auto &i : v)
    {
        cin>>i;
    }

    int k;
    cout<<"first and last occurrence of the element that is to be find:";
    cin>>k;
    vector <int> result;
    result =  first_last_occurence_of_number(v,k);
    for(auto &i: result)
    {
        cout<<i<<" ";
    }
    return 0;
}

