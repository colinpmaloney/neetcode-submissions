class Solution:
    def countSeniors(self, details: List[str]) -> int:
        ageList = [detail[11:13] for detail in details]
        return sum([1 for age in ageList if int(age) > 60])