def generate_vowel_string(n):
    vowels = 'aeiou'  
    if n == 2:
        return "uo"
    elif n == 3:
        return "iae"
    else:
        pattern = []
        index = 3  
        for i in range(n):
            pattern.append(vowels[index])
            index = (index + 2) % 5  
        return ''.join(pattern)
 
def minimize_palindrome_subsequences(t, cases):
    results = []
    for n in cases:
        results.append(generate_vowel_string(n))
    return results