#coding: utf-8

print(" ============== Ce programme calcul l'aire et le perimetre d'un rectangle ==============\n")

#--------------------------------------------------------------------------------------------------------------
					#Fonction qui controle les données entrées par l'utilisateurs.
def SaisieControler():
	while 1:
		x = input("Donner La longueur/largeur de votre rectangle : ")
		try:
			x = float(x)
		except:
			print("Saisie invalide :::::::: ressayez")
			continue
		else:
			return x
#--------------------------------------------------------------------------------------------------------------

Longueur = SaisieControler()
Largeur = SaisieControler()

print(f"L'aire vaut : {Longueur*Largeur} et le perimetre vaut : {(Longueur+Largeur)*2} ")
