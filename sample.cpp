#include<bits/stdc++.h>
# define    fast           ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

int main(){
    string num1="123";
    string num2= "45";
    int n1 = num1.size();
    int n2 = num2.size();

    // Create a result string with initial value of 0
    vector<string> result(n1+n2, '0');
    int sizeee=result.size();
    cout<<sizeee;
    cout<<result;
    return 0;
}