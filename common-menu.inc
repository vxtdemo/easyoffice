<div class="desktop-content">

<img src="./img/header-desktop.jpg" style="cursor:pointer" onClick="window.location.href='./';">

<br><table border=0 bgcolor=#0000FF width="100%" cellpadding=2>
<tr style="background-color: #0000FF; line-height: 1.4; ">
<td>&nbsp;&nbsp;&nbsp;&nbsp;<td><a href="./" class="desktop_menu">HOME
<td>
  <ul>
    <li>
      <a href="#" class="desktop_menu">GIỚI THIỆU</a>
      <ul>
        <li><a href="./gt-nha-may-viking.html" class="desktop_menu">Nhà máy Viking</a></li>
        <li><a href="./gt-nhan-luc-cong-ty.html" class="desktop_menu">Nhân lực công ty</a></li>
        <li><a href="./gt-ho-so-kinh-nghiem.html" class="desktop_menu">Hồ sơ kinh nghiệm</a></li>
        <li><a href="./gt-so-do-to-chuc.html" class="desktop_menu">Sơ đồ tổ chức</a></li>
        <li><a href="./gt-van-hoa-cong-ty.html" class="desktop_menu">Văn hóa công ty</a></li>
      </ul>
    </li>
  </ul>
<td><td><a href="./nha-thep-tien-che.html" class="desktop_menu">NHÀ THÉP TIỀN CHẾ</a>
<td><td><a href="./thi-cong-xay-dung.html" class="desktop_menu">THI CÔNG XÂY DỰNG CÔNG TRÌNH</a>
<td><td><a href="./he-san.html" class="desktop_menu">HỆ SÀN</a>
<td><td><a href="./thiet-bi-nang-ha.html" class="desktop_menu">THIẾT BỊ NÂNG HẠ</a>
<td><td><a href="./du-an-tieu-bieu.html" class="desktop_menu">DỰ ÁN TIÊU BIỂU</a>
<td><td><a href="./lien-he.html" class="desktop_menu">LIÊN HỆ</a>
</table>

</div>

<!--------- the mini style block below is just for up and down arrows ------------------------>
<style>
ec {
  border: solid black;
  border-width: 0 4px 4px 0;
  display: inline-block;
  padding: 3px;
  transition: 0.5s;
  border-color: green;
}
.up {
  transform: rotate(-135deg);
  -webkit-transform: rotate(-135deg);
}
.down {
  transform: rotate(45deg) translate(-3px,-3px);
  -webkit-transform: rotate(45deg) translate(-3px,-3px);
}
</style>

<div class="mobile-content">

<!--  img src="./img/header-mobile.jpg" width="90%"  -->

<!-- bgcolor="#4CAF50" GREEN -->

<table width="100%" border=0 bgcolor="#FFFFFF" cellpadding=0><tr style="background-color: #FFFFFF;">
<!--td style="padding: 11px 8px; font-size: 20px; font-weight: bold;" -->
<td style="padding: 0px 0px;">
<img src="./img/header-mobile.jpg" style="cursor:pointer" onClick="window.location.href='./';">

<td width="10%" valign="center" align="right" style="padding: 0px 10px;">
<a href="#" class="container" onclick="menu_top_toggle(this)">
  <div class="bar1"></div>
  <div class="bar2"></div>
  <div class="bar3"></div>
</a>
</table>

<div id="menu_top" class="menu_level_1">
  <a href="./">HOME</a>

  <a href="#" onclick="menu_level_2_toggle('menu_gioi_thieu', 'ec_gioi_thieu')" id="anchor_gioi_thieu">GIỚI THIỆU &nbsp;
  <ec id="ec_gioi_thieu" class="down"></ec>
  </a>

  <div id="menu_gioi_thieu" class="menu_level_2">
    <a href="./gt-nha-may-viking.html">Nhà máy Viking</a>
    <a href="./gt-nhan-luc-cong-ty.html">Nhân lực công ty</a>
    <a href="./gt-ho-so-kinh-nghiem.html">Hồ sơ kinh nghiệm</a>
    <a href="./gt-so-do-to-chuc.html">Sơ đồ tổ chức</a>
    <a href="./gt-van-hoa-cong-ty.html">Văn hóa công ty</a>
  </div>

  <a href="./nha-thep-tien-che.html">NHÀ THÉP TIỀN CHẾ</a>
  <a href="./thi-cong-xay-dung.html">THI CÔNG XÂY DỰNG CÔNG TRÌNH</a>
  <a href="./he-san.html">HỆ SÀN</a>
  <a href="./thiet-bi-nang-ha.html">THIẾT BỊ NÂNG HẠ</a>
  <a href="./du-an-tieu-bieu.html">DỰ ÁN TIÊU BIỂU</a>
  <a href="./lien-he.html">LIÊN HỆ</a>
</div>

</div>  <!-- end of div class mobile-content -->

<script>

function menu_top_toggle(myObject) 
{

  menu_button_change(myObject);
  menu_level_2_collapse_all();

  var x = document.getElementById("menu_top");
  if (x.style.display === "block") {
    x.style.display = "none";
  } else {
    x.style.display = "block";
  }
}

function menu_level_2_toggle(sMenuLevel2Name, sExpandCollapseItem)
{
  var x = document.getElementById(sMenuLevel2Name);
  var ec = document.getElementById(sExpandCollapseItem);

  if (x.style.display === "block") {
    x.style.display = "none";
    ec.className = "down" ;
  } else {
    x.style.display = "block";
    ec.className = "up" ;
  }
}

function menu_button_change(x) {
  x.classList.toggle("change");
}

function menu_level_2_collapse_all()
{
  document.getElementById("menu_gioi_thieu").style.display = "none";
}

</script>

