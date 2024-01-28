n = int(input())

d = {}

ans = []
l = 0

for i in range(n):
  s = int(input())
  
  if s not in d:
    d[s] = 1
    
  else:
    d[s] += 1
    
k = sorted(d.keys())

for key in k:
  if d[key] > l:
    ans = [key,]
    l = d[key]
    
  elif d[key] == l:
    ans.append(key)
    
print(f"{ans[len(ans) - 1]} {d[ans[0]]}")