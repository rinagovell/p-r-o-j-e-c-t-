a = int(input("Enter the first number (different from 0): "))
if a == 0:
    print('Error')
else:
    b = int(input("Enter the second number (different from 0): "))
    if b == 0:
        print('Error')
    else:
        print('\n', "The sum of modules is equal to: ", abs(a) + abs(b), '\n', 
        "The difference of modules is equal to: ", abs(a) - abs(b), '\n', 
        "The product of modules of numbers is equal to: ", abs(a) * abs(b), '\n',
        "The quotent of modules of numbers is equal to: ", abs(a) / abs(b), '\n')