'''BINOMIAL DISTRIBUTION - I'''

import operator as op
from functools import reduce

def combination(n, r):
    '''RETURNS nCr'''
    r = min(r, n-r)
    numerator = reduce(op.mul, range(n, n-r, -1), 1)
    denominator = reduce(op.mul, range(1, r+1), 1)
    return numerator // denominator

def binomial_distribution(x, p, n):
    '''BINOMIAL PROBABILITY DISTRIBUTION WHERE
        x   =   NUMBER OF SUCCESSES
        p   =   PROBABILITY OF SUCCESS
        n   =   NUMBER OF TRIALS'''
    return combination(n, x) * (p ** x) * ((1-p) ** (n-x))

def main():
    '''MAIN METHOD'''
    success, failure, number_of_trials = 1.09, 1, 6
    probability = success / (success + failure)
    print(round(sum([binomial_distribution(number_of_successes, probability, number_of_trials)
               for number_of_successes in range(3, 7)]), 3))

if __name__ == '__main__':
    main()
