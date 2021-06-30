<?php
session_start();
?>
<!DOCTYPE html>
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
								<li><a href="#">Agende</a></li>
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
			<div class = "container">
				<?php
				 include "funcoes.inc" ;
					if (empty( $_POST ))
					{
						include "form_faleConosco.inc" ;
					}else {
						ler_dados_faleConosco();
					}
				?>
			</div >		</br> </br> </br> </br> </br> </br>
				
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
	</bory>
    </body >
</html >
