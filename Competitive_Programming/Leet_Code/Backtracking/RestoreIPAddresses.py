class Solution:
    def restoreIpAddresses(self, s: str) -> list[str]:
        def checkOctet(octet: str) -> bool:
            if not octet or (len(octet) > 1 and octet[0] == '0'):
                return False
            if int(octet) > 255:
                return False
            return True

        ans = []

        def backtrack(start: int, path: list[str]):
            if start == len(s) and len(path) == 4:
                ans.append(".".join(path))
                return
            if len(path) >= 4:
                return

            # try 1 to 3 digits for the current octet
            for l in range(1, 4):
                if start + l <= len(s):
                    octet = s[start:start + l]
                    if checkOctet(octet):
                        backtrack(start + l, path + [octet])

        backtrack(0, [])
        return ans

print(Solution().restoreIpAddresses("25525511135"))
