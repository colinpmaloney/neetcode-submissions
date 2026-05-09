class Solution:
    def findJudge(self, n: int, trust: List[List[int]]) -> int:
        allPeople = set([i for i in range(1,n+1)])
        trustingPeople = set([i for i,_ in trust])

        judge = list(allPeople - trustingPeople)
        if not judge:
            return -1
        
        print(f"Potential judge: {judge}")
        trusting = []
        for trustGroup in trust:
            truster, trustee = trustGroup
            if trustee == judge[0]:
                trusting.append(True)

        print(f"Trusting count: {len(trusting)}")
        if len(trusting) == n - 1:
            return judge[0]
        else:
            return -1