'''SPEARMAN'S RANK CORRELATION COEFFICIENT'''

def get_rank(dataset):
    '''RETURNS LIST OF RANKS OF DATA POINTS IN THE DATASET'''
    rank_dict = dict((x, i+1) for i, x in enumerate(sorted(set(dataset))))
    return [rank_dict[x] for x in dataset]

def spearman_unique(X, Y):
    '''SPEARMAN'S RANK CORRELATION COEFFICIENT FOR DATASETS WITH UNIQUE VALUES'''
    x_rank, y_rank, n = get_rank(X), get_rank(Y), len(X)
    differences_squared_sum = sum([(r_x - r_y) ** 2 for r_x, r_y in zip(x_rank, y_rank)])
    return 1 - 6 * differences_squared_sum / (n * (n ** 2 - 1))

def main():
    '''MAIN METHOD'''
    size = int(input())
    X = list(map(float, input().strip().split()))
    Y = list(map(float, input().strip().split()))
    print(round(spearman_unique(X, Y), 3))

if __name__ == '__main__':
    main()
