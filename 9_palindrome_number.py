class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:return False
        if x == 0:return True
        dic = {}
        i = 0
        while True:
            if x==0:break
            dic[i] = x%10
            x = x//10
            i += 1

        length = (len(dic)+1)//2
        for j in range(length):
            if dic[j] != dic[len(dic)-1-j]:
                return False
        return True
