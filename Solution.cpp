#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    string S;
    int ans;

    vector<int> A(N, 0);
    vector<vector<int>> B(N, vector<int>(N, 0));
    A.emplace_back(5);

    stack<int> st;
    st.emplace(1); //st.push(1)
    cout << st.top() << endl;
    st.pop;
    if (st.empty == true)
    {
        cout << "Now stack is empty" << endl;
    }

    queue<int> que1;
    que1.emplace(1); //que.push(1)
    cout << que1.front() << endl;
    priority_queue<int> pque1; // <- デフォルトは降順ソートされる
    priority_queue<int, vector<int>, greater<int>> pque2; // <- ここまで書くと昇順ソートにしてくれる
    cout << pque1.top() << endl;

    deque<int> deq;
    deq.emplace_front(v); //deq.front(), deq.pop_front()
    deq.emplace_back(v); //deq.back(), deq.pop_back()
    cout << deq[i] << endl;

    map<string, int> mp; // keyの型がstring, valueがint
    mp["Hello"] = 5;

    set<int> s;
    s.insert(5); // setに5を格納, {5}
    s.insert(9); // setに9を格納, {5, 9}
    s.insert(-3); // setに-3を格納, {-3, 5, 9}
    s.insert(9); // 9は既にあるので要素は変わらない, {-3, 5, 9}
    auto it = s.find(5); // 5はset内にあるので，イテレータを返す
    int it = *it; // v == 5,イテレータをintとして拾うには*を付ける
    it = s.find(0); // 0はないので，it == s.end() となる
    cout << s.count(-3); //-3はあるので、1
    cout << s.count(7); //7はないので、0
    it = s.lower_bound(3); //3以上で最小の値のイテレータ,今回3
    it = s.upper_bound(3); //3超えで最小の値のイテレータ,今回5
    it--; //イテレータは場所を示すのでインクリやデクリができる
    cout << *it <<endl; //3

    return 0;
}
