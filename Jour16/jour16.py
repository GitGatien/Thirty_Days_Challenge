#coding : utf-8
Liste = []

while 1:
	n = input("Donner le nombres d'entier a saisir :")
	try:
		n = int(n)
		if n < 0 or n > 100:
			print("Erreur :::: Donner un entier positf.")
			continue
	except:
		print("Saisie invalide!!!")
		continue
	else:
		break

for i in range(n):
	while 1:
		pousseur = input(f"Donner l'element {i+1} :")
		try:
			pousseur = int(pousseur)
		except:
			print("Saisie invalide!!!")
			continue
		else:
			break

	Liste.append(pousseur)	

print("\nVOICI VOS DONNEES SAISIES\n")
for i in range(n):
	print(Liste[i])