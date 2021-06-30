<section>
<form action="faleConosco.php" method="post"> 
				<legend class="legenda"> <h3> Fale Conosco </h3></legend>
				</br>
					<div class="field">
						<label for="nome">Nome:</label>
						<input type="text" id="nome" name="nome"  required>
					</div>
					
					<div class="field">
						<label for="email">Seu E-Mail:</label>
						<input type="email" id="email" name="email" required>
					</div>  

					<div class="field">
						<label for="telefone">Telefone:</label>
						<input type="text" id="telefone" name="telefone" >
					</div>
					<div class="field radiobox">
						<label> Selecione o Assunto: </label>
						<input type="radio" name="assunto" id="critica" value="critica" checked> <label>Critica</label>
						<input type="radio" name="assunto" id="duvida" value="duvida"> <label>Duvida</label>
						<input type="radio" name="assunto" id="sugestao" value="sugestao"><label> Sugestao </label>
					</div>

					<div class="field">
						<label> Sua Mensagem </label>
						</br>
						<textarea rows="5" cols="40" maxlength="400"></textarea>
					</div>
					

					<input type="submit" name="acao" value="Enviar">
				</form>
</section>