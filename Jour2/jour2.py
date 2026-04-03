#coding: utf-8
print(" ============= Ce programme est un programme de calcul de somme de deux nombres. =============")
#-----------------------------------------------------------------------------------------------------------------

#Fonction pour saisir et controler les variables de somme
def Saisie():
	while 1:
		x = input("Donner un nombre : ")
		try:
			x = int(x)
		except:
			print("Saisie incorrect donner un entier/ réel ::::::::::::: Veuillez resaisir votre nombre.")
			continue
		else:
			return x
			break
#-----------------------------------------------------------------------------------------------------------------

a = Saisie()
b = Saisie()
print(f"La somme de {a} et {b} vaut : {a+b}")