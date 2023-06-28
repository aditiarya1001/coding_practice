/*problem : 266a: stones on the table*/

#include<bits/stdc++.h>
# define    fast           ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main()
{
    int a=0,n;
    cin>>n;
    char s[n];
    cin>>s;
    for(int i=1;i<n;i++)
    {
        if(s[i-1]==s[i])
        {
            a++;
        }
    }
    cout<<a;
}
