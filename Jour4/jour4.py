#coding: utf-8

print(" ============== Ce programme permute les valeurs de deux variables  ==============\n")

#--------------------------------------------------------------------------------------------------------------
					#Fonction qui controle les données entrées par l'utilisateurs.
def SaisieControler():
	while 1:
		x = input("Donner La 1ere/2eme valeur : ")
		try:
			x = float(x)
		except:
			print("Saisie invalide :::::::: ressayez")
			continue
		else:
			return x
#-------------------------------------------------------------------------------------------------------

nbr1 = SaisieControler()
nbr2 = SaisieControler()

#-------------------------------------------------------------------------------------------------------
print(" ********** PERMUTATION AVEC VARIABLE TEMPORAIRE ********** \n")
print(f"Avant permutation : Nombre1 = {nbr1}  | Nombre2 = {nbr2} ")
temp = nbr1
nbr1 = nbr2
nbr2 = temp
print(f"Après permutation : Nombre1 = {nbr1} | Nombre2 = {nbr2} ")

#-------------------------------------------------------------------------------------------------------
print(" ********** PERMUTATION SANS VARIABLE TEMPORAIRE ********** \n")
print(f"Avant permutation : Nombre1 = {nbr1}  | Nombre2 = {nbr2} ")
nbr1 += nbr2
nbr2 = nbr1 - nbr2
nbr1 = nbr1 - nbr2
print(f"Après permutation : Nombre1 = {nbr1} | Nombre2 = {nbr2} ")
#-------------------------------------------------------------------------------------------------------
