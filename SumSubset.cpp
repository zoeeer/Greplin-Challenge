# include <iostream>
# include <vector>

using namespace std;

int main()
{
    vector<int> a;
    int x;
    int cnt = 0;
    while (cin >> x) {
        int n = a.size();
        a.push_back(x);
        for (int i = 0; i != n; ++i) {
            a.push_back(a[i] + x);
            if (a[i] == x)
                ++cnt;
        }
    }
    cout << cnt << endl;
}
