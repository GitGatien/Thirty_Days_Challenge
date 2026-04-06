program Palindrome;
var
   i,k              : integer;
   	texte          : string;
   
    
begin
	k := 0;
	writeln('Ce programme test des palindromes.');
	writeln;
	write('Donner un mot ou un nombre : ');
	read(texte);
    //Attention aucun control

    for i := 1 to trunc(length(texte)/2) do
    begin
        if texte[i] = texte[length(texte)-(i)+1] then
            k += 1;
    end;
	if k = trunc(length(texte)/2) then
	begin
		writeln(texte,' est un palindrome');
	end
	else
		writeln(texte,' n"est pas un palindrome');
end.