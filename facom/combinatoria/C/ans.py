def fatorial(N):
    if N < 2:
        return 1
    
    return N * fatorial(N - 1)

s = "".join(input().split(" "))

occ = {}

consoants = 0
vogals = 0

for c in s:
    if c not in occ:
        occ[c] = 0
        
    occ[c] += 1
    
    if c == "A" or c == "E" or c == "I" or c == "O" or c == "U":
        vogals += 1
    else:
        consoants += 1    

ans = fatorial(consoants) * fatorial(vogals)

for key in occ.keys():
    ans //= fatorial(occ[key])
    
print(ans)