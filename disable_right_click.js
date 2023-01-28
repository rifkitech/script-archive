<script type='text/javascript'>
//Disable cut copy paste
document.oncopy = function(){alert(&quot;Copy option disabled&quot;); return false;}
document.oncut = function(){alert(&quot;Cut option disabled&quot;);return false;}
document.onpaste = function(){alert(&quot;Paste option disabled&quot;);return false;}
//Disable mouse right click
document.onmousedown = disableclick;
msg = &quot;Right Click not permitted&quot;;
function disableclick(e)
{
     if(event.button==2)
     {
     alert(msg);
     return false;
   }
}</script>
