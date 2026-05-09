class Solution:
    def getColumnWord(self, words: List[str], col_index: int) -> str:
        result: str = ""
        for row in words:
            if len(row) > col_index:
                result += row[col_index]
        return result
    def validWordSquare(self, words: List[str]) -> bool:
        for index, row in enumerate(words):
            rowWord = "".join(row)
            colWord = self.getColumnWord(words, index)
            print(rowWord, colWord)
            if rowWord != self.getColumnWord(words, index):
                return False
        
        return True
        