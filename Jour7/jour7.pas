program Maximun;
var
    nbre, max   : real ;
	k                : integer ;   
	egaliter       : integer ;

begin
	k := 0;
	egaliter := 1;
	writeln(' ============== Ce programme trouve le plus grand nombre parmis trois nombres donnees. ============== ');
	repeat
		write('Donner un nombre : ');
		read(nbre);
		if k = 0 then
            max := nbre;
		if k > 0 then
		begin
			if max <> nbre then
				egaliter := 0
		end;
		if nbre > max then
			max := nbre;
		k += 1;
	until(k >= 3);

	if egaliter = 1 then
	begin
		writeln('Les trois nombres fournis sont egaux et valent : ',max:0:3,'.');
	end
	else
	begin
		writeln('Les trois nombres fournis differts et le plus grand est : ',max:0:3,'.');
	end;
end.