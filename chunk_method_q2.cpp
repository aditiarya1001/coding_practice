/*problem 339 a: helpful maths*/
#include<bits/stdc++.h>
# define    fast           ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main()
{
     string s; cin >> s;
    int one = 0, two = 0, three = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') one++;
        else if (s[i] == '2') two++;
        else if (s[i] == '3') three++;
        else continue;//+
    }
    int copyone = one, copytwo = two, copythree = three;
    while (one) {
        cout << '1';
        if (one != 1) cout << '+';//this is not a last one then print +
        one--;
    }
 
    if (copyone != 0 && copytwo != 0) cout << '+';
 
    while (two) {
        cout << '2';
        if (two != 1) cout << '+';
        two--;
    }
 
    if ((copyone != 0 || copytwo != 0) && copythree != 0) cout << '+';
 
    while (three) {
        cout << '3';
        if (three != 1) cout << '+';
        three--;
    }
 
    return 0;
}