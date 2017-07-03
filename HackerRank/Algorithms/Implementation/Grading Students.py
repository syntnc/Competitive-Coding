#!/bin/python3

import sys

def rounded(grade):
    return int(round(grade / 5)) * 5 if grade % 5 > 2 else grade

def solve(grades):
    # Complete this function
    result = []
    for grade in grades:
        result.append(rounded(grade) if grade >= 38 else grade)
    return result

n = int(input().strip())
grades = []
grades_i = 0
for grades_i in range(n):
    grades_t = int(input().strip())
    grades.append(grades_t)
result = solve(grades)
print("\n".join(map(str, result)))
