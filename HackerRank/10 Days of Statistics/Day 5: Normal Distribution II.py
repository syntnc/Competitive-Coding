'''NORMAL DISTRIBUTION - II'''

from math import erf

def cumulative_normal_distribution(x, mu, sigma):
    '''NORMAL PROBABILITY DISTRIBUTION WHERE
        mu      =   MEAN OF THE DISTRIBUTION
        sigma   =   STANDARD DEVIATION OF THE DISTRIBUTION'''
    return 0.5 * (1 + erf((x - mu) / (sigma * 2**0.5)))

def main():
    '''MAIN METHOD'''
    mu, sigma = 70, 10
    normal = cumulative_normal_distribution
    print(round((1 - normal(80, mu, sigma)) * 100, 2),
          round((1 - normal(60, mu, sigma)) * 100, 2),
          round(normal(60, mu, sigma) * 100, 2), sep='\n')

if __name__ == '__main__':
    main()
