const PI = 3.14;

function task_3() {
  let a = +prompt("Введите а");
  let b = +prompt("Введите b");

  document.write(
    "<table border='1' align='center' cellpadding='5' style='border-collapse: collapse;'>"
  );
  document.write(
    "<tr><th>Радиус</th><th>Площадь круга</th><th>Длина окружности</th></tr>"
  );

  a = round(a - 0.3); // to propertly build table from defined value

  do {
    a = round(a + 0.3);
    let sqr = round(PI * Math.pow(a, 2));
    let length = round(2 * PI * a);
    let row = `<tr align='center'><td>${a}</td><td>${sqr}</td><td>${length}</td></tr>`; // string interpolation
    document.write(row);
  } while (a < b);

  document.write("</table>");
}

function round(num) {
  return Math.round(num * 10) / 10;
}
