from collections import defaultdict

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        elementFrequency: dict = defaultdict(int)
        
        for num in nums:
            elementFrequency[num] += 1
        
        pairs = [(a,b) for a,b in elementFrequency.items()]
        pairs.sort(key=lambda x: x[1], reverse=True)
        return [num for num,_ in pairs[:k]]



