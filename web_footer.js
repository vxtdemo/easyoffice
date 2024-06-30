function menu_top_toggle(myObject) 
{
  menu_button_change(myObject);

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

document.getElementById("web_footer").innerHTML = '<table border=0 width="100%"><tr><td>© 2023 by Viking JSC.<td align="right"><small><small><a href="https://vxtgroup.com/contact" style="text-decoration: none">Thiết kế bởi Công ty Vạn Xuân (https://vxtgroup.com/contact)</a> | v2305 </table>';
