"use strict";
let info = navigator.userAgent;
let firstProperty = document.getElementById("info");
firstProperty.innerHTML = info;
let version = navigator.appVersion;
let secondProperty = document.getElementById("version");
secondProperty.innerHTML = version;
let name = navigator.appName;
let thirdProperty = document.getElementById("name");
thirdProperty.innerHTML = name;
let namecode = navigator.appCodeName;
let fourthPropery = document.getElementById("namecode");
fourthPropery.innerHTML = namecode;
let newplatform = navigator.platform;
let fifthProperty = document.getElementById("platform");
fifthProperty.innerHTML = newplatform;
let java = navigator.javaEnabled();
let sixthProperty = document.getElementById("java");
sixthProperty.innerHTML = java;
let width = screen.width;
let height = screen.height;
let seventhProperty = document.getElementById("width");
seventhProperty.innerHTML = width + " " + height;
let color = screen.colorDepth;
let eightProperty = document.getElementById("color");
eightProperty.innerHTML = color;
let histor = history.length;
let ninethProperty = document.getElementById("history");
ninethProperty.innerHTML = histor;
let thisurl = location.href;
let tenthProperty = document.getElementById("url");
tenthProperty.innerHTML = thisurl;
let path = location.pathname;
let eleventhProperty = document.getElementById("path");
eleventhProperty.innerHTML = path;
let domen = location.host;
let twelvethProperty = document.getElementById("host");
twelvethProperty.innerHTML = domen;
var newWin;
function Task1() {
  newWin = window.open("about:blank", "hello", "width=200,height=200");
  newWin.document.write("Пупкин Василий Иванович\n");
}
function CloseCurrentWindow() {
  newWin.close();
}
function newText() {
  newWin.document.write(window.navigator.appName + "Some Text");
}
