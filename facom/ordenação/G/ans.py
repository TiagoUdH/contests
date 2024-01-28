symbols = {
  1: "A",
  11: "J",
  12: "Q",
  13: "K" 
}

s = [int(i) for i in input().split(" ")]
s.sort()
qtd = 0

for i in s:
  symbol = symbols[i] if i in symbols else i
  
  end = "\n" if qtd == len(s) - 1 else " "
  
  print(symbol, end=end)
  qtd += 1