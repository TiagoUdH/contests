import unicodedata

def remover_acentos(texto):
  return ''.join((c for c in unicodedata.normalize('NFD', texto) if unicodedata.category(c) != 'Mn'))

v = []

n = int(input())

for i in range(n):
  v.append(input())
  
v.sort(key=remover_acentos)

for i in v:
  print(i)