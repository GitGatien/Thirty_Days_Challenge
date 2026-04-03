#coding: utf-8
print(" ================= Ce programme trouve le plus grand nombre parmis trois ================= ")
k = 0
egaliter = True
while k < 3:
	while 1:
		nbre = input("Donner un nombre : ")
		try:
			nbre = float(nbre)
		except:
			print("Saisie incorrect ! :::: reesayer")
			continue
		else:
			break
	if k == 0:
		Max = nbre
	if k > 0:
		if Max != nbre:
			egaliter = False

		if(nbre > Max):
			Max = nbre
	k += 1;
if egaliter:
	print(f"Les trois nombres fournis sont egaux et valent : {Max}.")
else:
	print(f"Les trois nombres fournis differts et le plus grand est : {Max}.")