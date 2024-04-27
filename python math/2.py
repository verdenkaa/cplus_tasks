#93 - 52

from sympy import *
from sympy.plotting import plot  
x = symbols('x')
f = Piecewise(
    (2/(x-9), x <= -9),
    (6*x**2 + 5*x + 4, (-9 < x) & (x < -1)),
    (-6 / (x + 3), -1 <= x),
)
p = plot(f, show=False)
p.show()
print(singularities(f, x))