class Logger:

    messageTimer: dict

    def __init__(self):
        self.messageTimer = {}

    def shouldPrintMessage(self, timestamp: int, message: str) -> bool:
        lastTime = self.messageTimer.get(message)
        if lastTime == None:
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
