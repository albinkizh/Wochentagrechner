import math

print ("Bitte geben Sie einen Tag ein (1/31): ")
d = int(input())
print ("Bitte geben Sie einen Monat ein (1/12): ")
m = int(input())
print ("Bitte geben Sie die ersten beiden Stellen der Jahreszeilen ein: ")
c = int(input())
print ("Bitte geben Sie die letzten beiden Stellen der Jahreszeilen ein: ")
y = int(input())

if m < 3:
    w = (d + (m + 9) + (2.6 * m - 0.2) + y + (y/4) + (c/4) - 2*c) % 7
    w = math.floor(w)

if m > 3: 
    w = (d + (2.6 * m - 0.2) + y + (y/4) + (c/4) - 2*c) % 7
    w = math.ceil(w)


if w == 0:
    print ("Sunday")
elif w == 1:
    print ("Montag")
elif w == 2:
    print ("Dienstag")
elif w == 3:
    print ("Mittwoch")
elif w == 4:
    print ("Donnerstag")
elif w == 5:
    print ("Freitag")
elif w == 6:
    print ("Samstag")