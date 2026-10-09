class Solution {
    public String[] findRelativeRanks(int[] score) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i = 0; i < score.length; i++){
            map.put(score[i], i);
        }

        Arrays.sort(score);
        int j = 4;
        String[] ret = new String[score.length];
        for(int i = score.length - 1; i >= 0; i--){
            if(i == score.length - 1){
                ret[map.get(score[i])] = "Gold Medal";
            }
            else if(i == score.length - 2){
                ret[map.get(score[i])] = "Silver Medal";
            }
            else if(i == score.length - 3){
                ret[map.get(score[i])] = "Bronze Medal";
            }
            else{
                ret[map.get(score[i])] = "" + j++;
            }
        }

        return ret;
    }
}
