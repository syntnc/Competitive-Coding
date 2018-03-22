'''QUARTILES'''

def median(data):
    '''RETURNS THE MEDIAN VALUE OF THE SORTED DATA'''
    return (data[len(data) // 2] + data[len(data) // 2 - 1]) / 2 if len(data) % 2 == 0 \
            else data[len(data) // 2]

def quartiles(data):
    '''RETURNS THE QUARTILE VALUES q1, q2, q3'''
    data.sort()
    q1, q2, q3 = median(data[:len(data) // 2]), median(data), median(data[len(data) - len(data) // 2:])
    return q1, q2, q3

def main():
    '''MAIN METHOD'''
    length = int(input().strip())
    data = list(map(int, input().strip().split()))
    q1, q2, q3 = map(int, quartiles(data))
    print(q1, q2, q3, sep='\n')

if __name__ == '__main__':
    main()
