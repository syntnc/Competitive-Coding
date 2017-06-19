#!/bin/python3

import sys

hr, mm, ss = input().strip().split(':')
hh = int(hr) % 12 + (ss[2] == 'P') * 12
print('%02d:%s:%s' % (hh, mm, ss[:2]))
