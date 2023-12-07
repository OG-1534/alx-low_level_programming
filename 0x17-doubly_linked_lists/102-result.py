#!/usr/bin/python3
largest_palindrome = 0

for a in range(100, 1000):
    for b in range(100, 1000):
        prod = a * b
        if str(prod) == str(prod)[::-1] and prod > largest_palindrome:
            largest_palindrome = prod

# save the result in the file
with open("102-result", "w") as file:
    file.write(str(largest_palindrome))
