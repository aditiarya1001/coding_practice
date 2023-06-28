#include<bits/stdc++.h>
# define    fast           ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main()
{
    string s = "Abcd1234efgh";

    int ans=0;

    for(int i = 0; i<= s.length()-1;i++)
    {
        if(s[i]>='a' && s[i]<='z'){
        ans+= (s[i]-'a'+1); }
        
        else if(s[i]>='A' && s[i]<='Z'){
        ans+= (s[i]-'A'+1); }
        
        else{
        ans+= (s[i]-'0'); }

    cout<<ans<<" ";
    cout<<endl;
    int asciiValue = int(s[i]);
        cout << asciiValue << " ";
    }

    return 0;
}