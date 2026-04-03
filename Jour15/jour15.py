#Coding : utf-8
print("Ce programme affiche la somme des n premier entier naturels.")
while 1:
	n = input("Donner n : ")
	try:
		n = int(n)
		if(n < 0):
			print("Erreur :::: n est un entier naturel.")
			continue
	except:
		print("Saisie invalide!!!")
		continue
	else:
		break

som = 0
for i in range(1,n+1):
	som += i
print(f"La somme des {n} premier temes vaut : {som}")