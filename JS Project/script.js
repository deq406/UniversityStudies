document.getElementById("nav").onmouseover = function (event) {
  //отслеживает нахождение мыши внутри блока
  let target = event.target;
  //отслеживаем клик
  if (target.className == "menu-item") {
    let s = target.getElementsByClassName("submenu");
    closeMenu();
    // $(".submenu").slideToggle();
    $(s[0]).slideToggle();
    s[0].style.display = "block";

    //массив, содержащий ложное меню
  }
};
document.onmouseover = function (event) {
  let target = event.target;
  console.log(event.target);
  if (target.className != "menu-item" && target.className != "submenu") {
    closeMenu();
  }
};
/*document.onmouseover = function (event) {
  var target = event.target;
  console.log(event.target);
  if (
    target.className != "menu-item" &&
    target.className != "submenu" &&
    target.className != "submenu-item"
  ) {
    closeMenu();
  }
};*/
function closeMenu() {
  //получение всех элементов подменю в блоке nav, присваивание display: none;
  let menu = document.getElementById("nav");
  let subm = document.getElementsByClassName("submenu");
  for (let i = 0; i < subm.length; i++) {
    subm[i].style.display = "none";
  }
}
$(".top-header-mail").mouseover(function () {
  $(this).css("color", "blue");
});
$(".top-header-mail").mouseout(function () {
  $(this).css("color", "grey");
});
$("");
$("label").click(function () {
  let checked = $("input", this).is(":checked");
  $("span", this).text(checked ? "Заказано" : "Заказать");
  $("span", this).css("color", checked ? "green" : "black");
  $("span", this).css("text-decoration", checked ? "underline" : "none");
});

function product(name, price, src) {
  this.name = name;
  this.price = price;
  this.src = src;

  this.add_item = function add_item(id) {
    $(id + "> img").attr("src", this.src);
    $(id + "> figcaption > div > .name").html("Название:" + this.name);
    $(id + "> figcaption > div > .price").html("Цена:" + this.price + "BYN");
  };
}
let product1 = new product(
  "Горшik",
  5,
  "https://mile.by/images/cache/_thumb_600x600xin_upload_iblock_bb5_1302732_1.jpg"
);

let product2 = new product(
  "Большое",
  10,
  "https://borisov-praktik.by/upload/iblock/2be/2beab78a71d5ef842839e486c5b20d6b.jpg"
);
let product3 = new product(
  "Бомба",
  25,
  "https://object.pscloud.io/cms/cms/Photo/img_0_1896_3485_0.jpeg"
);
let product4 = new product(
  "Кот",
  18,
  "https://cdn21vek.by/img/galleries/6434/323/11633_nashy_majstry_605b5352e08fb.jpeg"
);
let product5 = new product(
  "Моменто",
  3,
  "https://dommelochi.by/image/cache/catalog/products/Szemikowie/Greczynka-1000x1000.jpg"
);
let product6 = new product(
  "Желтый",
  7,
  "https://www.oma.by/upload/Sh/imageCache/c6e/e39/9bef532fffa89208539d105bc4696105.jpg"
);
let product7 = new product(
  "Панк",
  1,
  "https://sdelaysam.by/upload/iblock/678/678de3b34616effceb1987dc611b48bf.jpg"
);
let product8 = new product(
  "Попит",
  0.5,
  "https://static.fix-price.by/upload/resize_cache/iblock/449/330_330_0/449a05ff451915c143f7a1c4128d2f35.jpg"
);
product1.add_item("#one");
product2.add_item("#two");
product3.add_item("#three");
product4.add_item("#four");
product5.add_item("#five");
product6.add_item("#six");
product7.add_item("#seven");
product8.add_item("#eight");

$(function () {
  $(".minimized").click(function (event) {
    let i_path = $(this).attr("src");
    $("body").append(
      '<div id="overlay"></div><div id="magnify"><img src="' +
        i_path +
        '"><div id="close-popup"><i></i></div></div>'
    );
    $("#magnify").css({
      left: ($(document).width() - $("#magnify").outerWidth()) / 2,
      // top: ($(document).height() - $('#magnify').outerHeight())/2 upd: 24.10.2016
      top: ($(window).height() - $("#magnify").outerHeight()) / 2,
    });
    $("#overlay, #magnify").fadeIn("fast");
  });

  $("body").on("click", "#close-popup, #overlay", function (event) {
    event.preventDefault();
    $("#overlay, #magnify").fadeOut("fast", function () {
      $("#close-popup, #magnify, #overlay").remove();
    });
  });
});

