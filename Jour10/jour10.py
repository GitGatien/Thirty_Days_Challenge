#coding: utf-8
print("============ AFFICHAGE D'INFORMATION ============")
while 1:
	age = input("Donner votre age : ")
	try:
		age = int(age)
	except:
		print("Saisie invalide !")
		continue
	else:
		break
sexe = input("Donner votre sexe (F/M): ")
if((age >= 8 and age <= 14) and sexe == 'M'):
	print(f"Vous etes un adolescent de {age} an(s).")
elif((age >= 8 and age <= 14) and sexe == 'F'):
	print(f"Vous etes une adolescente de {age} an(s).")
else:
	print("Vous n'etes pas d'une tranche d'adolescents .... merci.")
