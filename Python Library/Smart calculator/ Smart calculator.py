num1 = input("Enter your first number?\n")
operation = input("Enter Operation?\n")
num2 = input("Enter your Second Number?\n")

floatnum1 = float(num1)
floatnum2 = float(num2)

if operation == "+":
    output=floatnum1+floatnum2
if operation == "-":
    output=floatnum1-floatnum2
if operation == "*":
    output=floatnum1*floatnum2
if operation == "/":
    output=floatnum1/floatnum2
else:
    print("invalid number")

print("Your Answer: "+str(output))
