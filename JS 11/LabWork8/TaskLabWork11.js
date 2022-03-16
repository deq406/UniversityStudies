("use strict");
$(document).ready(function () {
  $("#colorchange").mouseover(function () {
    $("#colorchange").css("color", "red");
  });
  $("[src='Pictures/cat.jpeg']").click(function () {
    $("[src='Pictures/cat.jpeg']").attr("src", "Pictures/download.jpg");
  });
  $("#sizechange").click(function () {
    $("#sizechange").css("fontSize", "24px");
  });
  $("#text").click(function () {
    $("#text").html("<img src='Pictures/download.jpg'/>");
  });
  $("[src='Pictures/cat.jpg']").mouseover(function () {
    $(this).css("width", "250px");
  });
  $("[src='Pictures/cat.jpg']").mouseout(function () {
    $(this).css("width", "200px");
  });
  $("p").dblclick(function () {
    $(this).css("border", "outset 5px red");
  });
});
