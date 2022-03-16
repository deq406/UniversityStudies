function task1() {
  let array = new Array();

  let max = 0;
  let tempmax = 0;
  let tempmin = 0;
  array[0] = 6 * Math.pow(Math.PI, 2) + 3 * Math.exp(8);
  array[1] = 2 * Math.cos(4) + Math.cos(12) + 8 * Math.exp(3);
  array[2] = 3 * Math.sin(9) + Math.log(5) + Math.sqrt(3);
  array[3] = 2 * Math.tan(5) + 6 * Math.PI + Math.sqrt(12);

  //for (let i = 0; i < array.length; i++) {
  //  array[i] > max ? (max = array[i]) : false;
  //}
  //document.write(max);

  let maxnumber = Math.max(...array);
  let minnumber = Math.min(...array);

  for (let i = 0; i <= array.length; i++) {
    maxnumber == array[i] ? (tempmax = i) : false;
  }
  for (let j = 0; j < array.length; j++) {
    minnumber == array[j] ? (tempmin = j) : false;
  }
  document.write(tempmax + 1 + ".\n" + maxnumber + "<br/>");
  document.write(tempmin + 1 + ".\n" + minnumber);
  // method map
}
