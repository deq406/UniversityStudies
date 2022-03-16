function Group(groupNumber, spec, kolich) {
  this.groupNumber = groupNumber;
  this.spec = spec;
  this.kolich = kolich;

  this.add_stud = function add_stud(count) {
    this.kolich += count;
    document.write(
      "В группу\n" +
        this.groupNumber +
        "\nдобавили\n" +
        count +
        "\nстудентов\n" +
        "<br/>"
    );
    this.sub_stud = function sub_stud(count) {
      this.kolich -= count;
      document.write(
        "Из группы\n" +
          this.groupNumber +
          "\nудалили\n" +
          count +
          "\nстудентов\n" +
          "<br/>"
      );
    };
  };
}
/*this.add_stud = function add_stud() {
    groupNumber = +prompt("Введите пожалуйста номер группы");
    k = +prompt("Введите кол-во студентов которых мы хотим добавить");
    this.kolich += k;
    this.groupNumber = groupNumber;
    document.write(
      "В группу\n" +
        this.groupNumber +
        "\nдобавили\n" +
        k +
        "\nстудентов\n" +
        "<br/>"
    );
    alert(
      "В группу\n" +
        this.groupNumber +
        "\nдобавили\n" +
        k +
        "\nстудентов.Сейчас в группе\n" +
        this.kolich +
        "\nстудентов\n" +
        "<br/>"
    );*/
