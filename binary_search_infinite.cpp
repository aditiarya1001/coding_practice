#include<bits/stdc++.h>
# define    fast           ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int binary_search(vector<int> v, int k, int l, int h){

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
    vector<int> v;
    int element;
     cout << "Enter the elements of the sorted array (enter -1 to stop): ";
    while (true)
    {
        cin >> element;
        if (element == -1)
            break;
        v.push_back(element);
    }

    int k;
    cout<<"element's position that is to be find";
    cin>>k;

    int low=0;
    int high=1;

    while(v[high]<k)
    {
        low=high;
        high *=2;
    }
    //a case where let us suppose key is kept at last position 
    //so here high would go out of bound that is why this is the edge case
    int n= v.size();
    if(k<=v[n-1])
    {
        high=n-1;
    }

    int pos;
    pos= binary_search(v,k,low,high);
    cout<<pos;

    return 0;
}