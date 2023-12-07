#!/usr/bin/python3

def is_palindrome(n):
    original= n
    reversed = 0
    while n > 0:
        digit = n % 10
        reversed = reversed * 10 + digit
        n //= 10
    return original == reversed

largest_palindrome = 0

for i in range(100, 1000):
    for j in range(100, 1000):
        product = i * j
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product
print(largest_palindrome)

