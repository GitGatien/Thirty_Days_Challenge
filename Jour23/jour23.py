#coding : utf-8
print("CHIFFREMENT DE CESAR AVEC UN DECALLAGE DONNE.")

def Cesar(texte):
	texte = texte.upper()
	Cesar_texte = ""
	while 1:
		cle = input("Donner la clé (DECALLAGE) à utiliser : ")
		try:
			cle = int(cle)
			if cle <= 0:
				print("La cle est strictement positif.")
				continue
		except:
			print("Erreur inattendue...")
			continue
		else:
			break


	for i in range(len(texte)):
		if texte[i].isalpha():
			code = ((ord(texte[i])+cle) - 65)%26 + 65
			Cesar_texte += chr(code)
		else:
			Cesar_texte += texte[i]
	print(f"Le chiffrement césar du texte {texte} avec la clé {cle} est : {Cesar_texte}")


Chaine = input("Donner le message que vous desirez chiffré : ")
Cesar(Chaine)
