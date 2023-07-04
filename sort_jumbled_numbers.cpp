#include<bits/stdc++.h>
# define    fast           ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

bool comparision(pair<int,int> &x, pair<int,int> &y)
{
    if(x.first!=y.first)
    {
        return (x.first < y.first);
    }
    
    return(x.second < y.second); //if the mapped numbers become equal than 
                                  //the number that came first would be taken first.
}

vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) 
{
    int n= nums.size();
    vector<int> result;
    vector<pair<int,int>> v;

    for(int i=0;i<nums.size();i++)
    {
        string temp= to_string(nums[i]);
        string ans="";

        for(int j=0;j<temp.size();j++)
        {
            ans = ans + to_string(mapping[temp[j]-'0']);
        }
        int x= stoi(ans); // 669, 007, 07 converted to integer
            //for comparision
            v.push_back({x,i}); //stored changed value and on the index where they are
    }
        sort(v.begin(),v.end(), comparision);
        for(auto &x: v)
        {
            result.push_back(nums[x.second]); //index pe jake actual value present karni h as an output
        }
        return result;
}


int main()
{
    vector<int> nums;
    vector<int> mapping;

     cout << "Enter the size of the array nums: ";
    int n;
    cin >> n;
    cout << "Enter the elements of the array nums: ";
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    cout << "Enter the size of the array mapping: ";
    int m;
    cin >> m;
    cout << "Enter the elements of the mapping array: ";
    for(int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        mapping.push_back(num);
    }

    cout<<"the array nums sorted in non-decreasing order :";
    vector<int> sorted(n);
    sorted = sortJumbled(mapping, nums); 
    for(int i = 0; i<n; i++)
    {
        cout<<sorted[i]<<" ";
    }
    return 0;
}