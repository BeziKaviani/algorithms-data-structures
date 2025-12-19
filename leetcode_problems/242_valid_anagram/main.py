def is_anagram(s, t):
    if len(s) != len(t):
        return False

    letter_freq = [0 for i in range(26)]

    for i in range(len(s)):
        letter_freq[ord(s[i]) - ord('a')] += 1
        letter_freq[ord(t[i]) - ord('a')] -= 1

    for letter in letter_freq:
        if letter != 0:
            return False

    return True


print(is_anagram('rect', 'zrct'))









