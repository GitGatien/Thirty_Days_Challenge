 #coding : utf-88

k = 0
m = input("Donner un mot ou nombre pour savoir si c'st un palindrome ou non : ")

for i in range(int(len(m)/2)):
	if m[i] == m[len(m)-(i+1)]:
		k += 1
if k == int(len(m)/2):
	print(f"{m} est un palindrome.")
else:
	print(f"{m} n'est pas un palindrome.")