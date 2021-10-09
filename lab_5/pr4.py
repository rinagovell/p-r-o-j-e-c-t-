import math
x1 = float(input("Enter the x1 coordinate of the first top of the rectangle: "))
y1 = float(input("Enter the y1 coordinate of the first top of the rectangle: "))
x2 = float(input("Enter the x2 coordinate of the opposite top of the rectangle: "))
y2 = float(input("Enter the y2 coordinate of the opposite top of the rectangle: "))
x1x2 = math.fabs(x2-x1)
y1y2 = math.fabs(y2-y1)
print("The perimeter of the rectangle is equal to: ", (x1x2 + y1y2)*2)
print("The area of the rectangle is equal to: ", x1x2 * y1y2)