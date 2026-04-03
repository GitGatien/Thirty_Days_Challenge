#coding : utf-8
while 1:
	temps = input("Donner le temps en seconde pour le convertir au format (HH : MM : SS) : ")
	try:
		temps = int(temps)
	except:
		print("Saisie incorrect ... ")
		continue
	else:
		break
MM = temps // 60
SS = temps % 60
HH = MM//60
MM = MM%60
print(f"{temps} seconde(s) correspond(ent) à  {HH} h: {MM} min: {SS} sec ... Merci et à très vite!")
