function Student(name, surname, physics, maths, informatics) {
  this.name = name;
  this.surname = surname;
  this.physics = physics;
  this.maths = maths;
  this.informatics = informatics;
  this.fio = function fio() {
    return this.name + "\n" + this.surname + "<br/>";
  };
  this.avgmark = function avgmark() {
    return (
      Math.round((this.physics + this.maths + this.informatics) / 3) + "<br/>"
    );
  };
}
