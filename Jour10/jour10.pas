program Condition;
var 
    age   : integer;
    sexe : char;
begin
    write('Donner votre age : ');
    readln(age);
    write('Donner votre sexe : ');
    readln(sexe);
    if(((age >= 8) and (age <= 14)) and (sexe = 'M')) then
	begin
		writeln('Vous etes un adolescent de ', age,' an(s).');
	end
    else if(((age >= 8) and (age <= 14)) and (sexe = 'F')) then
    begin
        writeln('Vous etes une adolescente de ', age,' an(s).');
   
	end
	else
		writeln('Vous n"etes pas d"une tranche d"adolescents .... merci.');
end.
