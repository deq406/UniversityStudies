function task_2() {
  let x = prompt("Введите а");
  let y = prompt("Введите b");

  document.write(
    "<table border='1' align='center' cellspacing='1' cellpadding='1'>"
  );
  for (let i = 1; i <= x; i++) {
    document.write("<tr align='center'>");

    for (let j = 1; j <= y; j++) {
      //result += i * j + ' ';

      document.write("<td>" + i * j + "</td>");
    }
    document.write("</tr>");
    //result += '<br/>';
  }
  //document.write(result);
  document.write("</table>");
}
