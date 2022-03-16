function task4() {
  let date = new Date();

  document.write(
    "<table border='1' align='center' cellspacing='1' cellpadding='1'"
  );
  document.write("<tr>");
  document.write("<td>" + "Год" + "</td>");
  document.write("<td>" + "2021" + "</td>");
  document.write("</tr>");
  document.write("<tr>");
  document.write("<td>" + "Месяц" + "</td>");
  document.write("<td>" + date.getMonth() + "</td>");
  document.write("</tr>");
  document.write("<tr>");
  document.write("<td>" + "День" + "</td>");
  document.write("<td>" + date.getDate() + "</td>");
  document.write("</tr>");
  document.write("<tr>");
  document.write("<td>" + "Час" + "</td>");
  document.write("<td>" + date.getHours() + "</td>");
  document.write("</tr>");
  document.write("<tr>");
  document.write("<td>" + "Минуты" + "</td>");
  document.write("<td>" + date.getMinutes() + "</td>");
  document.write("</tr>");
  document.write("<tr>");
  document.write("<td>" + "Секунды" + "</td>");
  document.write("<td>" + date.getSeconds() + "</td>");
  document.write("</tr>");
  document.write("</table>");
}
