class Solution {
public:
    bool isPossible(vector<int>& ns) {

        vector<unordered_set<int>> sets;
        sets.reserve(ns.size());
        for (int x : ns) {

            bool isChoosed = false;
            unordered_set<int> *choosed = nullptr;

            for (unordered_set<int>& seq : sets) {
                
                if (seq.count(x - 1) && !seq.count(x)) {

                    if (seq.size() < 3 || (choosed && choosed->size() < 3)) {
                        choosed = &seq;
                        isChoosed = true;
                        break;
                    }
                    else {
                        choosed = &seq;
                        isChoosed = true;
                    }
                }
            }
            if (isChoosed) {
                choosed->insert(x);
            }
            if (!isChoosed) {
                sets.push_back({x});
            }
        }

        for (unordered_set<int>& seq : sets) {
            cout << seq.size() << '\n';
            if (seq.size() < 3)
                return false;
        }

        return true;
    }
};