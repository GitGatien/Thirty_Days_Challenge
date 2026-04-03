program AnneeBisextile;
uses SysUtils; //Necessaire pour tavailler avec les chaine de characteres.
var
	Annee   : integer;
begin

	writeln(' ============= Ce programme affirme si une annee donner est bisextile ou pas =============');
	repeat
		write('Donner une annee : ');
		read(Annee);
		if((Annee <> trunc(Annee)) or (length(IntToStr(Abs(Annee))) <> 4)) then
			writeln('Erreur donner un entier a quatre chiffres. ');
	until((Annee = trunc(Annee)) and (length(IntToStr(Abs(Annee))) = 4));// IntToStr : Converti entier en chaine et Abs : gere le signe du nombre enfin length viens calculer le nombre de caracteres.
	
	if (Annee mod 100 = 0) then
	begin
        if (Annee mod 400 = 0) then
            writeln('L"annee ',Annee, ' est une annee bisextile.');
    end
	else if(Annee mod 4 = 0) then
	begin
        writeln('L"annee ',Annee,' est une annee bisextile.');
    end
	else
		writeln('L"annee ',Annee,' n"est pas une annee bisextile.');
end.