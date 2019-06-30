class Solution:
    def reverse(self, x: int) -> int:
        if -10 < x and x < 10:
            return x
        if x <= -2**31 or 2**31 -1 <= x :
            return 0

        reverse = []
        isNegative = False

        if x < 0:
            x *= -1
            isNegative = True

        while True:
            a = x % 10
            reverse.append(a)
            x = (x - a) // 10
            if x == 0: break

        if reverse[0] == 0: reverse.pop(0)

        num = int(''.join(map(str,reverse)))

        if 2**31 -1 <= num :
            return 0

        if isNegative is True: num *= -1

        return num
