while (True):
    a1, a2, a3 = map(int, raw_input().split())
    if a1==0 and a2==0 and a3==0: break
    print '%s %d' % (('AP', a3+a2-a1)  if a2-a1 == a3-a2 else  ('GP', a3*a2/a1))

#PYTHON 2.7