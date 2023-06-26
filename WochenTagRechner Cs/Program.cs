Console.WriteLine("Geben Sie ein gewünschtes Tagesdatum an: ");
int tagesdatum = int.Parse(Console.ReadLine());

Console.WriteLine("Geben Sie einen beliebigen Monat an (von 1 - 12 beginnt bei März): ");
int monat = int.Parse(Console.ReadLine());

Console.WriteLine("Geben Sie ein Jahr an: ");
int jahr = int.Parse(Console.ReadLine());

int jahrletzt = jahr - (14 - monat) / 12;
int jahrerst = jahrletzt + jahrletzt / 4 - jahrletzt / 100 + jahrletzt / 400;

int monaterst = monat + 12 * ((14 - monat) / 12) - 2;

int wochentag = (tagesdatum + jahrerst + 31 * monaterst / 12) % 7;

switch (wochentag)
{
    case 0:
        Console.WriteLine("Der Wochentag ist Sonntag");
        break;
    case 1:
        Console.WriteLine("Der Wochentag ist Montag");
        break;
    case 2:
        Console.WriteLine("Der Wochentag ist Dienstag");
        break;
    case 3:
        Console.WriteLine("Der Wochentag ist Mittwoch");
        break;
    case 4:
        Console.WriteLine("Der Wochentag ist Donnerstag");
        break;
    case 5:
        Console.WriteLine("Der Wochentag ist Freitag");
        break;
    case 6:
        Console.WriteLine("Der Wochentag ist Samstag");
        break;
    default:
        Console.WriteLine("Du existierst nicht!");
        break;
}
