<?php
	$id = $_POST['check'];
	
	include('../../cabecalho_conexao.php');
	
	$SQL = "DELETE FROM domingo WHERE id = $id";
	//echo SQL;

	include('../../rodape_conexao.php');
	
	header('location:../../index.php');
?>