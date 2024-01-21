s = input()

s = s.split(" ")
ans = ""

for e in s:
  if(len(e) > len(ans)):
    ans = e
    
print(ans)