class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        
        window = len(s1)
        ans = s2[0:0+window]
        print(ans)
        if sorted(ans) == sorted(s1):
            return True

        for i in range(1, len(s2)-1):
            n = 0
            check = s2[i:i+window]
            
            if sorted(s1) == sorted(check):
                return True
        return False



        