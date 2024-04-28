# Let's consider an infix expression and convert it to a postfix expression

<strong><ins>Infix expression</ins></strong>: $A + (B * C - (D / E \uparrow F) * G) * H$.

$(A + (B * C - (D / E \uparrow F) * G) * H)$

<table>
<tr>
<td colspan = "2"><strong>Symbol Scanned</strong</td>
<td><strong>Stack</strong></td>
<td><strong>Expression</strong></td>
</tr>

<tr>
<td>$1$</td>
<td>$A$</td>
<td>$($</td>
<td>$A$</td>
</tr>

<tr>
<td>$2$</td>
<td>$+$</td>
<td>$(\ +$</td>
<td>A</td>
</tr>

<tr>
<td>$3$</td>
<td>$($</td>
<td>$(\ +\ ($</td>
<td>$A$</td>
</tr>

<tr>
<td>$4$</td>
<td>$B$</td>
<td>$(\ +\ ($</td>
<td>$A\ B$</td>
</tr>

<tr>
<td>$5$</td>
<td>$*$</td>
<td>$(\ +\ (\ *$</td>
<td>$A\ B$</td>
</tr>

<tr>
<td>$6$</td>
<td>$C$</td>
<td>$(\ +\ (\ *$</td>
<td>$A\ B\ C$</td>
</tr>

<tr>
<td>$7$</td>
<td>$-$</td>
<td>$(\ +\ (\ -$</td>
<td>$A\ B\ C\ *$</td>
</tr>

<tr>
<td>$8$</td>
<td>$($</td>
<td>$(\ +\ (\ -\ ($</td>
<td>$A\ B\ C\ *$</td>
</tr>

<tr>
<td>$9$</td>
<td>$D$</td>
<td>$(\ +\ (\ -\ ($</td>
<td>$A\ B\ C\ *\ D$</td>
</tr>

<tr>
<td>$10$</td>
<td>$/$</td>
<td>$(\ +\ (\ -\ (\ /$</td>
<td>$A\ B\ C\ *\ D$</td>
</tr>


<tr>
<td>$11$</td>
<td>$E$</td>
<td>$(\ +\ (\ -\ (\ /$</td>
<td>$A\ B\ C\ *\ D\ E$</td>
</tr>

<tr>
<td>$12$</td>
<td>$\uparrow$</td>
<td>$(\ +\ (\ -\ (\ /\ \uparrow$</td>
<td>$A\ B\ C\ *\ D\ E$</td>
</tr>

<tr>
<td>$13$</td>
<td>$F$</td>
<td>$(\ +\ (\ -\ (\ /\ \uparrow$</td>
<td>$A\ B\ C\ *\ D\ E\ F$</td>
</tr>

<tr>
<td>$14$</td>
<td>$)$</td>
<td>$(\ +\ (\ -$</td>
<td>$A\ B\ C\ *\ D\ E\ F\ \uparrow\ /\ $</td>
</tr>

<tr>
<td>$15$</td>
<td>$*$</td>
<td>$(\ +\ (\ -\ *$</td>
<td></td>
</tr>

<tr>
<td>$16$</td>
<td>$G$</td>
<td>$(\ +\ (\ -\ *$</td>
<td>$A\ B\ C\ *\ D\ E\ F\ \uparrow\ /\ G$</td>
</tr>

<tr>
<td>$17$</td>
<td>$)$</td>
<td>$(\ +$</td>
<td>$A\ B\ C\ *\ D\ E\ F\ \uparrow\ /\ G\ *\ -$</td>
</tr>

<tr>
<td>$18$</td>
<td>$*$</td>
<td>$(\ +\ *$</td>
<td>$A\ B\ C\ *\ D\ E\ F\ \uparrow\ /\ G\ *\ -$</td>
</tr>

<tr>
<td>$19$</td>
<td>$H$</td>
<td>$(\ +\ *$</td>
<td>$A\ B\ C\ *\ D\ E\ F\ \uparrow\ /\ G\ *\ -\ H$</td>
</tr>

<tr>
<td>$20$</td>
<td>$)$</td>
<td></td>
<td>$A\ B\ C\ *\ D\ E\ F\ \uparrow\ /\ G\ *\ -\ H\ *\ +$</td>
</tr>

</table>

<p align = "center">
&#9678; &#9678; &#9678;
</p>
