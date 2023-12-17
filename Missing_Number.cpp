#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void fn()
{
    // fstream myfile;
    // myfile.open("inp.txt", ios::in);

    int n;
    cin >> n;
    int ans = n;
    for (int i = 1; i<n; i++){
      int a;
      cin >> a;
      ans = ans ^ a ^ i;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false); // dont use while debugging
    cin.tie(NULL); // dont use in interactive problems
    cout.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
        fn();
    return 0;
}