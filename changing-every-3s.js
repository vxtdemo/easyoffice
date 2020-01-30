setInterval(myTimer, 3000);
var count = 1; slidename;

function myTimer() {
  count++;   if (count==4) count=1;
  slidename = './img/slide0' + count.toString() + ".jpg";
  document.getElementById("myslide").src = slidename;
}
