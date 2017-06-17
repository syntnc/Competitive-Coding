# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(raw_input())
for i in range(n):
    px, py, qx, qy = raw_input().strip().split(' ')
    px, py, qx, qy = [int(px), int(py), int(qx), int(qy)]
    print qx + (qx - px),
    print qy + (qy - py)