#coding : utf-8
while 1:
	n = input("Donner un entier superieur ou egal a 1 : ")
	try:
		n = int(n)
		if(n<1):
			print("Saisie invalide !")
			continue
	except:
		print("Saisie invalide !")
		continue
	else:
		break
for i in range(n):
	print(i+1)