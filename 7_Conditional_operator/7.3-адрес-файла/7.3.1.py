# Доступ к файлу slon.txt, находящемуся на сервере circ.org, осуществляется по протоколу http.
import itertools
file = 'slon.txt'
server = 'circ.org'
protocol = 'http'
s = {'A': '.txt', 'Б': '://', 'B': 'http', 'Г': 'circ', 'Д': '/', 'Е': '.org', 'Ж': 'slon'}
correctaddress = protocol + '://' + server + '/' + file
fragment = []
bukvs = []
for key in s:
    fragment.append(s[key])
    bukvs.append(key)
for i in itertools.permutations(fragment, 7):
    address = ''.join(list(i))
    if address == correctaddress:
        print(address, bukvs[fragment.index(i[0])], bukvs[fragment.index(i[1])], bukvs[fragment.index(i[2])],
              bukvs[fragment.index(i[3])], bukvs[fragment.index(i[4])], bukvs[fragment.index(i[5])],
              bukvs[fragment.index(i[6])])
