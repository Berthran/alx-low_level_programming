#!/usr/bin/python3

def max_palindrome(pals=[]):
    for i in range(100, 1000):
        for j in range(100, 1000):
            prod = i * j
            prods = str(i) + " x " + str(j)
            prod_str = str(prod)
            if prod_str == prod_str[::-1]:
                pals.append(prods)
    return (pals[-1])

pals = []
max_prod = max_palindrome(pals)
print(max_prod)
