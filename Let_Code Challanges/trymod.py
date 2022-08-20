def factorielle(x):
    if x<=2:
        return x
    else:
        return x * factorielle(x-1)
def check (x):
    if x%2!=0 and x>2:
        return False
    else:
        return True and check(x/2)