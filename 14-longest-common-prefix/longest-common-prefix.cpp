class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // If array is empty
        if (strs.size() == 0) return "";

        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            int j = 0;

            // Compare characters of prefix with current string
            while (j < prefix.length() && j < strs[i].length() &&
                   prefix[j] == strs[i][j]) {
                j++;
            }

            // Reduce prefix
            prefix = prefix.substr(0, j);

            // If no common prefix
            if (prefix == "") return "";
        }

        return prefix;
    }
};
