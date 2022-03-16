function Z3() {
  "use strict";
  let elements = document.all;
  for (let counter = 0; counter < elements.length; counter++)
    if (elements[counter] == "[object HTMLSpanElement]") {
      alert("all " + elements[counter].innerHTML);
      break;
    }
  let sp = document.getElementsByTagName("span");
  alert("span " + sp[0].innerHTML);
  let el = document.getElementById("id");
  alert("id " + el.innerHTML);
}
