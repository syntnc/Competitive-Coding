'''MULTIPLE LINEAR REGRESSION'''

import numpy as np

def get_training_data(N):
    '''ACCEPTS TRAINING DATA FROM INPUT'''
    X, Y = [], []
    for _ in range(N):
        line = list(map(float, input().strip().split()))
        X, Y = X + [line[:-1]], Y + [line[-1]]
    return X, Y

def get_testing_data():
    '''ACCEPTS TESTING DATA FROM INPUT'''
    q = int(input())
    return [list(map(float, input().strip().split())) for _ in range(q)]

def multiple_linear_regression(X_train, y_train, X_test):
    '''MULTIPLE LINEAR REGRESSION USING MEAN CENTERING'''
    X_train, y_train, X_test = map(np.array, [X_train, y_train, X_test])
    X_centered, y_centered = X_train - np.mean(X_train, axis=0), y_train - np.mean(y_train)
    
    beta = np.linalg.inv(X_centered.T @ X_centered) @ (X_centered.T @ y_centered)

    X_test_centered = X_test - np.mean(X_train, axis=0)
    predictions_centered = X_test_centered @ beta
    predictions = predictions_centered + np.mean(y_train)

    print('\n'.join([str(prediction) for prediction in predictions]))

def main():
    '''MAIN METHOD'''
    m, n = map(int, input().strip().split())
    X, Y = get_training_data(n)
    multiple_linear_regression(X, Y, get_testing_data())

if __name__ == '__main__':
    main()
