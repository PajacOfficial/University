import math

def silnia(n):
    result = lambda n:  math.factorial(n)
    return result(n)
def dwumian(a, b):
    return silnia(a)/(silnia(b)*silnia(a-b))