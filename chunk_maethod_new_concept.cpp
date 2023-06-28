#include<bits/stdc++.h>
# define    fast           ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int longest_inc_subarr(vector<int> &v)
{
    int i=0;
    int n= v.size();
    int result = INT_MIN;
    while(i<n)
    {
        int temp=1;
        while((i+1<n) && v[i]<v[i+1])
        {
            temp++;
            i++;
        }
        i++;
        result = max(result,temp);
    }

    return result;
}
int longest_inc_contin_subarr(vector<int> &v)
{
    int i=0;
    int n= v.size();
    int result = INT_MIN;
    while(i<n)
    {
        int temp=1;
        while((i+1<n) && (v[i+1]-v[i])==1)
        {
            temp++;
            i++;
        }
        i++;
        result = max(result,temp);
    }

    return result;
}

int longest_nondec_subarr(vector<int> &v)
{
    int i=0;
    int n= v.size();
    int result= INT_MIN;
    while(i<n)
    {
        int temp=1;
        while((i+1<n) && v[i] <= v[i+1])
        {
            temp++;
            i++;
        }
        result =max(result,temp);
        i++;
    }
    return result;
}

int longest_nondec_contin_subarr(vector<int> &v)
{
    int i=0;
    int n= v.size();
    int result= INT_MIN;
    while(i<n)
    {
        int temp=1;
        while((i+1<n) && v[i+1] - v[i]>=0)
        {
            temp++;
            i++;
        }
        result =max(result,temp);
        i++;
    }
    return result;
}

int longest_dec_subarr(vector<int> &v)
{
    int i=0;
    int n= v.size();
    int result = INT_MIN;
    while(i<n)
    {
        int temp=1;
        while((i+1<n) && v[i]>v[i+1])
        {
            temp++;
            i++;
        }
        i++;
        result = max(result,temp);
    }

    return result;
}
int longest_dec_contin_subarr(vector<int> &v)
{
    int i=0;
    int n= v.size();
    int result = INT_MIN;
    while(i<n)
    {
        int temp=1;
        while((i+1<n) && v[i]-v[i+1]==1)
        {
            temp++;
            i++;
        }
        i++;
        result = max(result,temp);
    }

    return result;
}
int longest_noninc_subarr(vector<int> &v)
{
    int i=0;
    int n= v.size();
    int result = INT_MIN;
    while(i<n)
    {
        int temp=1;
        while((i+1<n) && v[i]>=v[i+1])
        {
            temp++;
            i++;
        }
        i++;
        result = max(result,temp);
    }

    return result;
}
int longest_noninc_contin_subarr(vector<int> &v)
{
    int i=0;
    int n= v.size();
    int result = INT_MIN;
    while(i<n)
    {
        int temp=1;
        while((i+1<n) && (v[i]-v[i+1]<=1))
        {
            temp++;
            i++;
        }
        i++;
        result = max(result,temp);
    }

    return result;
}

int longest_inc_contin_subsequence(vector<int> &nums){
     vector<int> max_vector(nums.size(),0);
        max_vector[0] = 1;
        for(int i=1; i<nums.size(); ++i){
            for(int j=0; j<i; ++j){
                if(nums[j]<nums[i])
                    max_vector[i] = max(max_vector[i],max_vector[j]);
            }
            max_vector[i]++;
        }
        return *max_element(max_vector.begin(),max_vector.end());   
}

int longest_nodec_contin_subsequence(vector<int> &nums){
     vector<int> max_vector(nums.size(),0);
        max_vector[0] = 1;
        for(int i=1; i<nums.size(); ++i){
            for(int j=0; j<i; ++j){
                if(nums[j]<nums[i])
                    max_vector[i] = max(max_vector[i],max_vector[j]);
            }
            max_vector[i]++;
        }
        return *max_element(max_vector.begin(),max_vector.end());   
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

    cout<<"length of longest increasing subarray is:"<<longest_inc_subarr(v)<<endl;
    cout<<"length of longest non-decreasing subarray is:"<<longest_nondec_subarr(v)<<endl;
    cout<<"length of longest decreasing subarray is:"<<longest_dec_subarr(v)<<endl;
    cout<<"length of longest non-increasing subarray is:"<<longest_noninc_subarr(v)<<endl;
    cout<<"length of longest non-increasing contiguoud subarray is:"<<longest_noninc_contin_subarr(v)<<endl;
    cout<<"length of longest increasing contiguous subarray is:"<<longest_inc_contin_subarr(v)<<endl;
    cout<<"length of longest non-decreasing contiguous subarray is:"<<longest_nondec_contin_subarr(v)<<endl;
    cout<<"length of longest decreasing contiguous subarray is:"<<longest_dec_contin_subarr(v)<<endl;
    cout<<"length of longest increasing subsequence:"<<longest_noninc_contin_subsequence(v);
    return 0;
}