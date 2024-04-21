import math


x = float(input())

if x <= math.pi / -2 or x >= math.pi/2:
    print(f"y = -4")
else:
    print(f"y = {math.tan(x)}")