#coding: utf-8
print(" ======= Ce programme donne la moyenne de trois notes et la mention correspondante. =======")
def Mention(moy):
	if(moy >= 0 and moy < 10):
		return "Insuffisant"
	if(moy >= 10 and moy < 12):
		return "Passable"
	if(moy >= 12 and moy < 14):
		return "Assez-bien"
	if(moy >= 14 and moy <16):
		return "Bien"
	if(moy>=16):
		return "Tres-Bien"

som = 0
for i in range(3):
	while 1:
		note = input(f"Donner la note {i+1} : ")
		try:
			note = float(note)
			if(note < 0 or note > 20):
				printf("La note est positive et sur 20.\n")
				continue
		except:
			print("Saisie invalide!")
		else:
			break
	som += note

moy = som/3;
print(f"La moyenne des trois notes vaut :{moy}  Mention : {Mention(moy)}")