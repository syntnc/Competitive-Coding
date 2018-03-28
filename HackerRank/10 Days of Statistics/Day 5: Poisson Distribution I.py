'''POSISSON DISTRIBUTION - I'''

from math import exp, factorial

def poisson_distribution(mu, k):
    '''POISSON PROBABILITY DISTRIBUTION WHERE
        mu  =   AVERAGE NUMBER OF SUCCESSES IN THE REGION
        k   =   ACTUAL NUMBER SUCCESSES IN THE REGION'''
    return exp(-mu) * (mu ** k) / factorial(k)

def main():
    '''MAIN METHOD'''
    average, variable = 2.5, 5
    print(round(poisson_distribution(average, variable), 3))

if __name__ == '__main__':
    main()
