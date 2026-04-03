program Conversion;
var 
HH, MM, SS, temps   : integer;
begin
	write('Donner le temps en seconde pour le convertir au format (HH : MM : SS) :  ');
    read(temps);
    if(temps<0) then
        write('Le temps est toujous positif :)!');
    MM := temps div 60;
    SS := temps mod 60;
    HH := MM div 60;
    MM := MM mod 60;
    write(temps,' seconde(s) correspond(ent) a ', HH,' h: ',MM,' min: ', SS, ' sec ... Merci');
end.