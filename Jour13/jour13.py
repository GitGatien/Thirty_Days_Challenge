#coding: utf-8
print("Ce pregramme calcul la factorielle d'un nombre.")
while 1:
	n = input("Donner une entier : ")
	try:
		n = int(n)
		if(n<0):
			print("Erreur ::::: Donner un entier positf.")
	except:
		print("Saisie invalide")
		continue
	else:
		break
i 	 = 1
fact = 1
while i <= n:
	if n == 0:
		print(f"{n}! = 1")
		break
	else:
		fact *= i
		if i == n:
			print(f"{n}! = {fact}")
	i += 1