'''MEAN, MEDIAN, AND MODE'''

'''WEIGHTED MEAN'''

def weighted_mean(data, weights):
    '''RETURNS THE WEIGHTED MEAN VALUE OF THE DATA'''
    return sum([x*y for x, y in zip(data, weights)]) / sum(weights)

def main():
    '''MAIN METHOD'''
    length = int(input().strip())
    data = list(map(int, input().strip().split()))
    weights = list(map(int, input().strip().split()))
    print(round(weighted_mean(data, weights), 1))

if __name__ == '__main__':
    main()
