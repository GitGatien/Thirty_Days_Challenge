program Affichage;
var
	i,n	: integer;
begin
	repeat
		writeln('Donner un entier superieur ou egal a 1 : ');
		readln(n);
	until(n>1);
	for i := 1 to n do
	begin
		writeln(i);
	end
end.
