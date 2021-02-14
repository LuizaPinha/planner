<?php
	include('cabecalho_conexao.php');
	
	$SQL = "SELECT * FROM sexta";
	
	// Executa o comando SQL
	$dados_recuperados = mysqli_query($con, $SQL);

	if(mysqli_num_rows($dados_recuperados) > 0){
		while( ($resultado = mysqli_fetch_array($dados_recuperados)) != null) {
			echo ' <div class="form-check">
                        <input class="form-check-input" type="checkbox" value="'.$resultado[0].'" id="'.$resultado[1].'" name="check">
                        <label class="form-check-label" for="defaultCheck1">
                            '.$resultado[1].' </br>
                        </label>
                    </div>
            ';
		}	
	}
	
	
	mysqli_close($con);

?>