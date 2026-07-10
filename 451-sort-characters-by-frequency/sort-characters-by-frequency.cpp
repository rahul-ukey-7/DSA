class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        // Count frequency
        for (char ch : s) {
            freq[ch]++;
        }

        // Store {frequency, character}
        vector<pair<int, char>> v;

        for (auto x : freq) {
            v.push_back({x.second, x.first});
        }

        // Sort by frequency descending
        sort(v.rbegin(), v.rend());

        string ans = "";

        // Build answer
        for (auto x : v) {
            int count = x.first;
            char ch = x.second;

            ans += string(count, ch);
        }

        return ans;
    }
};