<!DOCTYPE html>
<html>
	<head>
		<meta charset="utf-8">
		<title> Your Health</title>
		<link href="css/bootstrap.min.css" rel="stylesheet">
		<link href="css/font-awesome.min.css" rel="stylesheet">		
		<link href="css/styli.css" rel="stylesheet">
		<link href="css/formulario.css" rel="stylesheet">
		<link rel="shortcut icon" href="#">
	</head>
	
	<body>
	
			<div class="wrapper">
			<header>
				<nav class="navbar navbar-default" role="navigation">
					<div class="container">
						<div class="navbar-header">
							<button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1">
							</button>
							<a class="navbar-brand" href="#"><img class="img-responsive" src="img/logo.jpeg" alt="Logo" /></a>
						</div>
						<div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
							<ul class="nav navbar-nav navbar-right">
								<li><a href="index.html">Login</a></li>
								<li><a href="home.html">Home</a></li>
								<li><a href="pesquisa.html">Pesquisa</a></li>
								<li><a href="especialidades.html">Especialidades</a></li>
								<li><a href="quemSomos.html">Quem Somos</a></li>
								<li class="dropdown">
									<a href="#" class="dropdown-toggle" data-toggle="dropdown"> Outros <span class="caret"></span></a>
									<ul class="dropdown-menu" role="menu">
										<li><a href="cadastro.php"> Cadastro </a></li>
										<li><a href="faleConosco.php">Fale Conosco</a></li>
										<li><a href="campanhas.html">Campanhas</a></li>
										<li><a href="analise.php">Avalie Nosso Site</a></li>
										<li><a href="ajuda.html">Ajuda</a></li>
									</ul>
								</li>
								<li><a href="perfil.php">Perfil</a></li>
								<li><a href="index.html">Sair</a></li>
							</ul>
						</div>
					</div>
				</nav>
			</header>
			<form action="perfil.php" method="post"> 
				<legend class="legenda"> <h3> Perfil </h3></legend>
			</form>
			<div class="works" id="work">
				<div class="container">
					<div class="row">
						<div class="col-md-4">
							<div class="work-item">
								<img class="img-responsive" src="img/cadastro1.jpg" alt="" />
								<div id="passar_mouse"> <h3> FOTO </h3>
								<div id="mostrar"> <input type="file" name="imagem" >
								</div></div>
							</div>
						</div>
						<div class="col-md-15">
						<div class="citacao">
							<div>
								<h5> Em geral, nove decimos da nossa felicidade baseiam-se exclusivamente na saude. Com ela, 
								tudo se transforma em fonte de prazer.<br> <br>
								- Arthur Schopenhauer
								</h5>
							</div>
						</div>
						</div>
					</div>
				</div>
			</div>
			</br> 
			</br> 
			</br> 


			<table border="1">
                <tr>
                    <th> Nome</th>
                    <th> E-mail</th>
                    <th> Telefone</th>
                    <th> Data </th>
                    <th> Genero</th>
                    <th> Cep </th>
                    <th> Rua </th>
                    <th> Numero</th>
                    <th> Cidade </th>
                    <th> Estado </th>
					<th> Editar </th>
                </tr>
                <?php
					
                    $arquivo =fopen("cadastro.txt", "r");

                    while(!feof($arquivo))
                    {
                        $nome= fgets($arquivo);
                        $email = fgets($arquivo);
                        $telefone = fgets($arquivo);
                        $data = fgets($arquivo);
                        $genero = fgets($arquivo); 
                        $cep = fgets($arquivo); 
                        $rua = fgets($arquivo); 
                        $numero = fgets($arquivo);
                        $cidade = fgets($arquivo);
                        $estado = fgets($arquivo);
                        
						if($nome ==$nome)
						{
							if(!empty($nome)){
                        echo "
                            <tr>
                                <td> $nome</td>
                                <td> $email</td>
                                <td> $telefone</td>
                                <td> $data</td>
                                <td> $genero</td>
                                <td> $cep</td>
                                <td> $rua</td>
                                <td> $numero</td>
								<td> $cidade</td>
								<td> $estado</td>
								<td> <a href='#.html'> Editar </a> </td>
                            </tr>
                        ";
                        }
						}
                        

                    }

                    fclose($arquivo);
                ?>
        </table>
			</br> </br>  
			</br> </br>  
			</br> </br>  
			</br> </br>  
		
				<footer>
				<div class="container">
					<p><a href="index.html">Login</a> |<a href="home.html">Home</a> | <a href="pesquisa.html">Pesquisa</a>  | <a href="especialidades.html">Especialidades</a> | <a href="quemSomos.html">Quem Somos</a>  | <a href="perfil.php">Perfil</a></p>
					<img class="img-responsive" src="img/logo.jpeg" alt="" />
					<div class="social">
						<a href="#"><i class="fa fa-facebook"></i></a>
						<a href="#"><i class="fa fa-dribbble"></i></a>
					</div>
					<p class="copy-right">Copyright &copy; 2021 IFSP-Araraquara-Sp  | Designed By : Larissa e Mylena</p>
				</div>
			</footer>

		</div>
		<script src="js/jquery.js"></script>
		<script src="js/bootstrap.min.js"></script>
		<script src="js/respond.min.js"></script>
		<script src="js/html5shiv.js"></script>
		<script src="js/custom.js"></script>
	</body>	
</html>