'''PEARSON CORRELATION COEFFICIENT - I'''

import statistics as st

def covariance(X, Y):
    '''RETURNS THE COVARIANCE OF X AND Y'''
    x_bar, y_bar = st.mean(X), st.mean(Y)
    return sum([(x - x_bar) * (y - y_bar) for x, y in zip(X, Y)]) / len(X)

def pearson(X, Y):
    '''RETURNS THE PEARSON CORRELATION COEFFICIENT OF X AND Y'''
    return covariance(X, Y) / (st.pstdev(X) * st.pstdev(Y))

def main():
    '''MAIN METHOD'''
    size = int(input())
    X = list(map(float, input().strip().split()))
    Y = list(map(float, input().strip().split()))
    print(round(pearson(X, Y), 3))

if __name__ == '__main__':
    main()
