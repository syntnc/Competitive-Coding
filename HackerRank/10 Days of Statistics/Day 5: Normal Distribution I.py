'''NORMAL DISTRIBUTION - I'''

from math import erf

def cumulative_normal_distribution(x, mu, sigma):
    '''NORMAL PROBABILITY DISTRIBUTION WHERE
        mu      =   MEAN OF THE DISTRIBUTION
        sigma   =   STANDARD DEVIATION OF THE DISTRIBUTION'''
    return 0.5 * (1 + erf((x - mu) / (sigma * 2**0.5)))

def main():
    '''MAIN METHOD'''
    mu, sigma = 20, 2
    normal = cumulative_normal_distribution
    print(round(normal(19.5, mu, sigma), 3))
    print(round(normal(22, mu, sigma) - normal(20, mu, sigma), 3))

if __name__ == '__main__':
    main()
