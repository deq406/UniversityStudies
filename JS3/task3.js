function task3() {
  let fio = new String("Мартинович Егор Васильевич");
  document.write("Исходная:" + fio);
  document.write("Длина строки:" + fio.length + "\nСимволов" + "<br/>");
  document.write("В верхнем регистре:" + fio.toUpperCase() + "<br/>");
  document.write("В нижнем регистре:" + fio.toLowerCase() + "<br/>");
  document.write(
    "Если соединить:" + fio.toUpperCase().concat(fio.toLowerCase()) + "<br/>"
  );
  document.write("ФИО:" + fio.replace(fio, "М.Е.В."));
}
