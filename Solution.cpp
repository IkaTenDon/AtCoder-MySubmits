#include <bits/stdc++.h>
using namespace std;
int main() {
    int dummyInt = 0;
    string dummyString = "Hello, world!";
    char dummyChar = 'a';

    int N = 0, M = 0;
    cin >> N >> M;

    string S = "";
    cin >> S;
    
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<vector<int>> way(N, vector<int>(N, 0));
    int U;
    int V;
    for (int i = 0; i < M; i++) {
        cin >> U >> V;
        U--;
        V--;
        way[U][V] = 1;
        way[V][U] = 1;
    }


    A.emplace_back(5);

    stack<int> stack1;
    stack1.emplace(dummyInt); //st.push(dummyInt)
    cout << stack1.top() << endl;
    stack1.pop();
    if (stack1.empty() == true) {
        cout << "Now stack is empty" << endl;
    }

    queue<int> que1;
    que1.emplace(dummyInt); //que.push(dummyInt)
    cout << que1.front() << endl;
    priority_queue<int> pque1; // <- デフォルトは降順ソートされる
    priority_queue<int, vector<int>, greater<int>> pque2; // <- ここまで書くと昇順ソートにしてくれる
    cout << pque1.top() << endl;

    deque<int> deque1;
    deque1.emplace_front(dummyInt); //deq.front(dummyInt), deq.pop_front(dummyInt)
    deque1.emplace_back(dummyInt); //deq.back(dummyInt), deq.pop_back(dummyInt)
    for (size_t i = 0; i < deque1.size(); i++) {
        cout << deque1[i] << endl;
    }

    map<string, int> map1; // keyの型がstring, valueがint
    map1[dummyString] = dummyInt;

    set<int> set1;
    set1.insert(5); // setに5を格納, {5}
    set1.insert(9); // setに9を格納, {5, 9}
    set1.insert(-3); // setに-3を格納, {-3, 5, 9}
    set1.insert(9); // 9は既にあるので要素は変わらない, {-3, 5, 9}
    auto it = set1.find(5); // 5はset内にあるので，イテレータを返す
    int intit = *it; // intit == 5,イテレータをintとして拾うには*を付ける
    it = set1.find(0); // 0はないので，it == s.end() となる
    cout << set1.count(-3); //-3はあるので、1
    cout << set1.count(7); //7はないので、0
    it = set1.lower_bound(3); //3以上で最小の値のイテレータ,今回3
    it = set1.upper_bound(3); //3超えで最小の値のイテレータ,今回5
    it--; //イテレータは場所を示すのでインクリやデクリができる
    cout << *it <<endl; //3

    int ans = 0;
    cout << ans <<endl;
    
    return 0;
}
