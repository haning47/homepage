<!-- #include file="DB.fun" -->
<HTML>

<head>
<title>�x�_���ߪQ�s���������@�~</title>
<style fprolloverstyle>A:hover {color: #FFFF00; background-color: #30008A}
</style>
<base target="_blank">
</head>
<BODY bgcolor="#FFFFFF">

<p align="center"><font face="�з���" color="#004931" size="4"><b>�x�_���ߪQ�s����98�Ǧ~�׾ǥͺ����@�~</b></font></p>   

<p align="center">���ǥͺ����@�~���ݽm�ߡA�Y���I�Ǫ��v�q�Ш��̡A�çi�������޲z���B�z�C���¡C</p>

<%
  Response.write "<font face=�з���>"
  Set rs = GetMdbRecordset("homepage.mdb", "home")
  If rs Is Nothing Then
      Response.Write "GetMdbRecordset �I�s����!"
      Response.End
  End If 
%>
<CENTER>
<div align="center">

<table border="1" width="95%" cellpadding="3" bordercolorlight="#663300" style="border-style: dashed; border-color: #000000">

<TR BGCOLOR=#004931>
<%
  
  ' Part I�G��X�u���Y�W�١v
  For i=0 to 6
    ' if i=0 then w="5%"
     
     Response.Write "<TD width=" & w & "> <p align=center><font color=#FFFFFF>" & rs(i).Name & "</TD>"
  Next

%>
</TR>
<%
  ' Part II�G��X��ƪ��u���e�v
  rs.MoveFirst		' �N�ثe��ƿ�����Ĥ@��
  c=0
  While Not rs.EOF	' �P�_�O�_�L�F�̫�@��
      if c mod 2 = 0 then cr="#EFFFDC" else cr="#FFFFFF"
      Row = "<TR BGCOLOR=" & cr & ">"
     For i=0 to 6
        stri=rs(i).Name + "����/" + rs(i).Name + rs(0)
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
     rs.MoveNext	' ����U�@��
  Wend

%>
</TABLE></div></CENTER>
</BODY>
</HTML>