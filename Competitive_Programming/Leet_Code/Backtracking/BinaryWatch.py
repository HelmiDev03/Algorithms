class Solution:
    def readBinaryWatch(self, turnedOn: int) -> list[str]:
        def format_time(comb):
            h = sum(comb["H"])
            m = sum(comb["M"])
            return f"{h}:{m:02d}"
        def search(comb, ans , n , hours, minutes, idx_hours=0, idx_minutes=0):
            if len(comb['H']) + len(comb['M'])   ==  n :
                dateFormat=format_time(comb)
                ans.append(dateFormat)
                return
            
            for index in range(idx_minutes, len(minutes)):
                m=minutes[index]
                if sum(comb["M"])  + m <=59  :
                    comb["M"].append(m)
                    if len(comb['H']) + len(comb['M'])   ==  n :
                        if  format_time(comb) not in ans:
                            search(comb, ans , n , hours, minutes, idx_hours, index+1)
                    else:
                        search(comb, ans , n , hours, minutes, idx_hours, index+1)
                    comb["M"].pop()        
            for index in range(idx_hours, len(hours)):
                h=hours[index]
                if sum(comb["H"])  + h <=11 :
                    comb["H"].append(h)
                    if len(comb['H']) + len(comb['M'])   ==  n :
                        if  format_time(comb) not in ans:
                            search(comb, ans , n , hours, minutes, index+1, idx_minutes)
                    else:
                        search(comb, ans , n , hours, minutes, index+1, idx_minutes)        
                    comb["H"].pop()
        comb = {
            "H" : [],
            "M" : []
        }    
        hours=[1,2,4,8]
        minutes=[1,2,4,8,16,32]
        n=turnedOn
        idx_hours=0
        idx_minutes=0
        ans=[]
        search(comb, ans , n ,hours, minutes, idx_hours, idx_minutes)
        return ans 
