n = int(input())

l = {}

for i in range(n):
  s = input()
  
  if len(s) not in l:
    l[len(s)] = []
    
  l[len(s)].append(s)
  
sk = sorted(l.keys())

for k in sk:
  v = sorted(l[k])
  
  for value in v:
    print(value)