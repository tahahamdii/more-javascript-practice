'''
len(S)=n

operators n-2
min value. of the number of strings
split string or take digits into a list.



'''
def evaluate_segment(segment, start, end):
    """Evaluate the segment of the string from start to end using both + and ×."""
    if start == end:
        return int(segment[start:end+1])
    
    min_value = float('inf')
    
    for i in range(start, end):
        left_value = evaluate_segment(segment, start, i)
        right_value = evaluate_segment(segment, i + 1, end)
        
        min_value = min(min_value, left_value + right_value, left_value * right_value)
    
    return min_value

def solve_single_case(s):
    n = len(s)
    if n == 2:  # Edge case: if the string length is 2, return the number itself
        return int(s)
    
    # Use two pointers to evaluate different segmentations of the string
    min_result = evaluate_segment(s, 0, n - 1)
    
    return min_result
t = int(input())
result=[]
for _ in range(t):
    n = int(input())
    s = input()
    result.append((solve_single_case(s)))

for i in result:
    print(i)