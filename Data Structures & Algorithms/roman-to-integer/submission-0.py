class Solution:
    mapping: dict[str, int] = {
        "M" : 1000,
        "CM" : 900,
        "D" : 500,
        "CD" : 400,
        "C" : 100,
        "XC" : 90,
        "L" : 50,
        "XL" : 40,
        "X" : 10,
        "IX" : 9,
        "V" : 5,
        "IV" : 4,
        "III": 3,
        "II": 2,
        "I": 1,
    }

    def recurse(self, s: str, current: int) -> int:
        if not s:
            return current

        for index in range(len(s)):
            current_string = s[:index+1]
            if current_string not in self.mapping:
                current_roman = self.mapping[current_string[:-1]] + current
                return self.recurse(s[index:], current_roman)

            if index == len(s) -1:
                current_roman = self.mapping[current_string] + current
                return self.recurse("", current_roman)


    def romanToInt(self, s: str) -> int:
        return self.recurse(s, 0)
            
            