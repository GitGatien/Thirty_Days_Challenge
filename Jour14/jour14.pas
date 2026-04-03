program SuitesFibanacci;
procedure Fibonacci(n : integer);
var
    i, Fpp, Fp, Fs  : integer;
begin
	Fp := 1;
	Fs := 1;
	for i := 0 to n-1 do
	begin
		if((i = 0) or( i = 1)) then
		begin
            writeln('F_',i,' = ', Fs);
        end
        else
        begin
        	Fpp := Fp;
        	Fp := Fs;
        	Fs += Fpp;
        	writeln('F_',i,' = ', Fs);
        end;
	end;
end;
var 
    n : integer;
begin
	write('Donner n pour afficher les n premiers termes de la suite de fibonacci : ');
	read(n);
	//Attention aucun control sur la saisie de n
	
	Fibonacci(n);
end.