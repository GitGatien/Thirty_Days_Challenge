program Affichage;
var
    Tab : array[1..100] of integer;
    i,n   : integer;
    
begin 
	write('Donner le nombres d"entier a saisir (il doit etre inferieur a 100): ');
	read(n);
	//Attention aucun control sur n
	
	for i:=1 to n do
	begin
		write('Donner l"element ',i,' : ');
		readln(Tab[i]);
	end;
	writeln('AFFICHAGE DE VOS DONNEES');
	for i:=1 to n do
	begin
		writeln('[',Tab[i],']');
	end;
end.