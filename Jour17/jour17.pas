program Min_Max;
var
    Tab : array[1..100] of integer;
    i, n, min, max    : integer;
begin
	writeln('SAISIE DE VOS DONNEES');
	while True do
	begin
        write('Combien d"entier voulez vous fournir ? : ');
        readln(n);
        if ((n < 0) or (n > 100)) then
        begin
        	writeln('Erreur depacement ::: votre choix est entre 1 et 100');
        	continue;
        end
        else
            break;
    end;
    for i := 1 to n do
    begin
    	write('Donner l"element ',i, ': ');
    	read(Tab[i]);
    end;
    min := Tab[1];
    max := Tab[1];
    for i := 1 to n do
    begin
    	if min > Tab[i] then
            min := Tab[i];
        if max < Tab[i] then
            max := Tab[i];
    end;
    writeln('Le minimum de vos donnees vaut : ',min,' et le maximum ',max,'.');
end.