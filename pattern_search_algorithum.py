# Autor : Aashif Ahamed
# Name : Naive Pattern Searching algorithm
# Desc : Slide the pattern over text one by one and check for a match. If a match is found, then slide by 1 again to check for subsequent matches.

def search(pat, txt):
    M = len(pat)
    N = len(txt)
 
    # A loop to slide pat[] one by one */
    for i in range(N - M + 1):
        j = 0
 
        # For current index i, check
        # for pattern match */
        while(j < M):
            if (txt[i + j] != pat[j]):
                break
            j += 1
 
        if (j == M):
            print("Pattern found at index ", i)
 
 
# Driver's Code
if __name__ == '__main__':
    txt = "AABAACAADAABAAABAA"
    pat = "AABA"
     
    # Function call
    search(pat, txt)