$(".top-header-bag").click(
  function () {
    let newWin = window.open("about:blank");
    let checkboxes = document.getElementsByName("check");
    let checkboxescheked = [];
    for (let index = 0; index < checkboxes.length; index++) {
      if (checkboxes[index].checked) {
        checkboxescheked.push(checkboxes[index].id);
      }
    }
    let newBody = newWin.document.body;

    if (checkboxescheked.length == 0) {
      newWin.alert("Вы ничего не заказали");
    } else {
      $(newBody).append(
        "<h1 height='100px' display='block' width='100px'>Ваш заказ:</h1>"
      );
    }
    let sum = 0;
    newBody.classList.add("grid");
    let css_link = $("<link>", {
      rel: "stylesheet",
      type: "text/css",
      href: "style.css",
    });
    css_link.appendTo(newWin.document.head);

    for (let counter = 0; counter < checkboxescheked.length; counter++) {
      switch (checkboxescheked[counter]) {
        case "subone":
          $(newBody).append(
            `<figure style='display:block'>
            <img src='${product1.src}' width="300"  alt="something">
            <figcaption>
            <span>${product1.name}</span>
            <span>${product1.price}BYN</span>
            </figcaption>
            </figure> `
          );
          sum += product1.price;
          break;
        case "subtwo":
          $(newBody).append(
            `<figure style='display:block'>
            <img src='${product2.src}' width="300"  alt="something">
            <figcaption>
            <span>${product2.name}</span>
            <span>${product2.price}BYN</span>
            </figcaption>
            </figure> `
          );
          sum += product2.price;
          break;
        case "subthree":
          $(newBody).append(
            `<figure style='display:block'>
            <img src='${product3.src}' width="300"  alt="something">
            <figcaption>
            <span>${product3.name}</span>
            <span>${product3.price}BYN</span>
            </figcaption>
            </figure> `
          );
          sum += product3.price;
          break;
        case "subfour":
          $(newBody).append(
            `<figure style='display:block'>
            <img src='${product4.src}' width="300"  alt="something">
            <figcaption>
            <span>${product4.name}</span>
            <span>${product4.price}BYN</span>
            </figcaption>
            </figure> `
          );
          sum += product4.price;
          break;
        case "subfive":
          $(newBody).append(
            `<figure style='display:block'>
            <img src='${product5.src}' width="300"  alt="something">
            <figcaption>
            <span>${product5.name}</span>
            <span>${product5.price}BYN</span>
            </figcaption>
            </figure> `
          );
          sum += product5.price;
          break;
        case "subsix":
          $(newBody).append(
            `<figure style='display:block'>
            <img src='${product6.src}' width="300"  alt="something">
            <figcaption>
            <span>${product6.name}</span>
            <span>${product6.price}BYN</span>
            </figcaption>
            </figure> `
          );
          sum += product6.price;
          break;
        case "subseven":
          $(newBody).append(
            `<figure style='display:block'>
            <img src='${product7.src}' width="300"  alt="something">
            <figcaption>
            <span>${product7.name}</span>
            <span>${product7.price}BYN</span>
            </figcaption>
            </figure> `
          );
          sum += product7.price;
          break;
        case "subeight":
          $(newBody).append(
            `<figure style='display:block'>
            <img src='${product8.src}' width="300"  alt="something">
            <figcaption>
            <span>${product8.name}</span>
            <span>${product8.price}BYN</span>
            </figcaption>
            </figure> `
          );
          sum += product8.price;
          break;
      }
    }
    $(newBody).append(`Общая сумма:${sum}BYN`);
  }

  /*let values = $("input").is(":checked");
  if (values) {
  }
  console.log(values);
  let checkboxescheked = [];
  for (let index = 0; index < checkboxes.length; index++) {
    if (checkboxes[index].checked) {
      checkboxescheked.push(checkboxes[index].value);
    }
  }
  newWin.document.write(values);*/

  /*let body = newWin.document.body;
  let div = newWin.document.createElement("div");
  let input = newWin.document.createElement("button");
  div.append(input);
  body.append(div);*/
);

$("input[name='check']", function () {
  $("input[name='check']").attr("value");
});
/*console.log(document.getElementsByClassName("price")[0].innerHTML);
console.log($("input[name='check'] ~ .price").innerHTML);
console.log($("figcaption + span").html);
let checkboxes = document.getElementsByName("check");
let checkboxescheked = [];
document.onclick = function () {
  for (let index = 0; index < checkboxes.length; index++) {
    if (checkboxes[index].checked) {
      console.log(checkboxes[index].id);
    }
  }
};*/
