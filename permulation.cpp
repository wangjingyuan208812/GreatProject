/**
 * 全排列 - 回溯法 (DFS)
 */

#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> path;     // 记录当前路径
vector<bool> used;    // 记录数字是否已使用

// step: 当前正在填第几个位置
void dfs(int step) {
    // 1. 终止条件：所有位置填满
    if (step == n) {
        for (int x : path) cout << x << " ";
        cout << "\n";
        return;
    }
    
    // 2. 遍历所有可能的选择
    for (int i = 1; i <= n; ++i) {
        if (!used[i]) {
            // 做选择
            used[i] = true;
            path.push_back(i);
            
            // 递归进入下一层
            dfs(step + 1);
            
            // 撤销选择（回溯）
            path.pop_back();
            used[i] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    used.resize(n + 1, false); // 下标从1开始，初始均为未使用
    
    dfs(0); // 从第 0 个位置开始填
    
    return 0;
}