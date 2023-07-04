#include<bits/stdc++.h>
# define    fast           ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

vector<int> segg_0_1(vector<int> &v)
{
    int n= v.size();
    int low=0, mid=0;
    while(mid<n)
    {
        if(v[mid]==0)
        {
            swap(v[low],v[mid]);
            low++;
            mid++;
        }
        else
        {
            mid++;
        }
    }
    return v;
}
vector<int> seggregate(vector<int> &v)
{
    int n= v.size();
    int i=0;
    int low=0, high=n-1, mid=0;
    while(mid<=high){
        if(v[mid]==0)
        {
            swap(v[mid],v[low]);
            low++;
            mid++;
        }
        else if(v[mid]==1)
        {
            mid++;
        }
        else{
            swap(v[mid],v[high]);
            high--;
        }
    }
    return v;
}


// int do_the_partition(vector<int> v,int ele){
//     int start = 0, end = v.size() - 1;
//     int i = start, p_index = start;
//     while (i <= end) {
//         //we are more interested in the partioning the left part
//         if (v[i] < ele) {
//             swap(v[i], v[p_index]);
//             p_index++;
//         }
//         i++;
//     }
//     cout << "After Partioning for ele-> " << ele << " " << endl;
//     for (auto i : v) cout << i << " "; cout << endl;
//     // this is going for ditinct ele in vector or multiple ele in vector
//     return p_index;// original index after sorting the numbers 
// }

int main()
{
    
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
    cin >> v[i];
    
    // // int u; cin >> u;
    // // int count = 1;
    // // while (u--) {
    // //  int ind; cin >> ind;
    // //  int ele = v[ind];
    // //  int ans = do_the_partition(v, ele);
    // //  cout << "User-> " << count << " ";
    // //  cout << ans << endl << endl;
    // //  count++;
    // // } 
    //     return 0;
    // }   

    //seggregate 0s 1s and 2s
    //input:  0 1 1 0 1 2 1 2 0 0 0
    //output: 0 0 0 0 0 1 1 1 1 2 2
    //or
    ////seggregate 0s and 1s

    vector<int> s(n);
    // s= seggregate(v);
    s = segg_0_1(v);
    for(auto i : s)
    {   
    cout<<i<<" ";
    }
    return 0;
}

