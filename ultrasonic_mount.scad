//15.74mm dia

//10.42mm gap

difference() {
    translate([2,-5,0.5]) cube([17.55,10,8]);
    cylinder(10, 10.5/2, 10.5/2);
    translate([5.21+(15.74),0,0]) cylinder(10, 10.5/2, 10.5/2);
}