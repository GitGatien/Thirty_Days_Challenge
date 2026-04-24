program CalculBit;

uses crt;

function Addition(a, b: integer): integer;
var retenue: integer;
begin
    while b <> 0 do
    begin
        retenue := a and b;
        a := a xor b;
        b := retenue shl 1;
    end;
    Addition := a;
end;

function Soustraction(a, b: integer): integer;
begin
    b := Addition(not b, 1);
    Soustraction := Addition(a, b);
end;

function Multiplication(a, b: integer): integer;
var
    negatif: boolean;
    resultat: integer;
begin
    negatif := (a < 0) xor (b < 0);
    a := abs(a);
    b := abs(b);
    resultat := 0;

    while b <> 0 do
    begin
        if (b and 1) = 1 then
            resultat := Addition(resultat, a);
        a := a shl 1;
        b := b shr 1;
    end;

    if negatif then
        Multiplication := Addition(not resultat, 1)
    else
        Multiplication := resultat;
end;

procedure Division(a, b: integer);
var
    quotient, i, dividende, diviseur, reste: integer;
    negatif: boolean;
begin
    if b = 0 then
    begin
        writeln('Erreur : division par 0');
        exit;
    end;

    negatif := (a < 0) xor (b < 0);
    dividende := abs(a);
    diviseur := abs(b);
    quotient := 0;

    for i := 31 downto 0 do
    begin
        if (dividende shr i) >= diviseur then
        begin
            quotient := Addition(quotient, (1 shl i));
            dividende := Soustraction(dividende, (diviseur shl i));
        end;
    end;

    if negatif then
        quotient := Addition(not quotient, 1);

    if a < 0 then
        reste := Addition(not dividende, 1)
    else
        reste := dividende;

    writeln('Resultat : ', quotient, ' reste : ', reste);
end;

var
    choix, a, b: integer;

begin
    writeln('1. Addition');
    writeln('2. Soustraction');
    writeln('3. Multiplication');
    writeln('4. Division');

    write('Choix : ');
    readln(choix);

    write('Premier entier : ');
    readln(a);
    write('Deuxieme entier : ');
    readln(b);

    case choix of
        1: writeln('Resultat : ', Addition(a, b));
        2: writeln('Resultat : ', Soustraction(a, b));
        3: writeln('Resultat : ', Multiplication(a, b));
        4: Division(a, b);
    else
        writeln('Choix invalide');
    end;

    readln;
end.