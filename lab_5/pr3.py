import math
a = float(input("Enter the value of point A: "))
b = float(input("Enter the value of point B: "))
c = float(input("Enter the value of point C in range from A to B: "))
AC = math.fabs(a-c)
BC = math.fabs(b-c)
print("The product of lengths of AC and BC is equal to: ", AC*BC)