import json

data = '{"var1":"harry", "var2":56}'

parsed = json.loads(data)
print(parsed['var1'])

data2 = {
    "channel_name":"code_with_harry",
    "cars":['bmw', 'audi a8', 'ferrari'],
    "fridge":('roti', 540),
    "isbad": False
}

jscomp = json.dumps(data2)
print(jscomp)

#json.load
#sort_key parameter in dumps