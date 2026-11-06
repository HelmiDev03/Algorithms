class Solution:
    def subSequences(self, s: str , words:list[str]) -> int:
        def getsubSequences(sub,subs,i):
            if sub not in subs:
                subs.append(sub)
            if  i == len (s) :
                return
            while i < len(s):
                if s[i] not in subs:
                    subs.append(s[i])    
                sub+=s[i]
                getsubSequences(sub,subs,i+1)
                sub=sub[0:len(sub)-1]
                i+=1



        su=0
        subs=[]
        sub=""
        getsubSequences(sub,subs,0)
        print(subs)
        for word in words:
            if word  in subs:
                su+=1
        return su              







        
print(Solution().subSequences("aa",["a","bb","acd","ace"]))
