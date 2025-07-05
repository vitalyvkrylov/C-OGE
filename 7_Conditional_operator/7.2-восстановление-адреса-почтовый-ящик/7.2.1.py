# На сервере GorodN.ru находится почтовый ящик wait_for_mail.
# Фрагменты адреса электронной почты закодированы буквами от А до Е.
# Запишите последовательность букв, кодирующую этот адрес
import itertools
yashik = 'wait_for_mail'
server = 'GorodN.ru'
s = {'A': 'GorodN', 'Б': 'mail', 'B': 'for_', 'Г': '.ru', 'Д': 'wait_', 'Е': '@'}
email = yashik + '@' + server
fragment = []
bukvs = []
for key in s:
    fragment.append(s[key])
    bukvs.append(key)
for i in itertools.permutations(fragment, 6):
    address = ''.join(list(i))
    if address == email:
        print(address, bukvs[fragment.index(i[0])], bukvs[fragment.index(i[1])], bukvs[fragment.index(i[2])],
              bukvs[fragment.index(i[3])], bukvs[fragment.index(i[4])], bukvs[fragment.index(i[5])], end='')
