<section>
	<form action="cadastro.php" method="post"> 
				<legend class="legenda"> <h3> Cadastre-se </h3></legend>
				</br>
				<h4 class="legenda"> Dados Pessoais </h4>
				</br>
				<div class="field">
					<label for="nome"> Nome Completo:</label>
					<input type="text" id="nome" name="nome"required>
				</div>

				<div class="field">
					<label for="email">E-Mail:</label>
					<input type="email" id="email" name="email"  required>
				</div> 
				
				<div class="field"> 
					<label for="senha">Sua senha</label>
					<input id="senha" name="senha" required="required" type="password" placeholder="ex. 1234"/>
				</div>

				<div class="field">
					<label for="telefone"> Telefone:</label>
					<input type="text" id="telefone" name="telefone" placeholder="(00)">
				</div>      

				<div class="field">
					<label for="data"> Data de Nascimento:</label> 
					<input type="date" name="nascimento">
				</div>

				<div class="field radiobox">
					<label>Genero: </label>
					<input type="radio" name="genero" id="genero" value="masculino" checked> <label>Maculino</label>
					<input type="radio" name="genero" id="genero" value="feminino"><label>Feminino</label>
				</div>

				<div class="field radiobox">
					<label>Possui alguma deficiencia: </label>
					<input type="radio" name="possui" id="sim" value="sim" checked><label>Sim</label>
					<input type="radio" name="possui" id="nao" value="nao"><label>Nao</label>
				</div>

				<div class="field radiobox">
					<label>Deseja receber nossas novidades? </label>
					<input type="radio" name="novidades" id="sim" value="sim" checked><label>Sim</label>
					<input type="radio" name="novidades" id="nao" value="nao"><label>Nao</label>
				</div>
				</br>
				<h4 class="legenda"> Endereco </h4>
				</br>
				<div class="field">
					<label for="nome"> Cep:</label>
					<input type="number" id="cep" name="cep" >
				</div>

				<div class="field">
					<label for="rua">Rua:</label>
					<input type="text" id="rua" name="rua" >
				</div> 
				
				<div class="field">
					<label for="numero"> Numero da residencia:</label>
					<input type="number" id="numero" name="numero" >
				</div>      

				<div class="field">
					<label for="cidade"> Cidade:</label> 
					<input type="text" name="cidade">
				</div>

					<div class="field">
					<label for="estado">Estado:</label>
					<input type="text" id="estado" name="estado" >
				</div>      

				<div class="field">
					<label for="complemento">Complemento:</label> 
					<input type="text" name="complemento">
				</div>
				<input type="submit" name="acao" value="Enviar">
			</form>

</section>	