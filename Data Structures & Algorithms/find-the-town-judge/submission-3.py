class Solution:
    def findJudge(self, n: int, trust: List[List[int]]) -> int:
        allPeople = set([i for i in range(1,n+1)])
        trustingPeople = set([i for i,_ in trust])

        judge = list(allPeople - trustingPeople)
        if not judge:
            return -1
        judge = judge[0]

        judgeCount = 0
        for trustGroup in trust:
            if trustGroup[1] == judge:
                judgeCount += 1
        
        return judge if judgeCount == n - 1 else -1
        
