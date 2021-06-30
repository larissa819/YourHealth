  <?php
        function ler_dados_analise()
    {
        if (!isset($_SESSION["contadorAnalise"]))
        {
            //registra as variáveis na sessão
            $_SESSION["avaliacao"][0] = $_POST["avaliacao"];
            $_SESSION["avalia"][0] = $_POST["avalia"];
            $_SESSION["avaliar"][0] = $_POST["avaliar"]; 
            $_SESSION["contadorAnalise"] = 0;
        } else {
            $_SESSION["contadorAnalise"]++;
            $contador = $_SESSION["contadorAnalise"];
            $_SESSION["avaliacao"][0] = $_POST["avaliacao"];
            $_SESSION["avalia"][0] = $_POST["avalia"];
            $_SESSION["avaliar"][0] = $_POST["avaliar"];  
        }
       echo "<article>
            <br/><br/>
            <div class= ' center '>
                <h3 class='h3'> Sua avaliacao foi enviada com sucesso.</h3>
                <a href='analise.php' class='btn btn-defaul'> Voltar para pagina de analise </a> 
                <a href='home.html' class='btn btn-defaul'> Voltar para a pagina inicial </a> 
            </div>
            <br/><br/><br/><br/><br/><br/><br/><br/><br/><br/><br/><br/>
            <br/><br/><br/><br/>
        </article>" ;
        }
          function ler_dados_cadastro()
    {
        if(!empty($_POST["nome"])){
				 $nome= $_POST["nome"];
				 $email = $_POST["email"];
				 $senha = $_POST["senha"];
				 $telefone = $_POST["telefone"];
				 $data= $_POST["nascimento"];
                 $genero= $_POST["genero"];
                 $possui= $_POST["possui"];
				 $cep = $_POST["cep"];
				 $rua = $_POST["rua"];
				 $numero = $_POST["numero"];
				 $cidade = $_POST["cidade"];
				 $estado = $_POST["estado"];

				 $arquivo = fopen("cadastro.txt", "a");

				 fwrite($arquivo, $nome. "\r\n");
				 fwrite($arquivo, $email. "\r\n");
				 fwrite($arquivo, $telefone. "\r\n");
				 fwrite($arquivo, $data. "\r\n");
                 fwrite($arquivo, $genero. "\r\n");
				 fwrite($arquivo, $cep. "\r\n");
				 fwrite($arquivo, $rua. "\r\n");
				 fwrite($arquivo, $numero. "\r\n");
				 fwrite($arquivo, $cidade. "\r\n");
				 fwrite($arquivo, $estado. "\r\n");

				 fclose($arquivo);

				 echo"<div class= ' center '>
						<h3 class='h3'> Cadastrado com sucesso.</h3>
						<a href='cadastro.php' class='btn btn-defaul'> Voltar para pagina de cadastro </a>  
						<a href='home.html' class='btn btn-defaul'> Voltar para a pagina inicial </a> 
                        <a href='perfil.php' class='btn btn-defaul'> Ver o seu Perfil </a> 
                         <br/><br/><br/><br/><br/><br/><br/><br/><br/><br/><br/><br/>
                            <br/><br/><br/><br/>
					</div>";
			}
            else{
                 echo"<div class= ' center '>
						<h3 class='h3'> Nao tem cadastro</h3>
						<a href='cadastro.php' class='btn btn-defaul'> Ir para a pagina de cadastro </a>   
                         <br/><br/><br/><br/><br/><br/><br/><br/><br/><br/><br/><br/>
                            <br/><br/><br/><br/>
					</div>";
            }
        }
        function ler_dados_faleConosco()
    {
        if (!isset($_SESSION["contadorfaleConosco"]))
        {
            $_SESSION["nomesFC"][0] = $_POST["nome"];
            $_SESSION["emailFC"][0] = $_POST["email"]; 
            $_SESSION["telefoneFC"][0] = $_POST["telefone"];
            $_SESSION["contadorfaleConosc"] = 0;  //registra as variáveis na sessão
          
        } else {
            $_SESSION["contadorfaleConosc"]++;
            $contador = $_SESSION["contadorfaleConosc"];
            $_SESSION["nomesFC"][0] = $_POST["nome"];
            $_SESSION["emailFC"][0] = $_POST["email"]; 
            $_SESSION["telefoneFC"][0] = $_POST["telefone"];
        }
        echo "<article>
            <br/><br/>
            <div class= ' center '>
                <h3 class='h3'> Enviado com sucesso.</h3>
                <a href='faleConosco.php' class='btn btn-defaul'> Voltar para pagina do fale-conosco </a> 
                <a href='home.html' class='btn btn-defaul'> Voltar para a pagina inicial </a> 
            </div>
            <br/><br/><br/><br/><br/><br/><br/><br/><br/><br/><br/><br/>
            <br/><br/><br/><br/>
        </article>" ;
    }
?>