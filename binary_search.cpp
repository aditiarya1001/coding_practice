#include<bits/stdc++.h>
# define    fast           ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int binary_search_finite_array(vector<int> v){
    int k;
    cout<<"enter the element you want to search:";
    cin>>k;
    int n= v.size();
    int l=0;
    int h=n-1;

    while(l<=h)
    {
        int mid = l+(h-l)/2;

        if(v[mid] == k)
        {
            return mid;
        }

        else if(v[mid]<k)
        {
            l=mid+1;
        }

        else
        {
            h=mid-1;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements in sorted order:";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int k;

    k= binary_search_finite_array(v);
    cout<<"position of element searched in finite array:"<<k+1;

    return 0;
}
