
class Solution:
    def maximumTotalSum(self, maximumHeight: List[int]) -> int:
        maximumHeight.sort()
        cur = maximumHeight[-1]
        somme = 0
        for i in range(len(maximumHeight)-1, -1, -1):
            cur = min(cur, maximumHeight[i])
            if cur <= 0:
                return -1
            somme += cur
            cur -= 1
        return somme