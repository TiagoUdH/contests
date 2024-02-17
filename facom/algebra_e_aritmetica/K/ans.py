N = int(input())
ans = 0

for i in range(N):
  n = int(input())
  
  qb = 0
  
  b = 4
  
  for i in range(n):
    qb += b
    
    if b != 1:
      b -= 1
      
  if qb > 9:
    ans += qb - 9  
    
print(ans)