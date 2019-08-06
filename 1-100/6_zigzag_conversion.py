class Solution:
    def convert(self, s: str, numRows: int) -> str:
        output = [''] * numRows
        index = 0
        plus = 1
        for i in range(len(s)):
            output[index] += s[i]
            if numRows > 1:
                index += plus
                if index == 0 or index == numRows -1:
                    plus *= -1
        final = ""
        for j in range(numRows):
            final += output[j]

        return final
