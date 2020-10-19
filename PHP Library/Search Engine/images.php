<!DOCTYPE html>
<html>



<head>


	<title> Images Found</title>



	<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css" integrity="sha384-Gn5384xqQ1aoWXA+058RXPxPg6fy4IWvTNh0E263XmFcJlSAwiGgFAW/dAiS6JXm" crossorigin="anonymous">



    <style>
        

       .result

       {
              margin-left: 10%; margin-right: 25%; margin-top: 12px;


       }




    </style>



</head>




<body>







         <div class="container-fluid">









                        <?php




                           $search = $_GET["id"];



                         $conn = mysqli_connect("localhost", "root", "");
                                 mysqli_select_db($conn, "search");
                                        

                        $sql = "select * from website where site_key like '%$search%' ";


                           $rs  = mysqli_query($conn, $sql);

                           while ($row = mysqli_fetch_array($rs))



                            {

                              echo "<a href='img/$row[5]' download><img src='img/$row[5]' height='200px'
                              style='margin-top:15px'></a> ";
                            
                           }






















                        ?>


                            
















         </div>









            <script src="https://code.jquery.com/jquery-3.2.1.slim.min.js" integrity="sha384-KJ3o2DKtIkvYIK3UENzmM7KCkRr/rE9/Qpg6aAZGJwFDMVNA/GpGFF93hXpG5KkN" crossorigin="anonymous"></script>
            <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.12.9/umd/popper.min.js" integrity="sha384-ApNbgh9B+Y1QKtv3Rn7W3mgPxhU9K/ScQsAP7hUibX39j7fakFPskvXusvfa0b4Q" crossorigin="anonymous"></script>
            <script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/js/bootstrap.min.js" integrity="sha384-JZR6Spejh4U02d8jOt6vLEHfe/JQGiRRSQQxSfFWpi1MquVdAyjUar5+76PVCmYl" crossorigin="anonymous"></script>
</body>


</html>