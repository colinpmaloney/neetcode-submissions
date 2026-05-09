class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        pairs = [[position[x], speed[x]] for x in range(len(position))]
        sortedPairs = sorted(pairs, key = lambda p: p[0], reverse=True)

        x = []
        for car in range(len(position)):
            time = ((target - sortedPairs[car][0]) / sortedPairs[car][1])
            # print(f"Time for car {car} is {time}")
            if x == []:
                x.append(time)
            elif time > x[-1]:
                x.append(time)
            # print(x)
        return len(x)
