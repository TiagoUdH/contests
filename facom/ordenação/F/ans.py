n = int(input())

d = {}

for i in range(n):
  s = input().split(",")
  
  if int(s[1]) not in d:
    d[int(s[1])] = []
  
  d[int(s[1])].append(s[0])

keys = sorted(d.keys(), reverse=True)

for key in keys:
  k = sorted(d[key])
  
  for i in k:
    print(i)