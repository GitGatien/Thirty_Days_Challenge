#Coding:utf-8
#----------------------------------------------------------------------------------------- 

def Fibonacci(n):
	Fp = 1
	Fs = 1
	for i in range(n):
		if i == 0 or i == 1:
			print(f"F_{i} = {Fs}")
		else:
			Fpp = Fp
			Fp  = Fs
			Fs += Fpp
			print(f"F_{i} = {Fs}")

#----------------------------------------------------------------------------------------- 
while 1:
	n = input("Donner n pour afficher les n premier termes de la suite de Fibonacci : ")
	try:
		n = int(n)
		if n < 0:
			print("Erreur :::: n est un entier naturel.")
			continue
	except:
		print("Saisie invalide :::: Ressayer.")
		continue
	else:
		break

Fibonacci(n)
