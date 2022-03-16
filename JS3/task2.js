function task2() {
  let methods = [
    "pop",
    "push",
    "pow",
    "shift",
    "round",
    "floor",
    "sline",
    "sort",
  ];

  let mathmethods = new Array();
  let arraymethods = new Array();
  for (let i = 0; i <= methods.length; i++) {
    methods[i] == "pop" ||
    methods[i] == "push" ||
    methods[i] == "shift" ||
    methods[i] == "sort"
      ? arraymethods.push(methods[i])
      : mathmethods.push(methods[i]);
  }
  document.write("arraymethods=[" + arraymethods + "]" + "<br/>");
  document.write("mathmethods=[" + mathmethods + "]\n");
}
