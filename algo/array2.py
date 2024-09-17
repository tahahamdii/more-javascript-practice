import sys
import math
import bisect
import heapq
import random
from collections import defaultdict, deque, Counter
from itertools import permutations, combinations
from functools import reduce

# Fast I/O methods
import threading

# Constants
MOD = int(1e9+7)  # Modify this value as needed

# Shortcuts for common data structures
ii = lambda: int(sys.stdin.readline())
si = lambda: sys.stdin.readline().strip()
mi = lambda: map(int, sys.stdin.readline().split())
li = lambda: list(map(int, sys.stdin.readline().split()))
lili = lambda n: [li() for _ in range(n)]

# Modular arithmetic functions
def modadd(a, b, mod=MOD):
    return (a % mod + b % mod) % mod

def modsub(a, b, mod=MOD):
    return (a % mod - b % mod + mod) % mod

def modmul(a, b, mod=MOD):
    return (a % mod * b % mod) % mod

# Utility functions
def srt(v):
    return sorted(v)

def mxe(v):
    return max(v)

def mne(v):
    return min(v)

def unq(v):
    return list(dict.fromkeys(v))

def bin_str(x, y):
    return bin(x)[2:].zfill(y)

def dbg(var_name, var_value):
    print(f"{var_name} = {var_value}", file=sys.stderr)

# Solve function
def solve():
    n, k = mi()      # Read n and k
    arr = li()       # Read the array elements

    arr.sort()       # Sort the array to bring negative numbers to the front

    # Change signs of negative numbers up to k times
    i = 0
    while i < n and k > 0:
        if arr[i] < 0:
            arr[i] = -arr[i]
            k -= 1
            i += 1
        else:
            break

    total = sum(arr)  # Sum after changing signs

    # If k is odd, subtract twice the smallest absolute value
    if k % 2 == 1:
        min_val = min(arr)
        total -= 2 * min_val

    print(total)

# Main function with threading for fast input
def main():
    T = ii()
    for _ in range(T):
        solve()

if __name__ == "__main__":
    threading.Thread(target=main).start()
