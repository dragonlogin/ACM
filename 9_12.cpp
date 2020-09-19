//
// Created by Administrator on 2020/9/12.
//



//class Solution {
//public:
//    /**
//     * 找出字符串中最大公共子字符串
//     * @param str1 string字符串 输入字符串1
//     * @param str2 string字符串 输入字符串2
//     * @return string字符串
//     */
//    string GetCommon(string str1, string str2) {
//        // write code here
//        int n = str1.size(), m = str2.size();
//        int dp[n + 1][m + 1];
//        memset(dp, 0, sizeof dp);
//        int ret = 0;
//        int x;
//        for (int i = 1; i <= n; ++ i) {
//            for (int j = 1; j <= m; ++ j) {
//                if (str1[i - 1] == str2[j - 1]) {
//                    dp[i][j] = dp[i - 1][j - 1] + 1;
//                }
//                if (ret < dp[i][j]) {
//                    ret = dp[i][j];
//                    x = i - 1;
//                }
//            }
//        }
//        return str1.substr(x - ret + 1, ret);
//    }
//};
//
//int main() {
//    Solution s;
//    cout << s.GetCommon("abccade","dgcadde");
//    return 0;
//}



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
//
//    int m = a[0].size();
//    int n = r.size() / m ;
////    for (int i = 0; i < n; ++ i) cout << r[i] << endl;
//    for (int i = 0; i < n; ++ i) {
//        for (int j = 0, k = i; j < m; ++ j, k += n) {
//            cout << r[k] << endl;
//        }
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

//#include <bits/stdc++.h>
//using namespace std;
//struct TreeNode {
//    TreeNode *left, *right;
//    int val;
//    TreeNode(int val) : left(NULL), right(NULL), val(val) {}
//};
//
//int n, m;
//int l, r;
//string s;
//map<int, TreeNode*> mp;
//int res;
//
//int dfs(TreeNode *r) {
//    //cout << r->val << endl;
//    if (!r) return 0;
//
//    int lv = dfs(r->left);
//    int rv = dfs(r->right);
//
//    int val = lv + rv;
//    if (!r->left && !r->right) val += 1;
//    if (val == 2) res ++ ;
//    return val;
//}
//
//
//int main() {
//    cin >> n >> m;
//    while (m --) {
//        cin >> l >> s >> r;
//        if (mp.find(l) == mp.end()) {
//            auto r = new TreeNode(l);
//            mp[l] = r;
//        }
//        if (mp.find(r) == mp.end()) {
//            auto rr = new TreeNode(r);
//            mp[r] = rr;
//        }
//        if(s == "left") {
//            mp[l]->left = mp[r];
//
//        } else if (s == "right") {
//            mp[l]->right = mp[r];
//        }
//    }
//
//    dfs(mp[1]);
//    cout << res << endl;
//    return 0;
//}
//
//

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1010;
//typedef pair<int,int> PII;
//PII a[N];
//int t, n, m;
//
//int main() {
//    cin >> t;
//    while (t --) {
//        cin >> n >> m;
//        int x;
//        for (int i = 0; i < n; ++ i) {
//            cin >> x;
//            a[i] = {x, i + 1};
//        }
//        sort(a, a + n, greater<PII>());
//        vector<int> res;
//        int rest = m;
//        for (int i = 0; i < n; ++ i) {
//            rest -= a[i].first;
//            res.push_back(a[i].second);
//            if (rest <= 0) break;
//        }
//        if (rest > 0) {
//            cout << "-1" << endl;
//        } else {
//            cout << res.size() << endl;
//            for (int v : res)
//                cout << v << ' ';
//            cout << endl;
//        }
//    }
//}



#include <bits/stdc++.h>
using namespace std;
//const int mod = 1e9 + 7;
//
//int qmi(int k) {
//    int res = 1, t = 2;
//    while (k) {
//        if (k & 1) res = res * t % mod;
//        t = t * t % mod;
//        k >>= 1;
//    }
//    return res;
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//    vector<int> f(n + 1);
//    int x;
//    for (int i = 0; i < n; ++ i) {
//        cin >> x;
//        if (x & 1)
//            f[i + 1] = f[i] + 1;
//        else
//            f[i + 1] = f[i];
//    }
//    int op, l, r;
//    for (int i = 0; i < m; ++ i) {
//        cin >> op >> l >> r;
//        if (op == 1) {
//            int cnt = f[r] - f[l - 1];
//            cout << qmi(cnt) - 1 << endl; // 2^k - 1
//        } else {
//            int sum = r - l + 1;
//            int cnt = f[r] - f[l - 1];
//            cout << qmi(sum) - qmi(cnt) << endl;
//        }
//    }
//    return 0;
//}

//int main() {
//    string str = "3%a2%b##";
//    stack<int> st1;
//    stack<string> st2;
//    int n = str.size();
//    for (int i = 0; i < n;) {
//        cout << i << endl;
//        if (isdigit(str[i])) {
//            int sum = 0, k = i;
//            while (k < n && isdigit(str[k])) {
//                sum = sum * 10 + str[k] - '0';
//                k ++ ;
//            }
//            st1.push(sum);
//            i = k;
//        } else if (str[i] != '%' && str[i] != '#') {
//            string res;
//            int k = i;
//            while (k < n && !isdigit(str[k]) && str[k] != '%' && str[k] != '#') {
//                res += str[k];
//                k ++ ;
//            }
//
//            st2.push(res);
//            i = k;
//        } else {
//            i ++ ;
//        }
//    }
//
//    string res;
//    while (st1.size()) {
//        res = "";
//        int num = st1.top();
//        st1.pop();
//        string s2 = st2.top();
//        st2.pop();
//        while (num--) {
//            res += s2;
//        }
//        if (st2.size()) {
//            string s3 = st2.top();
//            st2.pop();
//            res = s3 + res;
//            st2.push(res);
//        }
//    }
//    cout << res << endl;
//    return 0;
//}


//1 ac
#include <bits/stdc++.h>
using namespace std;
const int N = 10010;
char a[N][N];
int dir[] = {-1, 0, 1, 0, -1};

int n, m;

int main() {
    cin >> n >> m;
    memset(a, 0, sizeof a);
    for (int x = 0, y = 0, k = 0, d = 0; k < n * m; ++ k) {
        a[x][y] = 'A' + k % 26;
        int cx = x + dir[d];
        int cy = y + dir[d + 1];
        if (cx < 0 || cx >= n || cy < 0 || cy >= m || a[cx][cy] != '\0') {
            d = (d + 1) % 4;
            cx = x + dir[d], cy = y + dir[d + 1];
        }

        x = cx, y = cy;
    }

    for (int i = 0; i < n; ++ i) {
        for (int j = 0; j < m; ++ j)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}


// 2 ac
#include <bits/stdc++.h>
using namespace std;

bool match(string s, string p) {
    if (p.empty())
        return s.empty();
    if (1 < p.size() && p[1] == '*') {
        return match(s, p.substr(2)) || (!s.empty() && (s[0] == p[0] || p[0] == '.')
                                         && match(s.substr(1), p));
    }
    else if (1 < p.size() && p[1] == '+') {
        return (!s.empty() && match(s.substr(1), p.substr(2))) || (!s.empty() && (s[0] == p[0] || p[0] == '.')
                                                                   && match(s.substr(1), p));
    }
    else {
        return (!s.empty() && (s[0] == p[0] || p[0] == '.') && match(s.substr(1), p.substr(1)));
    }
}
int main() {
    string s, p;
    cin >> s >> p;
    if (match(s, p))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}