function Z4() {
  "use strict";
  let avgmark = 0;
  let marks = document.getElementsByClassName("mark");
  for (var counter = 0; counter < marks.length; counter++) {
    avgmark += parseInt(marks[counter].innerHTML);
  }
  alert("Средний балл = " + avgmark / counter);
  let span = document.getElementsByTagName("span");
  span[1].innerHTML = `${span[1].innerHTML} средний балл= ${avgmark / counter}`;
  alert(span[1].innerHTML);
}
