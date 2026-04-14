#coding : utf-8

print("Calcul puissance sans utilisation des symboles de bases.")
puissance = 0
while 1:
	base     = input("Donner le base de la puissance : ")
	try:
		base = int(base)
	except:
		print("Erreur inattendue !")
		continue
	else:
		break
while 1:
	exposant = input("Donner l'esposant de la puissance : ")
	try:
		exposant = int(exposant)
		if exposant < 0 :
			print("l'exposant ne doit pas etre negatif")
			continue
	except:
		print("Erreur inattendue !")
		continue
	else:
		break

def addition(a,b):
	while(b != 0):
		retenue = a & b
		a = a ^ b
		b = retenue << 1
	return a

def multiplication(a,b):
	resultat = 0
	while(b != 0):
		if b & 1:
			resultat = addition(resultat,a)
		a = a << 1
		b = b >> 1
	return resultat

puissance = 1
ctrl = 0
for i in range(exposant):
	if base < 0:
			base = abs(base)
			ctrl = addition(ctrl,1)	
	puissance = multiplication(puissance,base)
if ctrl != 0:
	base = addition(~base,1)
if base > 0:
	print(f"{base} puissance {exposant} vaut : {puissance}")
else:
	if exposant & 1:
		print(f"{base} puissance {exposant} vaut : {addition(~puissance,1)}")
	else:
		print(f"{base} puissance {exposant} vaut : {puissance}")