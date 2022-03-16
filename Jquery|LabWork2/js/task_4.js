function task_4() {
  let a = new Number("127.18");
  let b = new Number("55");
  document.write(
    "<table border='1' align='center' cellspacing='1' cellpadding='1'>"
  );
  document.write(
    "<tr><th>Число</th><th>Метод</th><th>Результат</th><th>Описание метода</th></tr>"
  );
  let row = `<tr align='center'><td>${a}</td><td>toExponential()</td><td>${a.toExponential()}</td><td>Возвращает экспоциальное значение переменной,параметр количество-целое число,указывающее количество цифр после точки</td>`;
  let rowFifthcell = `<tr align='center'><td>${b}</td><td>toExponential()</td><td>${b.toExponential()}</td><td>Возвращает экспоциальное значение переменной,параметр количество-целое число,указывающее количество цифр после точки</td>`;
  let rowThirdcell = `<tr align='center'><td>${a}</td><td>toFixed(2)</td><td>${a.toFixed(
    2
  )}</td><td>Представляет число в форме с фиксированным кол-вом цифр после запятой.Параметр-целое число указывающее кол-во цифр после запятой</td>`;
  let rowSeventhcell = `<tr align='center'><td>${b}</td><td>toFixed(2)</td><td>${b.toFixed(
    2
  )}</td><td>Представляет число в форме с фиксированным кол-вом цифр после запятой.Параметр-целое число указывающее кол-во цифр после запятой</td>`;
  let rowSecondcell = `<tr align='center'><td>${a}</td><td>toString(16)</td><td>${a.toString(
    16
  )}</td><td>Возвращает строковое значение.Параметр указывает в какой системе счисления вывести элемент</td>`;
  let rowSixthcell = `<tr align='center'><td>${b}</td><td>toString(16)</td><td>${b.toString(
    16
  )}</td><td>Возвращает строковое значение.Параметр указывает в какой системе счисления вывести элемент</td>`;
  let rowFourthcell = `<tr align='center'><td>${a}</td><td>toPrecision(2)</td><td>${a.toPrecision(
    2
  )}</td><td>Представляет число с заданным общим количеством значащих цифр.Параметр точность- целое число,указывающее сколько цифр до и после запятой будет выведено</td>`;
  let rowEightcell = `<tr align='center'><td>${b}</td><td>toPrecision(2)</td><td>${b.toPrecision(
    2
  )}</td><td>Представляет число с заданным общим количеством значащих цифр.Параметр точность- целое число,указывающее сколько цифр до и после запятой будет выведено</td>`;

  document.write(row);
  document.write(rowSecondcell);
  document.write(rowThirdcell);
  document.write(rowFourthcell);
  document.write(rowFifthcell);
  document.write(rowSixthcell);
  document.write(rowSeventhcell);
  document.write(rowEightcell);
}
