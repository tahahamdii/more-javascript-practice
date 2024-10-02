class Solution:
    def minElement(self, nums: List[int]) -> int:
        def sumOfDigits(n: int) -> int:
            sum_digits = 0
            while n > 0:
                sum_digits += n % 10
                n //= 10
            return sum_digits

        newnums = [sumOfDigits(num) for num in nums]
        return min(newnums)
        