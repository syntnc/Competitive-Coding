'''GEOMETRIC DISTRIBUTION - I'''

def geometric_distribution(p, n):
    '''GEOMETRIC PROBABILITY DISTRIBUTION WHERE
        p   =   PROBABILITY OF SUCCESS
        n   =   nth TRIAL WHERE FIRST SUCCESS OCCURS'''
    return p * ((1-p) ** (n-1))

def main():
    '''MAIN METHOD'''
    probability, number_of_trials = 1/3, 5
    print(round(geometric_distribution(probability, number_of_trials), 3))

if __name__ == '__main__':
    main()
