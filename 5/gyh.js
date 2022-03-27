var h = [];
var t = [];
var y = 1;
var o;
o = prompt("Введите число");
let numDec = 0;
numDec = Number(o);
var d = numDec.toString(2);
var b = d.length;
for (let i = 0; i<b; i++){
    h[i]=0;
}
    h.splice(y-1,1);
    h.splice(y,0,1);
    for (let i = 0; i < 5; i++){
        if (d[i] == h[i]){
            t[i]=0;
        } else t[i] = 1;
    }
console.log(t);
