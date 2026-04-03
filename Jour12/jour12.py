#coding:utf-8
print(" =================== Ce programme affiche la table de multiplication d'un nombre de 1 a 10 ===================")
while 1:
	n = input("Donner un nomnbre entier : ")
	try:
		n = int(n)
	except:
		print("Saisie invalide :::: ressayer")
		continue
	else:
		break
print(f"TABLE DE MULTIPLICATION PAR : {n}")
for i in range(10):
	print(f"{n} * {i+1} = {n*(i+1)}")
