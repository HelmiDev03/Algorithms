class Solution:
    def grayCode(self, n: int):
        size = 1 << n
        res = [0]
        used = [False] * size
        used[0] = True

        def dfs():
            if len(res) == size:
                return True

            for nxt in range(size):
                if not used[nxt]:
                    if bin(res[-1] ^ nxt).count("1") == 1:
                        used[nxt] = True
                        res.append(nxt)

                        if dfs():
                            return True

                        res.pop()
                        used[nxt] = False

            return False

        dfs()
        return res
    
print(Solution().grayCode(16))    