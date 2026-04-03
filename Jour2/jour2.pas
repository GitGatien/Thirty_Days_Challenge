program Somme;
var
a,b : real;
begin
	writeln(' ========== Ce programme vous permet de faire la somme de deux nombres. ==========');
	write('Donner le premier nombre : ');
	read(a);
	write('Donner le second nombre : ');
	read(b);
	writeln('La somme de ',a:0:2, ' et ', b:0:2, ' est : ', (a +b):0:2);
end.