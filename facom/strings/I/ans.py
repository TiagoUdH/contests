N = int(input())

v = {}
ans = 0

for i in range(N):
  s = input()
  s = s.split(" ")
  
  if s[0] not in v:
    v[s[0]] = [0, 0]
    
  if s[1] == 'E':
    v[s[0]][0] += 1
  else:
    v[s[0]][1] += 1
    
for key in v.keys():
  ans += min(v[key][0], v[key][1])
  
print(ans)
    