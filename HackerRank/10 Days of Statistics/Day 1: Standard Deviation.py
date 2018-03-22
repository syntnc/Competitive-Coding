'''STANDARD DEVIATION'''

import math
import statistics as st

def standard_deviation(data):
    '''RETURNS STANDARD DEVIATION OF DATASET'''
    xbar = st.mean(data)
    return math.sqrt(sum([math.pow(item - xbar, 2) for item in data]) / len(data))

def main():
    '''MAIN METHOD'''
    length = int(input().strip())
    data = list(map(int, input().strip().split()))
    print(round(standard_deviation(data), 1))

if __name__ == '__main__':
    main()
