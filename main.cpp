
//const int N = 100010;
//int n, m, x;
//
//int main() {
//    while (cin >> n >> m >> x) {
//        int a;
//        priority_queue<int, vector<int>, greater<int> > pq;
//        for (int i = 0; i < n; ++ i) {
//            cin >> a;
//            pq.push(a);
//        }
//        while (m -- ) {
//            int u = pq.top();
//            pq.pop();
//            u += x;
//            pq.push(u);
//        }
//        cout << pq.top() << endl;
//        return 0;
//    }
//
//
//    return 0;
//}


//
//#include <bits/stdc++.h>
//using namespace std;
//string strt[] = {"1W4W7W2B5B8B3T6T9T",
//                "1W4W7W2T5T8T3B6B9B",
//                "1T4T7T2W5W8W3B6B9B",
//                "1T4T7T2B5B8B3W6W9W",
//                "1B4B7B2T5T8T3W6W9W",
//                "1B4B7B2W5W8W3T6T9T"};
//
//int main() {
//    int t;
//    cin >> t;
//    while (t -- ) {
//
//        string s[7];
//
//        for (int i = 0; i <= 6; ++ i) {
//            cin >> s[i];
//        }
//        bool flag = false;
//        for (int i = 0; i < 6; ++ i) {
//            string str = strt[i];
//            int ret = 0;
//            set<string> st;
//
//            for (int j = 0; j <=6; j ++ ) {
//
//                if (str.find(s[j]) != string::npos && !st.count(s[j])) {
//                    ret ++ ;
//                    st.insert(s[j]);
//                }
//            }
//            if (ret >= 7) {
//                flag = true;
//                break;
//            }
//
//        }
//        if (flag)
//            cout << "YES" << endl;
//        else
//            cout << "NO" << endl;
//
//    }
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1010;
//int a[N][N];
//int n, d;
//int main() {
//    cin >> n >> d;
//    int max_ = INT_MIN;
//    for (int i = 0; i < n; ++ i)
//        for (int j = 0; j < n; ++ j) {
//            scanf("%d", &a[i][j]);
//            max_ = max(max_, a[i][j]);
//        }
//    bool flag = false;
//    int ret = 0;
//    for (int i = 0; i < n; ++ i) {
//        for (int j = 0; j < n; ++ j) {
//            int t = max_ - a[i][j];
//            if (t % d != 0) {
//                ret = -1;
//                flag = true;
//                break;
//            } else {
//                ret += t / d;
//            }
//            if (flag)
//                break;
//        }
//    }
//    cout << ret << endl;
//    return 0;
//}

#include <bits/stdc++.h>
using namespace  std;
//class Solution {
//public:
//    /**
//     *
//     * @param num_money int整型 奖金的总数,单位为元
//     * @return int整型
//     */
//    int dfs(int n, vector<int>& st) {
//        if (n == 0)
//            return 1;
//        if (st[n] != -1) return st[n];
//        int t = 0;
//        for (int i = 1; i <= n; ++ i) {
//            t += dfs(n - i, st);
//        }
//        return st[n] = t;
//    }
//
//    int CalulateMethodCount(int n) {
//        // write code here
//        if (n == 0)
//            return 0;
//        vector<int> st(n + 1, -1);
//        return dfs(n, st);
//    }
//};
//int main() {
//    Solution s;
//    int n;
//    while (cin >> n) {
//        cout << s.CalulateMethodCount(n);
//    }
//    return 0;
//
//}

