class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:
        result: int = 0
        coolMap: dict = defaultdict(int)
        taskMap: dict = Counter(tasks)


        while taskMap:
            taskMap = dict(sorted(taskMap.items(), key=lambda item: -item[1]))
            taskIndex: int = 0
            keys = list(taskMap.keys())

            print('\n\n', list(coolMap.items()), '\n', list(taskMap.items()))
            for taskIndex in range(len(keys) + 1):
                if taskIndex == len(keys):
                    break
                
                currentKey = keys[taskIndex]
                if coolMap[currentKey] > 0:
                    continue
                else:
                    coolMap[currentKey] = n + 1
                    taskMap[currentKey] -= 1
                    if taskMap[currentKey] == 0:
                        taskMap.pop(currentKey)
                    break
                    
    
            result += 1
            for key, value in coolMap.items():
                coolMap[key] -= 1
                


        return result