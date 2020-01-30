setInterval(myTimer, 1000);
var count = 0; slidename;

function myTimer() {
  count++;   if (count>=13) count=1;

  if (count==3 || count == 7 || count == 11)  $("#myslide").fadeOut(1000);

  if (count==4) {
    slidename = './img/slide02.jpg';
    document.getElementById("myslide").visible = false;
    document.getElementById("myslide").src = slidename;
    $("#myslide").fadeIn(1000);
  }

  if (count==8) {
    slidename = './img/slide03.jpg';
    document.getElementById("myslide").visible = false;
    document.getElementById("myslide").src = slidename;
     $("#myslide").fadeIn(1000);
  }

  if (count==12) {
    slidename = './img/slide01.jpg';
    document.getElementById("myslide").visible = false;
    document.getElementById("myslide").src = slidename;
    $("#myslide").fadeIn(1000);
  }

}

// <img id="myslide" src="./img/slide01.jpg" width="100%">
