class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int, int> map;
        for(int i = 0; i < score.size(); i++){
            map[score[i]] = i;
        }

        sort(score.begin(), score.end());
        int j = 4;
        vector<string> ret(score.size());
        for(int i = score.size() - 1; i >= 0; i--){
            if(i == score.size()- 1){
                ret[map[score[i]]] = "Gold Medal";
            }
            else if(i == score.size() - 2){
                ret[map[score[i]]] = "Silver Medal";
            }
            else if(i == score.size() - 3){
                ret[map[score[i]]] = "Bronze Medal";
            }
            else{
                ret[map[score[i]]] = to_string(j++);
            }
        }

        return ret;
    }
};
