s1 = [int(i) for i in input().split(" ")]
s2 = [int(i) for i in input().split(" ")]

s1.sort()
s2.sort()

i = 0

for c in s1:
    while i < len(s2) and s2[i] < c:
        print(f"{s2[i]} Não está mapeado")
        i += 1
    
    if i == len(s2):
        break
  
    if s2[i] == c:
        print(f"{c} Está mapeado")
        i += 1
    
for res in range(i, len(s2)):
    print(f"{s2[res]} Não está mapeado")
