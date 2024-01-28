naipes = {"0": "Paus", "1": "Ouro", "2":"Coração", "3": "Espada"}

symbols = {
  "1": "Às",
  "11": "Valete",
  "12": "Dama",
  "13": "Rei"
}

s = input().split(" ")

symbol = symbols[s[1]] if s[1] in symbols else s[1]

print(f"{symbol} de {naipes[s[0]]}")