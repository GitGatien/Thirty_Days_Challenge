#coding: utf-8
print(" ============= Ce programme affirme si une annee donner est bisextile ou pas =============")
while 1:
	Annee = input("Donner une annee : ")
	try:
		Annee = int(Annee)

	except:
			print("Erreur donner un entier a quatre chiffres.")
			continue
	else:
		break

if (Annee % 100 == 0):
		if (Annee % 400 == 0):
			print(f"L'annee {Annee} est une annee bisextile.")
elif(Annee % 4 == 0):
	print(f"L'annee {Annee} est une annee bisextile.")
else:
	print(f"L'annee {Annee} n'est pas une annee bisextile.")