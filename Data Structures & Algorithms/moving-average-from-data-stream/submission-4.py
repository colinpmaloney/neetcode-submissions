class MovingAverage:

    queue: deque[int]

    length: int = 0
    value: int = 0
    maxLength: int = 0

    def __init__(self, size: int):
        self.maxLength = size
        self.queue = deque()

    def next(self, val: int) -> float:
        if self.length >= self.maxLength:
            self.value -= self.queue[0]
            self.queue.popleft()
            self.value += val
        else:
            self.value += val
            self.length += 1

        self.queue.append(val)
        return self.value / self.length


# Your MovingAverage object will be instantiated and called as such:
# obj = MovingAverage(size)
# param_1 = obj.next(val)
