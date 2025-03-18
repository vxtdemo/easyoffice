document.write(`
    <div class="mobile-content">

    <!--  img src="./img/header-mobile.jpg" width="90%"  -->

    <!-- bgcolor="#4CAF50" GREEN -->

    <table width="100%" border=0 bgcolor="#FFFFFF" cellpadding=0><tr style="background-color: #FFFFFF;">
    <!--td style="padding: 11px 8px; font-size: 20px; font-weight: bold;" -->
    <td style="padding: 0px 0px;">
        <img src="./img/header-mobile.jpg" style="cursor:pointer" onClick="window.location.href='./index.html';">

    <td width="10%" valign="center" align="right" style="padding: 0px 10px;">
        <a href="#" class="container_mobile_menu" onclick="menu_top_toggle(this)">
        <div class="bar1"></div>
        <div class="bar2"></div>
        <div class="bar3"></div>
        </a>
    </table>

    <div id="menu_top" class="menu_level_1">
    <a href="./index.html">HOME</a>

    <a href="./gioi-thieu-cong-ty.html">GIỚI THIỆU CÔNG TY + NHÂN LỰC<br>Introduction + Human resource</a>
    <a href="./nang-luc-thiet-bi.html">NĂNG LỰC THIẾT BỊ <br> Equipment Capacity</a>
    <a href="./khach-hang-tieu-bieu.html">KHÁCH HÀNG + CÔNG TRÌNH TIÊU BIỂU <br> Clients + Typical projects</a>
    <a href="./lien-he.html">LIÊN HỆ</a>
    </div>

    </div>  <!-- end of div class mobile-content -->
`);
