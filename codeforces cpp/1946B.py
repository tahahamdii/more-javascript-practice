'''
array a=[n]
perform k operations
mod=7+10**9



'''
MOD = 10**9 + 7

def max_subarray_sum(arr):
    max_ending_here = max_so_far = 0
    for x in arr:
        max_ending_here = max(0, max_ending_here + x)
        max_so_far = max(max_so_far, max_ending_here)
    return max_so_far

def maximum_sum(n, k, arr):
    total_sum = sum(arr) % MOD
    max_sub_sum = max_subarray_sum(arr)
    
    if max_sub_sum == 0:
        return total_sum

    # Maximum possible sum after k operations
    max_possible_sum = total_sum + k * max_sub_sum
    return max_possible_sum % MOD

result = []
t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    result.append(maximum_sum(n, k, arr))

for res in result:
    print(res)