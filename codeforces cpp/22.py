def solve(n):
    dp = [1] * (n + 1)
    for i in range(1, n + 1):
        for j in range(i - 1, 0, -1):
            if i | j == n:
                dp[i] = max(dp[i], dp[j] + 1)
    max_len = 0
    max_idx = 0
    for i in range(1, n + 1):
        if dp[i] > max_len:
            max_len = dp[i]
            max_idx = i
    seq = []
    while max_idx > 0:
        seq.append(max_idx)
        for j in range(max_idx - 1, 0, -1):
            if max_idx | j == n and dp[j] == dp[max_idx] - 1:
                max_idx = j
                break
    print(max_len)
    print(' '.join(map(str, seq[::-1])))

t = int(input())
for _ in range(t):
    n = int(input())
    solve(n)