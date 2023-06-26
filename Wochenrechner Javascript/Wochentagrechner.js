function berechneWochentag() {
    var input = document.getElementById('Jahr').value + "." + document.getElementById('Monat').value + "." + document.getElementById('Tag').value;
    var datum = new Date(input);
    var wochentag = datum.getDay();
    var tage = ["Sonntag", "Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag", "Samstag"];
    var ergebnis = document.getElementById('ergebnis');
    ergebnis.innerHTML = tage[wochentag];
  }
  