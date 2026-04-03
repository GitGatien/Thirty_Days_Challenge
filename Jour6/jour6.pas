program pariter;
var 
n : integer;
begin
    write('Donner un entier pour trouver sa paritee : ');
    read(n);
    //Attention aucun control sur la saisire de la variable
    if n mod 2 = 0 then
    begin
		writeln(n,' est un nombre pair.');
	end
	else
		writeln(n,' est un nombre impair.');
end.