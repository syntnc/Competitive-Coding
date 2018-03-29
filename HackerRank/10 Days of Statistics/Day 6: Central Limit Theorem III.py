'''CENTRAL LIMIT THEOREM - III'''

def confidence_interval(mu, sigma, z_score):
    '''NORMAL PROBABILITY DISTRIBUTION WHERE
        mu      =   MEAN OF THE SAMPLE
        sigma   =   STANDARD DEVIATION OF THE SAMPLE
        z_scpre =   Z-SCORE OR CRITICAL VALUE FOR SPECIFIED CONFIDENCE INTERVAL'''
    margin_of_error = z_score * sigma
    return '\n'.join(list(map(lambda x: str(round(x, 2)), [mu - margin_of_error, mu + margin_of_error])))

def main():
    '''MAIN METHOD'''
    mu_population, sigma_population, sample_size = 500, 80, 100
    # APPLYING CENTRAL LIMIT THEOREM
    mu_sample, sigma_sample = mu_population, sigma_population / (sample_size ** 0.5)
    print(confidence_interval(mu_sample, sigma_sample, z_score=1.96))

if __name__ == '__main__':
    main()
