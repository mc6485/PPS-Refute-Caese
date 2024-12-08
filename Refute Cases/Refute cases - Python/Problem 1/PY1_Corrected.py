# Function to check if input is a valid number
def get_number(prompt):
    while True:
        user_input = input(prompt)
        if user_input.replace('.', '', 1).isdigit():  # Allows for decimal points
            return float(user_input)
        else:
            print("Enter numbers only.")

# Store input numbers
num1 = get_number('Enter first number: ')
num2 = get_number('Enter second number: ')

# Add two numbers
sum = num1 + num2

# Display the sum
print('The sum of {0} and {1} is {2}'.format(num1, num2, sum))
