#Write a Python program that takes numbers as input from the user, performs division, and handles ZeroDivisionError and ValueError for non-numeric input.
try:
    # Get input from the user
    num1 = float(input("Enter the first number: "))
    num2 = float(input("Enter the second number: "))

    result = num1 / num2
    print(f"Result: {result}")

except ZeroDivisionError:
    print("Error: Division by zero is not allowed")

except ValueError:
    print("Error: Please enter a valid number")

#Create a custom exception called NegativeNumberError that is raised when the user enters a negative number while a Python program prompts the user for a positive number.1

# Custom Exception
class NegativeNumberError(Exception):
    pass

try:
    # Get input from the user
    number = float(input("Enter positive number: "))

    # Check if number is negative and raise custom exception
    if number < 0:
        raise NegativeNumberError("Error: Negative numbers are not allowed")

    print(f"You entered a positive number: {number}")

except NegativeNumberError as e:
    print(e)

except ValueError:
    print("Error: Please enter a valid number")
