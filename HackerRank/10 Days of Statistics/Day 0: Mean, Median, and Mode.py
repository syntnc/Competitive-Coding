'''MEAN, MEDIAN, AND MODE'''

import math
from collections import Counter

def mean(data):
    '''RETURNS THE MEAN VALUE OF THE DATA'''
    return sum(data) / len(data)

def median(data):
    '''RETURNS THE MEDIAN VALUE OF THE DATA'''
    data.sort()
    return (data[len(data) // 2] + data[len(data) // 2 - 1]) / 2 if len(data) % 2 == 0 \
            else data[len(data) // 2]

def mode(data):
    '''MODIFIED MODE THAT RETURNS NUMERICALLY SMALLEST MODE'''
    highest = Counter(data).most_common()
    return sorted(highest, key=lambda x: (-x[1], x[0]))[0][0]

def main():
    '''MAIN METHOD'''
    length = int(input().strip())
    data = list(map(int, input().strip().split()))
    print(round(mean(data), 1), round(median(data), 1), mode(data), sep='\n')

if __name__ == '__main__':
    main()
