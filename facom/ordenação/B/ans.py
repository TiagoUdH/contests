def dist(s):
  s = [int(i) for i in s.split(" ")]

  return s[0] ** 2 + s[1] ** 2

n = int(input())

v = []

for k in range(n):
  v.append(input())
  
v.sort(key=dist)

for item in v:
  print(item)