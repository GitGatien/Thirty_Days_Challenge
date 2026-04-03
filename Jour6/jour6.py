#coding: utf-8
print(" ============ Ce programme permet de trouver la paritée d'un nombre. ============")
while 1:
	n = input("Donner un entier : ")
	try:
		n = int(n)
	except:
		print("Saisie invalide !!! ")
		continue
	else:
		break
if n % 2 == 0:
	print(f"{n} est pair.")
else:
	print(f"{n} est impair.")