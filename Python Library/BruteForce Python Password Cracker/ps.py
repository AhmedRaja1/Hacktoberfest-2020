import string
from itertools import product
from time import time
from numpy import loadtxt


def product_loop(password, generator):
    for p in generator:
        if ''.join(p) == password:
            print('\nPassword:', ''.join(p))
            return ''.join(p)
    return False


def bruteforce(password, max_nchar=8):
    """Password brute-force algorithm.

    Parameters
    ----------
    password : string
        To-be-found password.
    max_nchar : int
        Maximum number of characters of password.

    Return
    ------
    bruteforce_password : string
        Brute-forced password
    """
    print('1) Comparing with most common passwords / first names')
    common_pass = loadtxt('probable-v2-top12000.txt', dtype=str)
    common_names = loadtxt('middle-names.txt', dtype=str)
    cp = [c for c in common_pass if c == password]
    cn = [c for c in common_names if c == password]
    cnl = [c.lower() for c in common_names if c.lower() == password]

    if len(cp) == 1:
        print('\nPassword:', cp)
        return cp
    if len(cn) == 1:
        print('\nPassword:', cn)
        return cn
    if len(cnl) == 1:
        print('\nPassword:', cnl)
        return cnl

    print('2) Digits cartesian product')
    for l in range(1, 9):
        generator = product(string.digits, repeat=int(l))
        print("\t..%d digit" % l)
        p = product_loop(password, generator)
        if p is not False:
            return p

    print('3) Digits + ASCII lowercase')
    for l in range(1, max_nchar + 1):
        print("\t..%d char" % l)
        generator = product(string.digits + string.ascii_lowercase,
                            repeat=int(l))
        p = product_loop(password, generator)
        if p is not False:
            return p

    print('4) Digits + ASCII lower / upper + punctuation')
    # If it fails, we start brute-forcing the 'hard' way
    # Same as possible_char = string.printable[:-5]
    all_char = string.digits + string.ascii_letters + string.punctuation

    for l in range(1, max_nchar + 1):
        print("\t..%d char" % l)
        generator = product(all_char, repeat=int(l))
        p = product_loop(password, generator)
        if p is not False:
            return p


# EXAMPLE
start = time()
bruteforce('sunshine') # Try with '123456' or '751345' or 'test2018'
end = time()
print('Total time: %.2f seconds' % (end - start))