program PuissanceBitaBit;
// Fonction qui permet l'addition bit … bit
Function addition (a,b :integer ) : integer;
var
 retenue : integer;
begin
        while b <> 0 do
        begin
        	retenue := a and b;
        	a  := a xor b;
        	b  := retenue shl 1;
        end;
        addition := a;
end;
// Fonction qui permet la multiplication bit … bit
function multiplication (a,b : integer) : integer;
var
resultat: integer;
begin 
	resultat := 0;
    while b <> 0 do
    begin
    	if (b and 1) = 1  then
    	begin 
    		resultat := addition(a,resultat);
    	end;
        a := a shl 1;
    	b := b shr 1;
    	multiplication := resultat; 
    end;
end;
var 
     puissance, base, exposant,NouvelleBase, expoTemp: integer;
begin
	write('Donner la base de la puissance  : ');
	read(base);
	//Attention aucun contol (vous devez absolument tapez un entier)
	write('Donner l"exposant de la puissance : ');
	read(exposant);
	//Attention aucun control (Vous devez absolument tapez un entier positif)
	
    NouvelleBase := abs(base); //Au cas o— la base serait negatif
    writeln(NouvelleBase , base);
    expoTemp := exposant;
	puissance := 1;
	while expoTemp <> 0 do
	begin
		if (expoTemp and 1) = 1 then
            puissance := multiplication(puissance,NouvelleBase);
        NouvelleBase := multiplication(NouvelleBase,NouvelleBase);
        expoTemp := expoTemp shr 1;
	end;
	if ((base < 0) and ((exposant and 1) = 1)) then
	begin
        writeln(base,' … la puissance ',exposant,' vaut :', - puissance);
        exit;
    end;
    writeln(base,' … la puissance ',exposant,' vaut :', puissance);
end.