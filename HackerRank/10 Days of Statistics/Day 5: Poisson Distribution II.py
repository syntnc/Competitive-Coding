'''POSISSON DISTRIBUTION - II'''

def main():
    '''MAIN METHOD'''
    mu_x, mu_y = 0.88, 1.55
    cost_x, cost_y = 160 + 40 * (mu_x + mu_x ** 2), 128 + 40 * (mu_y + mu_y ** 2)
    print(round(cost_x, 3), round(cost_y, 3), sep='\n')

if __name__ == '__main__':
    main()
