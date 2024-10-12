class Solution:
    def minGroups(self, intervals: List[List[int]]) -> int:
        ev = []
        
        for i in intervals:
            l, r = i
            ev.append((l, 1))   
            ev.append((r + 1, -1))  
        
        ev.sort()
        
        max_groups = 0
        current_groups = 0
        
        for _, event in ev:
            current_groups += event  
            max_groups = max(max_groups, current_groups)
        
        return max_groups