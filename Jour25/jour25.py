#coding : utf-8

def addition(a, b):
    while b != 0:
        retenue = a & b
        a = a ^ b
        b = retenue << 1
    return a


def soustraction(a, b):
    return addition(a, addition(~b, 1))


def multiplication(a, b):
    negatif = (a < 0) ^ (b < 0)
    a, b = abs(a), abs(b)
    resultat = 0

    while b != 0:
        if b & 1:
            resultat = addition(resultat, a)
        a <<= 1
        b >>= 1

    return addition(~resultat, 1) if negatif else resultat


def division(a, b):
    if b == 0:
        print("Erreur : division par 0")
        return

    negatif = (a < 0) ^ (b < 0)
    dividende = abs(a)
    diviseur = abs(b)
    quotient = 0

    for i in range(31, -1, -1):
        if (dividende >> i) >= diviseur:
            quotient = addition(quotient, (1 << i))
            dividende = soustraction(dividende, diviseur << i)

    if negatif:
        quotient = addition(~quotient, 1)

    reste = addition(~dividende, 1) if a < 0 else dividende

    print(f"{a} / {b} = {quotient}, reste = {reste}")



print("1. Addition")
print("2. Soustraction")
print("3. Multiplication")
print("4. Division")

choix = int(input("Votre choix : "))

a = int(input("Premier entier : "))
b = int(input("Deuxième entier : "))

if choix == 1:
    print("Résultat :", addition(a, b))
elif choix == 2:
    print("Résultat :", soustraction(a, b))
elif choix == 3:
    print("Résultat :", multiplication(a, b))
elif choix == 4:
    division(a, b)
else:
    print("Choix invalide")