import math
a = float(input("Enter the value of point A: "))
b = float(input("Enter the value of point B: "))
c = float(input("Enter the value of point C: "))
AC = math.fabs(a-c)
BC = math.fabs(b-c)
print("The length of AC is equal to: ", AC)
print("The length of BC is equal to: ", BC)
print("The summary of lengths of AC and BC is equal to: ", AC+BC)