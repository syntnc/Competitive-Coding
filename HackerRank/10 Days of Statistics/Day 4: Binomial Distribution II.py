'''BINOMIAL DISTRIBUTION - II'''

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
    number_of_trials = 10
    probability = 1 - 12/100
    print(round(sum([binomial_distribution(number_of_successes, probability, number_of_trials)
               for number_of_successes in range(number_of_trials - 2, number_of_trials + 1)]), 3))
    print(round(sum([binomial_distribution(number_of_successes, probability, number_of_trials)
               for number_of_successes in range(number_of_trials - 1)]), 3))

if __name__ == '__main__':
    main()
