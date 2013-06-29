/***
Level 3

----------------------------------------

Congratulations.  You have reached the final level.

For the final task, you must find all subsets of an array
where the largest number is the sum of the remaining numbers.
For example, for an input of:

(1, 2, 3, 4, 6)

the subsets would be

1 + 2 = 3
1 + 3 = 4
2 + 4 = 6
1 + 2 + 3 = 6

Here is the list of numbers you should run your code on.
The password is the number of subsets.  In the above case the
answer would be 4.
*/
# include <iostream>
# include <vector>

using namespace std;

int main()
{
    vector<int> a; /* to store sum of all subsets */
    int x;
    int cnt = 0;
    while (cin >> x) {
        int n = a.size();
        a.push_back(x); /* sum of new subset {x} */
        for (int i = 0; i != n; ++i) { /* check existing subsets */
            if (a[i] == x)  /* if it's sum equals x */
                ++cnt;      /* that's what we're looking for! */
            a.push_back(a[i] + x); /* add x to get new subset */
        }
        cin.get(); // remove ',' in file numbers.csv
    }
    cout << cnt << endl;
}
