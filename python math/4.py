# 215 - 18
from sympy import Symbol, integrate, sqrt

x = Symbol("x")
print(integrate((3*x*sqrt(x) + 5 * x) / sqrt(x), (x, 1, 9)))