// 3838. Weighted Word Mapping

class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int sum;
        string new_word = "";
        for (int i=0; i<words.size(); i++) {
            sum=0;
            for (int j=0; j<words[i].length(); j++) {
                sum += weights[words[i][j] -'a'];
            }
            new_word += char('z' - sum%26);
        }
        return new_word;
    }
};
