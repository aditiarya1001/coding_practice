#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;cin>>a>>b;
	
	int carry=0;
	string ans;
	// checking if a string is bigger or b is
		if((a.length()<b.length())||(a.length()==b.length() && a<b)) swap(a,b);

        int i=a.length()-1;
	    int j=b.length()-1;
	while(i>=0 && j>=0)
	{
		
		//converting character to integer
		int tempa=a[i]-48;
		int tempb=b[j]-48;
		int diff=tempa-tempb-carry;
		// if diff is negative, means character of b string is greater than character of a string, so we'll borrow carry from prev element
		if(diff<0)
		{
			diff+=10;
			carry=1;
		}
		else
			carry=0;
		ans.push_back(diff+48);
		i--;
		j--;
	}
	//edge case if one of the strings got exhausted
	while(i>=0)
	{
		int tempa=a[i]-48;
		int diff=tempa-carry;
		if(diff<0)
		{
			diff+=10;
			carry=1;
		}
		else
			carry=0;
		ans.push_back(diff+48);
		i--;
	}
	while(j>=0)
	{
		int tempb=b[j]-48;
		int diff=tempb-carry;
		if(diff<0)
		{
			diff+=10;
			carry=1;
		}
		else
			carry=0;
		ans.push_back(diff+48);
		j--;
	}


	// removing leading zeroes
	while(ans.length()>1 && ans.back()=='0')
		ans.pop_back();

	// reverse the string
	reverse(ans.begin(),ans.end());
	cout<<ans<<" ";
	return 0;
}