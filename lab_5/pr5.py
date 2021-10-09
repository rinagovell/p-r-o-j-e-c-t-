import math
x1 = float(input("Enter the x1 coordinate of the first top of the triangle: "))
y1 = float(input("Enter the y1 coordinate of the first top of the triangle: "))
x2 = float(input("Enter the x2 coordinate of the second top of the triangle: "))
y2 = float(input("Enter the y2 coordinate of the second top of the triangle: "))
x3 = float(input("Enter the x2 coordinate of the third top of the triangle: "))
y3 = float(input("Enter the y2 coordinate of the third top of the triangle: "))
a = ((x1 - x2)**2 + (y1 - y2)**2)**0.5
b = ((x2 - x3)**2 + (y2 - y3)**2)**0.5
c = ((x3 - x1)**2 + (y3 - y1)**2)**0.5
P = a + b + c
p = (a + b + c)/2
S = (p*(p-a)*(p-b)*(p-c))**0.5
print("The perimeter of the triangle is equal to: ", P)
print("The area of the triangle is equal to: ", S)