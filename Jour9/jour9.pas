program Moyenne_Mention;
var 
    moy,som,note    : real;
    i                         : integer;
    
begin
	for i := 1 to 3 do
	begin
		repeat
            write('Donner la note ',i, ' :');
            read(note);
            if ((note < 0) or (note > 20)) then
                writeln('Saisie invalide! la note est sur 20.');
        until((note >=  0) and (note <=20));
        som := som + note;
    end;   
    moy := som/3;
    if((moy >= 0) and (moy < 10))then
		writeln ('La moyenne des trois notes est de : ',moy:0:2,' avec une mention  : Insuffisant');
	if((moy >= 10)and (moy < 12)) then
		writeln ('La moyenne des trois notes est de : ',moy:0:2,' avec une mention  : Passable');
	if((moy >= 12) and (moy < 14)) then
		writeln ('La moyenne des trois notes est de : ',moy:0:2,' avec une mention  : Assez-bien');
	if((moy >= 14) and (moy <16)) then
		writeln ('La moyenne des trois notes est de : ',moy:0:2,' avec une mention  : Bien');
	if(moy>=16) then
		writeln ('La moyenne des trois notes est de : ',moy:0:2,' avec une mention  : Tres-bien');
end.