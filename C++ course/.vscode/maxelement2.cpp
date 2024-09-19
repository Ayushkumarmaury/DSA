#include <bits/stdc++.h>
using namespace std;
int main()
{
    int max, min;
    vector<int> a{12, 45, 34, 95};
    max = *max_element(a.begin(), a.end());
    cout << max<<endl;
    min = *min_element(a.begin(), a.end());
    cout << min;
}