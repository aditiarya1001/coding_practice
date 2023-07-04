#include<bits/stdc++.h>
# define    fast           ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

class hero{
    private:
    int health;

    public:
    char level;

    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health= h;
    }
    void setlevel(char l)
    {
        level=l;
    }
};

int main()
{
    hero h1;
    h1.sethealth(30);
    cout<<"ramesh's health is:"<<h1.gethealth();
}
