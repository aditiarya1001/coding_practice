#include<bits/stdc++.h>
# define    fast           ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
        int n1= nums.size();
        vector<int> v;
        int i=0;
        int j= (n1+1)/2;

        while((i<= n1/2) && (j<n1)){
            v.push_back(nums[i]);
            v.push_back(nums[j]);
            i++;
            j++;
        }
        return v;
    }
int main()
{
    int n, k;
    cin>>n;
     
     vector<int> nums(n);
     for(auto &i : nums){
        cin>>i;
     }
    cin>>k;
    vector<int> shuffled = shuffle(nums, k);

    // Output the shuffled vector
    for (int i : shuffled) {
        cout << i << " ";
    }
    cout << endl;
}