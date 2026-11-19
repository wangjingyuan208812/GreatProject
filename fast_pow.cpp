/**
 * 快速幂 (递归版)
 * 计算 (a^b) % m
 */

#include <iostream>
using namespace std;

long long fast_pow(long long a, long long b, long long m) {
    // 1. 基线条件：任何数的 0 次方都是 1
    if (b == 0) return 1 % m; 
    
    // 2. 递归砍半：先算出 a^(b/2)
    long long half = fast_pow(a, b / 2, m);
    
    // 3. 合并结果
    if (b % 2 == 0) {
        // 偶数情况：a^b = (a^(b/2))^2
        return (half * half) % m;
    } else {
        // 奇数情况：a^b = (a^(b/2))^2 * a
        return ((half * half) % m * a) % m;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    long long a, b, m;
    cin >> a >> b >> m; 
    
    cout << fast_pow(a, b, m) << "\n";
    
    return 0;
}