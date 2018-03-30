'''LEAST SQUARE REGRESSION LINE'''

import statistics as st

def linear_regression(X, Y, n):
    '''LINEAR REGRESSION OF Y ON X'''
    XY = [x * y for x, y in zip(X, Y)]
    X2 = [x * x for x in X]
    slope = float(n * sum(XY) - sum(X) * sum(Y)) / (n * sum(X2) - sum(X) ** 2)
    intercept = st.mean(Y) - slope * st.mean(X)
    return slope, intercept

def main():
    '''MAIN METHOD'''
    X = [95, 85, 80, 70, 60]
    Y = [85, 95, 70, 65, 70]
    slope, intercept = linear_regression(X, Y, len(X))
    print(round(intercept + 80 * slope, 3))

if __name__ == '__main__':
    main()
