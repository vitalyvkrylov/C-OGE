a = ((1, 13), (14, 2), (1, 12), (11, 12), (-14, -14), (-11, 13), (-4, 11), (2, 9), (8, 6))
cyes = cno = 0
for i in range(len(a)):
    s = a[i][0]
    t = a[i][1]
    if s > 10 or t > 10:
        cyes += 1
    else:
        cno += 1
print(cyes, cno)
