program Somme;
var
    i, n, som   : integer;
begin
	writeln('Ce programme affiche la somme des n premiers entiers naturels');
	write('Donner n : ');
	read(n);
	// Aucun control sur la saisie de n
	
	som := 0;
	for i :=  1 to n do
	begin
		som += i;
	end;
	writeln('La somme des ',n,' premier(s) entiers natirels vaut : ',som);
end.