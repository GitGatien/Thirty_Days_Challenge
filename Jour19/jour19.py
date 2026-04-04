#coding : utf-8

Tab = []
print("Donner plusieur entier dans un desordre pour obtenir un trie dans un ordre croissant :")
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
print("SAISIE DE VOS INFORMATIONS")

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
	Tab.append(pousseur)

print("VOICI VOS DONNEES BRUTES")
print(Tab)

for i in range(n-1):
	for j in range(i+1,n):
		if Tab[i] > Tab[j]:
			temp   = Tab[i]
			Tab[i] = Tab[j]
			Tab[j] = temp

print("VOICI VOS DONNEES TRIEES")
print(Tab)