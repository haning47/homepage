<!-- #include file="DB.fun" -->
<HTML>

<head>
<title>台北市立松山高中網頁作品</title>
<style fprolloverstyle>A:hover {color: #FFFF00; background-color: #30008A}
</style>
<base target="_blank">
</head>
<BODY bgcolor="#FFFFFF">

<p align="center"><font face="標楷體" color="#004931" size="4"><b>台北市立松山高中98學年度學生網頁作品</b></font></p>   

<p align="center">※學生網頁作品純屬練習，若有侵犯版權敬請見諒，並告知網頁管理員處理。謝謝。</p>

<%
  Response.write "<font face=標楷體>"
  Set rs = GetMdbRecordset("homepage.mdb", "home")
  If rs Is Nothing Then
      Response.Write "GetMdbRecordset 呼叫失敗!"
      Response.End
  End If 
%>
<CENTER>
<div align="center">

<table border="1" width="95%" cellpadding="3" bordercolorlight="#663300" style="border-style: dashed; border-color: #000000">

<TR BGCOLOR=#004931>
<%
  
  ' Part I：輸出「抬頭名稱」
  For i=0 to 6
    ' if i=0 then w="5%"
     
     Response.Write "<TD width=" & w & "> <p align=center><font color=#FFFFFF>" & rs(i).Name & "</TD>"
  Next

%>
</TR>
<%
  ' Part II：輸出資料表的「內容」
  rs.MoveFirst		' 將目前資料錄移到第一筆
  c=0
  While Not rs.EOF	' 判斷是否過了最後一筆
      if c mod 2 = 0 then cr="#EFFFDC" else cr="#FFFFFF"
      Row = "<TR BGCOLOR=" & cr & ">"
     For i=0 to 6
        stri=rs(i).Name + "網站/" + rs(i).Name + rs(0)
        if i=0 then  
           Row = Row & "<TD> " & rs(i) & " </TD>"  
        elseif rs(i)<>"" And left(rs(i),1)<>" "  then
           Row = Row & "<TD> <p align=center >" & rs(i) & "</TD>"
        elseif rs(i)<>"" then
           Row = Row & "<TD> <a href=" & stri & "> <p align=center >" & rs(i) & "</TD>"
        else
           Row = Row & "<TD><p align=center>x</TD>"  
        end if
     Next
     Response.Write Row & "</TR>"
     c=c+1
     rs.MoveNext	' 移到下一筆
  Wend

%>
</TABLE></div></CENTER>
</BODY>
</HTML>