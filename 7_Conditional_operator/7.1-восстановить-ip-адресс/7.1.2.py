# Вывести на экран IP-адрес. В ответе нужна последовательность букв, в порядке, которая соотвествует IP-адресу.
import itertools
def validIP(address):
    parts = address.split(".")
    if len(parts) != 4:
        return False
    for item in parts:
        if item != '':
            if not 0 <= int(item) <= 255:
                return False
    return True
bukvs = ['А', 'Б', 'В', 'Г']
cifr = ['4_The_meaning_of_a_logical_expression.243', '116.2_Working_with_strings', '13', '.23']
for i in itertools.permutations(cifr, 4):
    ipaddress = ''.join(list(i))
    if validIP(ipaddress):
        print(ipaddress, bukvs[cifr.index(i[0])], bukvs[cifr.index(i[1])], bukvs[cifr.index(i[2])], bukvs[cifr.index(i[3])])
