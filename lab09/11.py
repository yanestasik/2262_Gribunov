def toint(fun):
    def wrapper(*args):
        return fun(*map(int, args))
    return wrapper


f = toint(max)
g = toint(lambda x, y: x + y)
print(f('9', '12'))
print(g('7', '5'))
