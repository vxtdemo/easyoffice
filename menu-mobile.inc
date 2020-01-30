<title>v8
 Cty CP Viking
</title>


<img src="header-mobile.jpg" width="100%">

<!-- Top Navigation begin. bgcolor="#4CAF50" GREEN -->

<table width="100%" border=0 bgcolor="#FFFFFF"><tr>
<!--td style="padding: 11px 8px; font-size: 20px; font-weight: bold;" -->
<td style="padding: 0px 0px;"><img src="mylogo.png">

<td width="10%" valign="bottom" align="right" style="padding: 0px 15px;">
<a href="#" class="container" onclick="menu_top_toggle(this)">
  <div class="bar1"></div>
  <div class="bar2"></div>
  <div class="bar3"></div>
</a>&nbsp;&nbsp;
</table>

<div id="menu_top" class="menu_level_1">
  <a href="#news">News</a>

  <a href="#" onclick="menu_level_2_toggle('menu_gioi_thieu')">GIOI THIEU...</a>
  <div id="menu_gioi_thieu" class="menu_level_2">
    <a href="#about">Gioi thieu doi ngu can bo</a>
    <a href="#about">Van hoa cong ty</a>
  </div>

  <a href="#news">Thiet ke nha xuong</a>

  <a href="#" onclick="menu_level_2_toggle('menu_khach_hang')">Cong trinh tieu bieu...</a>
  <div id="menu_khach_hang" class="menu_level_2">
    <a href="#about">Khach hang Van phong</a>
    <a href="#about">Khach hang Nha xuong</a>
    <a href="#about">Khu trien lam</a>
  </div>

  <a href="#about">About</a>
</div>

<!-- Top Navigation end -->



<script>

function menu_top_toggle(myObject) 
{

  menu_button_change(myObject);
  menu_level_2_collaps_all();

  var x = document.getElementById("menu_top");
  if (x.style.display === "block") {
    x.style.display = "none";
  } else {
    x.style.display = "block";
  }
}

function menu_level_2_toggle(sMenuLevel2Name)
{
  menu_level_2_collaps_all();

  var x = document.getElementById(sMenuLevel2Name);
  if (x.style.display === "block") {
    x.style.display = "none";
  } else {
    x.style.display = "block";
  }
}

function menu_button_change(x) {
  x.classList.toggle("change");
}

function menu_level_2_collaps_all()
{
  document.getElementById("menu_gioi_thieu").style.display = "none";
  document.getElementById("menu_khach_hang").style.display = "none";
}

</script>

