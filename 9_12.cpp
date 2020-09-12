//
// Created by Administrator on 2020/9/12.
//

//#include <bits/stdc++.h>
//using namespace std;
//
//vector<vector<string>> a;
//set<string> st;
//vector<string> r;
//int n;
//
//void dfs(int pos, string res) {
//    if (pos == n) {
////        cout << res.substr(1) << endl;
//            r.push_back(res.substr(1));
//    } else {
//        for (int i = 0; i < a[pos].size(); ++ i) {
//            string t = a[pos][i];
//            if (!st.count(t)) {
//                st.insert(t);
//                dfs(pos + 1,  res + "-" + t);
//                st.erase(t);
//            }
//        }
//    }
//}
//int main() {
//    cin >> n;
//    a.resize(n);
//
//    cin.ignore();
//    for (int i = 0; i < n; i++) {
//        string x;
//        getline(cin, x);
//        stringstream ss(x);
//        string t;
//        while (ss >> t) {
//            a[i].push_back(t);
//        }
//    }
//
//
//    dfs(0, "");
//    for (int i = 0; i < a[0].size(); ++ i) {
//
//    }
//    return 0;
//}


#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr;
    int x;
    while (cin >> x) arr.push_back(x);
    vector<long long > dp(7,0), t(7,0);

    for (auto num : arr) {
        for (auto a : dp) {
            for (int k = 0; k < 7; ++ k)
                if ((num + a) % 7 == k)
                    t[k] = max(num + a, t[k]);
        }
        dp = t;
    }
    long long res = -1;
    if (dp[0])
        res = dp[0];
    cout << res << endl;
    return 0;
}