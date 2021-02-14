<?php
	//dados do formulário
    $t = $_POST['dia'];
    $tarefa = $_POST['tarefa'];

    //conexão com o BD
    include('../cabecalho_conexao.php');
        if($t == 1){
            $SQL = "INSERT INTO domingo (tarefa) 
            VALUE ('$tarefa')";
        }
        if($t == 2){
            $SQL = "INSERT INTO segunda (tarefa) 
            VALUE ('$tarefa')";
        }
        if($t == 3){
            $SQL = "INSERT INTO terca (tarefa) 
            VALUE ('$tarefa')";
        }
        if($t == 4){
            $SQL = "INSERT INTO quarta (tarefa) 
            VALUE ('$tarefa')";
        }
        if($t == 5){
            $SQL = "INSERT INTO quinta (tarefa) 
            VALUE ('$tarefa')";
        }
        if($t == 6){
            $SQL = "INSERT INTO sexta (tarefa) 
            VALUE ('$tarefa')";
        }
        if($t == 7){
            $SQL = "INSERT INTO sabado (tarefa) 
            VALUE ('$tarefa')";
        }
        if($t == 8){
            $SQL = "INSERT INTO metas (tarefa) 
            VALUE ('$tarefa')";
        }
        if($t == 9){
            $SQL = "INSERT INTO importante (tarefa) 
            VALUE ('$tarefa')";
        }

        $texto = "Tarefa Inserida com Sucesso<br>";
            
        include('../rodape_conexao.php');
        header("Location:../index.php");
?>