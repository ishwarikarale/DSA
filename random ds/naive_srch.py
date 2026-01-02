def naive_string_match(text, pattern):
    n = len(text)
    m = len(pattern)

    print(f"Text: {text}")
    print(f"Pattern: {pattern}\n")

    for i in range(n - m + 1):  # Slide the pattern over text
        j = 0
        while j < m and text[i + j] == pattern[j]:
            j += 1

        if j == m:  # Full pattern matched
            print(f"Pattern found at index {i}")

# Example usage
text = "AABAACAADAABAABA"
pattern = "AABA"
naive_string_match(text, pattern)
