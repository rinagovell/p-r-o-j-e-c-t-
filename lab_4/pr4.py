a = int(input("Enter the first number (different from 0): "))
if a == 0:
    print('Error')
else: 
    b = int(input("Enter the second number (different from 0): "))
    if b == 0:
        print('Error')
    else:
        print('\n', "The sum is equal to: ", a + b, '\n', 
        "The difference is equal to: ", abs(a - b), '\n', 
        "The product of squares of numbers is equal to: ", a * a * b * b, '\n',
        "The quotent of squares of numbers is equal to: ", (a * a) / (b * b), '\n')