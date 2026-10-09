class Solution:
    def findRelativeRanks(self, score: list[int]) -> list[str]:
        place = {}
        for i in range(len(score)):
            place[score[i]] = i
        
        srt = sorted(score)
        j = 4
        for i in range(len(score) - 1, -1, -1):
            if i == len(score) - 1:
                score[place[srt[i]]] = "Gold Medal"
            elif i == len(score) - 2:
                score[place[srt[i]]] = "Silver Medal"
            elif i == len(score) - 3:
                score[place[srt[i]]] = "Bronze Medal"
            else:
                score[place[srt[i]]] = str(j)
                j += 1
                
        return score
