n = int(input())

d = {}
vp =[]

for i in range(n):
  s = input()
  
  if s not in d:
    d[s] = 1
    
  else:
    d[s] += 1

keys = sorted(d.keys(), key=lambda key: d[key], reverse=True)

for key in keys:
  print(key)