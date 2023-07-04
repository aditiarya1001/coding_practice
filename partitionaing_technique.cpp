#include<bits/stdc++.h>
using namespace std;
 
// int partioning(int x, vector<int> &v, int start, int end) {
//  //array,start,end(inclusive),x
//  int p = start, i = start;
//  //left to right iteration
//  while (i <= end) {
//      if (v[i] == x) {
//          swap(v[i], v[p]);
//          p++;
//      }
//      i++;
//  }
//  return p;
//  // rule-2-- all ele fro [0,p-1] (after partioining) is partioned
// }
 
 
int do_the_partition(vector<int> v, int &ele) {
    int start = 0, end = v.size() - 1;
    int i = start, p_index = start;
    while (i <= end) {
        //we are more interested in the partioning the left part
        if (v[i] < ele) {
            swap(v[i], v[p_index]);
            p_index++;
        }
        i++;
    }
    cout << "After Partioning for ele-> " << ele << " " << endl;
    for (auto i : v) cout << i << " "; cout << endl;
    // this is going for ditinct ele in vector or multiple ele in vector
    return p_index;
}
 
 
void sort_an_array_012(vector<int> &v) {
    int n = v.size();
    int low = 0, high = n - 1, i = 0;
    while (i <= high) {
        if (v[i] == 0) {
            swap(v[i], v[low]);
            low++;
        }
        else if (v[i] == 2) {
            swap(v[i], v[high]);
            high--; i--;
        }
        i++;
    }
}
 
int main() {
 
    // int n; cin >> n;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++) cin >> v[i];
 
    // int p = n - 1, i = n - 1;
    // while (i >= 0) {
    //  if (v[i] == 0) {
    //      swap(v[i], v[p]);
    //      p--;
    //  }
    //  i--;
    // }
    // for (auto i : v) cout << i << " "; cout << endl;
 
 
    // int n, ele; cin >> n >> ele;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++) cin >> v[i];
 
    // int p = 0, i = 0;
    // while (i < n) {
    //  if (v[i] <= ele) {
    //      swap(v[i], v[p]);
    //      p++;
    //  }
    //  i++;
    // }
 
    // for (auto i : v) cout << i << " "; cout << endl;
 
 
//  int n; cin >> n;
//  //n==8
//  // 1 2 0 1 2 0 0 1
//  vector<int> v(n);
//  for (int i = 0; i < n; i++) cin >> v[i];
 
//  int tempstart1 = partioning(0, v, 0, n - 1);//partioning on the basis of 0 on whole array
// //return type -- void, when single time part. is there
 
//  int tempstart2 = partioning(1, v, tempstart1, n - 1);//partioning on the basis of 1 on remaining array
// //return type-- int, beacuse to know that how much part of array is remained to be part.
 
//  for (auto i : v) cout << i << " "; cout << endl;
 
// //complexity-> O(N) + O(N)===> O(N)
 
 
    // int n; cin >> n;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++) cin >> v[i];
    // int u; cin >> u;
    // int count = 1;
    // while (u--) {
    //  int ind; cin >> ind;
    //  int ele = v[ind];
    //  int ans = do_the_partition(v, ele);
    //  cout << "User-> " << count << " ";
    //  cout << ans << endl << endl;
    //  count++;
    // }
 
    // 8
    // index-> 0   1  2  3  4   5  6   7
    // ele  -> 60 - 30 30 0  - 6  78 69 1000
 
    // sort -> -30 - 6  0  30  60 69 78 1000
    // users-> 3
    // {
    //  u1->ind = 2  ans->3
    //  u2->ind = 1  ans->0
    //  u3->ind = 4  ans->1
    // }
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort_an_array_012(v);
    for (auto i : v) cout << i << " "; cout << endl;
 
 
    return 0;
}