#Coding : utf-8

Liste = []
print("SAISIE DE VOS DONNEES")
while 1:
	n = input("Combien d'entier voulez-voud fournir ? : ")
	try:
		n = int(n)
		if  n < 0 :
			print("Choix invalide... Donner un entier positif")
			continue
	except:
		print("Erreur inatendue.")
		continue
	else:
		break
		
for i in range(n):
	while 1:
		nbre = input(f"Donner l'element {i+1} : ")
		try:
			nbre = int(nbre)
		except:
			print("Erreur ... Donner un entier.")
			continue
		else:
			break
	Liste.append(nbre)
min = Liste[0]
max = Liste[0]
for i in range(n):
	if min > Liste[i]:
		min = Liste[i]
	if max < Liste[i]:
		max = Liste[i]
print(f"Le minimum de vos données vaut : {min} et le maximum {max}.")