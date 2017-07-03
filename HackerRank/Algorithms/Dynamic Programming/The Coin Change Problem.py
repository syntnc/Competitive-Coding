'''THE COIN CHANGE PROBLEM'''

def count_ways(coins, m, n):
    table = [0 for i in range(n + 1)]
    table[0] = 1
    for i in range(0, m):
        for j in range(coins[i], n + 1):
            table[j] += table[j - coins[i]]
    return table[n]

def main():
    n, m = map(int, input().strip().split())
    coins = list(map(int, input().strip().split()))
    print(count_ways(coins, m, n))

if __name__ == '__main__':
    main()
