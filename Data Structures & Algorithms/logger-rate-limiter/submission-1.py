class Logger:

    messageTimer: dict

    def __init__(self):
        self.messageTimer = defaultdict(int)

    def shouldPrintMessage(self, timestamp: int, message: str) -> bool:
        timestamp += 1
        lastTime = self.messageTimer[message]
        if lastTime == 0:
            self.messageTimer[message] = timestamp
            return True
        elif lastTime <= (timestamp - 10):
            self.messageTimer[message] = timestamp
            return True
        else:
            return False

# Your Logger object will be instantiated and called as such:
# obj = Logger()
# param_1 = obj.shouldPrintMessage(timestamp,message)
