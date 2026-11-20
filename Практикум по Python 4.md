# Практикум по Python 4

## 1.

```python
n = int(input())
x = 1
k = 0

while k < n:
    x += 1
    d = 2
    while d * d <= x and x % d != 0:
        d += 1
    if d * d > x:
        k += 1

print(x)
```

## 2.

```python
n = int(input())
a = list(map(int, input().split()))
b = [False] * 4
x = n

for i in range(n):
    b[a[i]] = True
    if b[1] and b[2] and b[3]:
        x = i + 1
        break

print(x)
```

## 3.

```python
s = input()
x = ''
n = 0

for c in 'abcdefghijklmnopqrstuvwxyz':
    k = s.count(c)
    if k > n:
        n = k
        x = c

print(s.replace(x, ''))
```

## 4.

```python
n = int(input())

for i in range(n):
    s = input()
    a = [False] * 4

    for x in s:
        if x in '1234567890':
            a[0] = True
        elif x in 'qwertyuiop':
            a[1] = True
        elif x in 'asdfghjkl':
            a[2] = True
        elif x in 'zxcvbnm':
            a[3] = True

    if all(a):
        print('strong')
    else:
        print('weak')
```

## 5.

```python
t = input()
n = int(input())
a = ['6', '7', '8', '9', '10', 'Jack', 'Queen', 'King', 'Ace']
x = []

for i in range(n):
    p, s = input().split()
    q, r = input().split()

    if s == r and a.index(q) > a.index(p):
        x.append(1)
    elif r == t and s != t:
        x.append(1)
    else:
        x.append(0)

print(*x)
```
