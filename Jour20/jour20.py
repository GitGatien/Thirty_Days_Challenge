#Coding : utf-8
Matrice = []

print("Vous aller fournir une matrice et obtenir la somme des lignes et des colonnes")
while 1:
	line = input("Donner le nombre de lignes : ")
	try:
		line = int(line)
		if  line < 0 :
			print("Choix invalide... Donner un entier positif")
			continue
	except:
		print("Erreur inatendue.")
		continue
	else:
		break


while 1:
	col = input("Donner le nombre de colonnes : ")
	try:
		col = int(col)
		if  col < 0 :
			print("Choix invalide... Donner un entier positif")
			continue
	except:
		print("Erreur inatendue.")
		continue
	else:
		break
for i in range(line):
	Ligne   = []
	for j in range(col):
		while 1:
			elt = input(f"Donner l'element {i+1},{j+1} : ")
			try:
				elt = int(elt)
			except:
				print("Erreur inatendue.")
				continue
			else:
				break
		Ligne.append(elt)
	Matrice.append(Ligne)

for i in range(line):
	print(Matrice[i])
SomLigne   = 0
SomColonne = 0
for i in range(line):
	for j in range(col):
		SomLigne   += Matrice[i][j]
for i in range(col):
	for j in range(line):
		SomColonne += Matrice[j][i]
print(f"SOMME DES LIGNES  : {SomLigne}")
print(f"SOMME DES CLONNES : {SomColonne}")