//#include <bits/stdc++.h>
//using namespace std;
//const int N = 110;
//
//long long a[N][N];
//int dx[] = {0, 1, 0, -1};
//int dy[] = {1, 0, -1, 0};
//int n;
//
//int main() {
//    cin >> n ;
//    vector<long long> arr(n * n);
//    arr[0] = arr[1] = 1;
//    for (int i = 2; i < n * n; ++ i)
//        arr[i] = arr[i - 1] + arr[i - 2];
//
//    for (int x = 0, y = 0, k = n * n - 1, d = 0; ~k; k -- ) {
//        a[x][y] = arr[k];
//
//        int cx = x + dx[d], cy = y + dy[d];
//        if (cx < 0 || cx >= n || cy < 0 || cy >= n || a[cx][cy]) {
//            d = (d + 1) % 4;
//            cx = x + dx[d], cy = y + dy[d];
//        }
//
//        x = cx, y = cy;
//    }
//
//    for (int i = 0; i < n; ++ i) {
//        for (int j = 0; j < n; ++ j)
//            cout << a[i][j] << ' ';
//        cout << endl;
//    }
//
//    return 0;
//
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 110;
//
//int n;
//int a, b;
//vector<int> f;
//int main() {
//    cin >> n;
//    int ret = 0;
//    while (n -- ) {
//        cin >> a >> b;
//        if (!b) {
//            ret += a;
//        } else {
//            f.push_back(a);
//        }
//    }
//
//    sort(f.begin(), f.end(), greater<int>());
//
//    for (auto v : f) {
//        ret = max(ret + v, ret * 2);
//    }
//    cout << ret << endl;
//    return 0;
//}
//
//int f[N], w[N][N];
//
//int n,m;
//
//int main() {
//    cin >> n >> m;
//    for (int i = 1; i <= n; ++ i) {
//        for (int j = 1; j <= m; ++j ) {
//            cin >> w[i][j];
//        }
//    }
//
//    for (int i = 1; i <= n; ++ i) {
//        for (int j = m; ~j; --j) {
//            for (int k = 1; k <= m; ++k) {
//                if (j >= k) {
//                    f[j] = max(f[j], f[j - k] + w[i][k]);
//                }
//            }
//        }
//    }
//
//    cout << f[m] << endl;
//    return 0;
//}

//// 1
//#include <bits/stdc++.h>
//using namespace std;
//
//string str = "AHIMOWTYUXV";
//int main() {
//    string s;
//    while (cin >> s) {
//        int n = s.size();
//        bool flag = false;
//        for (int i = 0, j = n - 1; i <= j; i ++ , j -- ) {
//            if (s[i] != s[j] || str.find(s[i]) == string::npos) {
//                flag = true;
//                break;
//            }
//        }
//        if (flag)
//            cout << "NO" << endl;
//        else
//            cout << "YES" << endl;
//    }
//    return 0;
//}
//
//
////2
//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 110;
//typedef long long LL;
//int n;
//int a, b;
//vector<int> f;
//int main() {
//    cin >> n;
//    LL ret = 0;
//    while (n -- ) {
//        cin >> a >> b;
//        if (!b) {
//            ret += a;
//        } else {
//            f.push_back(a);
//        }
//    }
//
//    sort(f.begin(), f.end(), greater<int>());
//
//    for (auto v : f) {
//        ret = max(ret + v, ret * 2);
//    }
//    cout << ret << endl;
//    return 0;
//}

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int N = 10010;
ll stk[N], a[N], tt;
int main() {
    int m , n;
    cin >> m >> n;
    int x;
    for (int i = 1; i <= n; ++ i) cin >> x, a[i] = 100 - x;
    a[0] = 100;
    a[n + 1] = 0;

    ll res = 0;
    for (int i = 0; i < n + 2; ++ i) {
        while (tt > 0 && a[stk[tt - 1]] <= a[i]) {
            if (tt >= 2) {
                res += (i - stk[tt - 2] - 1) * (min(a[i], a[stk[tt - 2]]) - a[stk[tt - 1]]);
            }
            tt --;
        }
        stk[tt ++] = i;
    }

    cout << res * m << endl;
    return 0;
}

//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m, a, b, c, d;
//int res;
//bool st[13][13];
//int dir[] = {-1, 0, 1, 0, -1};
//void dfs(int x, int y, int s) {
//    if (x == c && y == d) {
//        if (s + 1 == n * m) {
//            res ++ ;
//        }
//    } else {
//
//        for (int i = 0; i < 4; ++ i) {
//            int dx = x + dir[i];
//            int dy = y + dir[i + 1];
//            if (dx<0||dx>=n||dy<0||dy>=m)continue;
//            if (st[dx][dy])continue;
//            st[dx][dy]=true;
//            dfs(dx, dy, s + 1);
//            st[dx][dy] = false;
//        }
//
//    }
//}
//int main() {
//    cin >> n >> m >> a >> b>>c>>d;
//    st[a][b] = true;
//    dfs(a, b, 0);
//    cout << res << endl;
//    return 0;
//}