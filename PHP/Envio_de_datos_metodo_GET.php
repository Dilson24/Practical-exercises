<!DOCTYPE html>
<html lang="en">
<head>
   <meta charset="UTF-8">
   <meta http-equiv="X-UA-Compatible" content="IE=edge">
   <meta name="viewport" content="width=device-width, initial-scale=1.0">
   <title>Datos</title>
</head>
<body>
   <form action="Envio_de_datos_metodo_GET_vista.php" method="GET">
      <label for="nombre">Digite nombre: </label>
      <input type="text" name="nombre" id="nombre">
      <br>
      <label for="apellido">Digite apellido: </label>
      <input type="text" name="apellido" id="apellido">
      <br>
      <label for="cedula">Digite cédula: </label>
      <input type="number" name="cedula" id="cedula">
      <br>
      
      <input type="submit" value="Envíar" name="datos">
   </form>
</body>
</html>