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


//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    vector<int> arr;
//    int x;
//    while (cin >> x) arr.push_back(x);
//    vector<long long > dp(7,0), t(7,0);
//
//    for (auto num : arr) {
//        for (auto a : dp) {
//            for (int k = 0; k < 7; ++ k)
//                if ((num + a) % 7 == k)
//                    t[k] = max(num + a, t[k]);
//        }
//        dp = t;
//    }
//    long long res = -1;
//    if (dp[0])
//        res = dp[0];
//    cout << res << endl;
//    return 0;
//}

#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    TreeNode *left, *right;
    int val;
    TreeNode(int val) : left(NULL), right(NULL), val(val) {}
};

int n, m;
int l, r;
string s;
map<int, TreeNode*> mp;
int res;

int dfs(TreeNode *r) {
    //cout << r->val << endl;
    if (!r) return 0;

    int lv = dfs(r->left);
    int rv = dfs(r->right);

    int val = lv + rv;
    if (!r->left && !r->right) val += 1;
    if (val == 2) res ++ ;
    return val;
}


int main() {
    cin >> n >> m;
    while (m --) {
        cin >> l >> s >> r;
        if (mp.find(l) == mp.end()) {
            auto r = new TreeNode(l);
            mp[l] = r;
        }
        if (mp.find(r) == mp.end()) {
            auto rr = new TreeNode(r);
            mp[r] = rr;
        }
        if(s == "left") {
            mp[l]->left = mp[r];

        } else if (s == "right") {
            mp[l]->right = mp[r];
        }
    }

    dfs(mp[1]);
    cout << res << endl;
    return 0;
}


