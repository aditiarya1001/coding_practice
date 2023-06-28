#include<bits/stdc++.h>
# define    fast           ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main()
{
    string a;
    string b;

    cout<<"1st number";
    cin>>a;
    cout<<"2nd number";
    cin>>b;
    int n1=a.size()-1;
    int n2=b.size()-1;

    vector<char> result(a.size()+b.size(),'0'); 

    for(int i=n1;i>=0;i--)
    {
        for(int j=n2;j>=0;j--)
        {
            int product =(a[i]-'0')*(b[j]-'0');
            int sum = product + (result[i+j+1]-'0');
            result[i+j+1] = sum%10 + '0';
            result[i+j]+= sum/10 ;
        }
    }

    // Remove leading zeros from the result
    while (result.size() > 1 && result[0] == '0') {
    result.erase(result.begin());}

cout << "Product is: " << string(result.begin(), result.end()) << endl;

return 0;
}
    

