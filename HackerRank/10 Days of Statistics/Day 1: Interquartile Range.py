'''INTERQUARTILE RANGE'''

import statistics as st

def quartiles(data):
    '''RETURNS THE QUARTILE VALUES q1, q2, q3'''
    data.sort()
    q1, q2, q3 = st.median(data[:len(data) // 2]), st.median(data), st.median(data[len(data) // 2 + 1:])
    return q1, q2, q3

def reconfigure(data, frequencies):
    '''RECONFIGURES FREQUENCY DISTRIBUTION'''
    from itertools import chain, repeat 
    return list(chain.from_iterable(map(repeat, data, frequencies)))

def main():
    '''MAIN METHOD'''
    length = int(input().strip())
    data = list(map(int, input().strip().split()))
    frequencies = list(map(int, input().strip().split()))
    q1, q2, q3 = quartiles(reconfigure(data, frequencies))
    print(round(float(q3 - q1), 1))

if __name__ == '__main__':
    main()
