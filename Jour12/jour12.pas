program multiplication;
var
    n,i                 : integer;
    
begin
        writeln(' =================== Ce programme affiche la table de multiplication d"un nombre de 1 a 10 =================== ');
	
		write('Donner un nombre entier : ');
		read(n);
        //Attention aucun control

        writeln('TABLE DE MULTIPLICATION PAR :',n);
        for i := 1 to 10 do
        begin
            writeln(n,' * ', i, ' = ', n*i);
        end;
end.