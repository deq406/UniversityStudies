//<script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.0/jquery.min.js"></script>;
function print() {
  "use strict";
  let newWin = window.open("about:blank", "example", "width=600,height=400");
  let surname = document.getElementById("surname").value;
  let spec = document.getElementById("options").value;
  let radios = document.querySelector(
    'input[name="radiobutton"]:checked'
  ).value;
  let checkboxes = document.getElementsByName("spec");
  let checkboxescheked = [];
  for (let index = 0; index < checkboxes.length; index++) {
    if (checkboxes[index].checked) {
      checkboxescheked.push(checkboxes[index].value);
    }
  }
  console.log(radios);
  let ulperem = "<ul>";
  checkboxescheked.map(function (value, index) {
    ulperem += "<li style='text-decoration:underline;'>" + value + "</li>";
  });
  ulperem += "</ul>";
  /*for (var i = 0; i < radios.length; i++) {
    if (radios[i].checked) {
      var kurs = radios[i].value;
    }
  }*/
  newWin.document.write(
    "<h1 style='text-decoration:underline;'>" +
      "Факультет информационных технологий" +
      "</h1>" +
      "<br/>" +
      "<p style='margin-bottom:30px;'>" +
      "Студент\n" +
      "<span style='text-decoration:underline;'>" +
      surname +
      "</span>" +
      "\n" +
      "Специальность\n" +
      "<span style='text-decoration:underline;'>" +
      spec +
      "</span>" +
      "\n" +
      "курс\n" +
      "<span style='text-decoration:underline;'>" +
      radios +
      "</span>" +
      "\n" +
      "должен сдавать следующие предметы" +
      ulperem
  );
  /*newWin.onload = function () {
    var ul = newWin.document.createElement("ul");
    var body = newWin.document.body;
    var li = newWin.document.createElement("li");
    li.innerHTML = "1";
    ul.appendChild(li);
    body.appendChild(ul);
  };*/
}
