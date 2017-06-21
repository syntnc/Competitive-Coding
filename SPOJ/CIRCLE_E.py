from math import sqrt
for _ in range(int(input())):
    R1, R2, R3 = map(lambda x: 1/float(x), input().split())
    Rs = R1 + R2 + R3 + 2*sqrt(R1*R2 + R2*R3 + R3*R1)
    print('%.6f' % (1/Rs))

# NOTE:
# Radius of inner Soddy Circle
