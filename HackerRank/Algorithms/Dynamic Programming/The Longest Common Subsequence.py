def LCS(X, Y):
    # GENERATE LCS
    L = [[0 for _ in range(len(Y) + 1)] for __ in range(len(X) + 1)]
    for i in range(len(X)+1):
        for j in range(len(Y)+1):
            if i == 0 or j == 0:
                L[i][j] = 0
            elif X[i-1] == Y[j-1]:
                L[i][j] = L[i-1][j-1] + 1
            else:
                L[i][j] = max(L[i-1][j], L[i][j-1])
    
    # DISPLAY
    index = L[len(X)][len(Y)]
    lcs = [''] * (index)    
    i, j = len(X), len(Y)
    while i > 0 and j > 0:
        if X[i-1] == Y[j-1]:
            lcs[index-1] = X[i-1]
            i, j, index = i-1, j-1, index-1
        elif L[i-1][j] > L[i][j-1]:
            i -= 1
        else:
            j -= 1
    print(' '.join(str(i) for i in lcs))

def main():
    n, m = map(int, input().strip().split())
    A = list(map(int, input().strip().split()))
    B = list(map(int, input().strip().split()))
    LCS(A, B)

if __name__ == '__main__':
    main()
