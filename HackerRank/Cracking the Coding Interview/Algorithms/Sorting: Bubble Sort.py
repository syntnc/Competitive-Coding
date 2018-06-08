def bubble(a, n):
    swap_count = 0
    for i in range(n): 
        for j in range(n - 1):
            if a[j] > a[j + 1]:
                swap_count += 1
                a[j], a[j + 1] = a[j + 1], a[j]
        if swap_count == 0:
            break
    print('Array is sorted in', swap_count, 'swaps.')
    print('First Element:', a[0])
    print('Last Element:', a[n - 1])

def main():
    n = int(input().strip())
    a = list(map(int, input().strip().split(' ')))
    bubble(a, n)

if __name__ == '__main__':
    main()
