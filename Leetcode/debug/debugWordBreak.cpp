//
// Created by Administrator on 13/12/2025.
//
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

bool debugWordBreak(string s, vector<string>& wordDict) {
    int n = s.length();
    unordered_set<string> dict(wordDict.begin(), wordDict.end());
    int maxLen = 0;
    for (const string& word : wordDict) {
        maxLen = max(maxLen, (int)word.length());
    }
    cout << maxLen << endl;
    vector<bool> dp(n + 1, false);
    dp[0] = true;

    for (int i = 1; i <= n; ++i) {
        cout << "\n=== i = " << i << " ===\n";

        for (int j = max(0, i - maxLen); j < i; ++j) {
            if (!dp[j]) continue;

            string sub = s.substr(j, i - j);

            cout << "dp[" << j << "] = true, check \""
                 << sub << "\"";

            if (dict.count(sub)) {
                cout << " --> FOUND\n";
                dp[i] = true;
                break;
            } else {
                cout << " --> NOT FOUND\n";
            }
        }

        cout << "dp[" << i << "] = " << dp[i] << endl;
    }

    return dp[n];
}