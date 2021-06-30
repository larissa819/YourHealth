<section>
<form action="analise.php" method="post"> 
				<legend class="legenda"> <h3> Avaliacao </h3></legend>
				</br>
				
				<div class="field radiobox">
					<label>Como voce avalia o atendimento do nosso site ? </label> </br>
					<input type="radio" name="avaliacao" id="avaliacao" value="otimo" checked> <label>Otimo</label>
					<input type="radio" name="avaliacao" id="avaliacao" value="bom"><label>Bom</label>
					<input type="radio" name="avaliacao" id="avaliacao" value="regular"><label>Regular</label>
					<input type="radio" name="avaliacao" id="avaliacao" value="ruim"><label>Ruim</label>
					<input type="radio" name="avaliacao" id="avaliacao" value="pessimo"><label>Pessimo</label>
				</div>

				<div class="field radiobox">
					<label>Como voce avalia nossas especialidades ? </label> </br>
					<input type="radio" name="avalia" id="avalia" value="otimo" checked> <label>Otimo</label>
					<input type="radio" name="avalia" id="avalia" value="bom"><label>Bom</label>
					<input type="radio" name="avalia" id="avalia" value="regular"><label>Regular</label>
					<input type="radio" name="avalia" id="avalia" value="ruim"><label>Ruim</label>
					<input type="radio" name="avalia" id="avalia" value="pessimo"><label>Pessimo</label>
				</div>

					<div class="field radiobox">
					<label>Como voce avalia a facilidade do site ? </label> </br>
					<input type="radio" name="avaliar" id="avaliar" value="otimo" checked> <label>Otimo</label>
					<input type="radio" name="avaliar" id="avaliar" value="bom"><label>Bom</label>
					<input type="radio" name="avaliar" id="avaliar" value="regular"><label>Regular</label>
					<input type="radio" name="avaliar" id="avaliar" value="ruim"><label>Ruim</label>
					<input type="radio" name="avaliar" id="avaliar" value="pessimo"><label>Pessimo</label>
				</div>

				<div class="field">
					<label for="idade">Idade:</label>
					<input type="number" id="idade" name="idade" >
				</div> 

				<div class="field">
					<label> Sugestoes: </label>
					</br>
					<textarea rows="5" cols="40" maxlength="400"></textarea>
				</div>
				
				<div class="field"> 
					<label for="email">Nivel de satisfacao</label>
					<h5>-  pouco satisfatorio</h5>
					<input type="range" name="satisfacao" min="0" max="10">
					<h5> muito satisfatorio + </h5>
				</div>

				</br>
				<input type="submit" name="acao" value="Enviar">
			</form>
</section>