<!DOCTYPE html>
<html>
<head>
<script>
function confirmInput() {
  fname = document.forms[0].fname.value;
  document.write("Hello " + fname + "! DO you like my application?");
}
</script>
</head>
<body>

<form onsubmit="confirmInput()" action="https://mohsin-code.github.io/">
  Enter your name: <input id="fname" type="text" size="20">
  <input type="submit">
</form>

</body>
</html>
