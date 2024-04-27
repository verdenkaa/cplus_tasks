# 182 - 24

from sympy import symbols, idiff
x, y = symbols('x, y')
print(idiff(x**2 + 2*x*y + y**2 - 2*x, y, x))