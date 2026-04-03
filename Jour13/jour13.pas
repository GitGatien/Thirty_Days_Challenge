program Factorielle;
var 
    n,i      : integer;
    fact    : double;
    
begin
	writeln('Ce programme calcule la factorielle d"un nombre.');
    write('Donner un entier : ');
    readln(n);
    // Attention aucun control sur la saisie de n
    i       := 1;
    fact  := 1;
	repeat
		if(n = 0) then
		begin
            writeln('La factorielle de 0 vaut : 1 on note mathematiquement 0! = 1');
            break
        end
		else
		begin
			fact *= i;
			if(i = n) then
			begin
               writeln('La factorielle de ', n, '  vaut : ',fact:0:0,' on note mathematiquement ',n,'! = ',  fact:0:0);
            end
		end;
		i := i + 1;
	until(i  > n);
end.