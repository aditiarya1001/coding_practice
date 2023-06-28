#include<bits/stdc++.h>
# define    fast           ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main()
{
    string s;
    cin>>s;

    int c=0;
   
    for(int i=0;i<s.length();i++)
    {
        string s1= s.substr(i);

        int z= s1.length();

        for(int j=0 ; j<z ; j++)
        {
            if(s[i]==s[j])
            {
                c++;
            }
            else{
            continue;
            }
        }
    }
    cout<<c;
    return 0;
}

