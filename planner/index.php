<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <title>Planner</title>
    <link rel="stylesheet" href="css/estilo.css"></link>
    <link rel="stylesheet" type="text/css" href="css/bootstrap.min.css" />
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.1.3/css/bootstrap.min.css" integrity="sha384-MCw98/SFnGE8fJT3GXwEOngsV7Zt27NXFoaoApmYm81iuXoPkFOJwJ8ERdknLPMO" crossorigin="anonymous"></link>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.1.3/js/bootstrap.min.js" integrity="sha384-ChfqqxuZUCnJSK3+MXmPNIyE6ZbWh2IMqE241rYiqJxyMiZ6OW/JmZQ5stwEULTy" crossorigin="anonymous"></script>
</head>

<body>
<center>
    <div class="card mt-5 mb-5" style="width:90%; height:100%;">
        <div class="card-header body">
            <p>
                <b class="titulo">Planner</b>
            </p>
            <div class="importante">
            <div class="card text-white bg-secondary mb-3" style="width:100%; height:100%;">
              <div class="card-header">Importante</div>
              <div class="card-body">
                <!-- rodapé -->
                <td><?php include "php/importante.php"?></td>
                <td style="width:10%;">
                  </br>
                  <button type="button" class="btn btn-info texto" data-toggle="modal" data-target="#importante">Escrever</button>
                  <button type="button" class="btn btn-danger texto" data-toggle="modal" data-target="#remo_importante">Remover</button>
                </td>
              </div>
            </div>
          </div>
            <div class="metas">
            <div class="card text-white bg-info mb-3" style="width:100%; height:100%;">
              <div class="card-header">Metas</div>
              <div class="card-body">
                <!-- rodapé -->
                <td><?php include "php/metas.php"?></td>
                <td style="width:10%;">
                  </br>
                  <button type="button" class="btn btn-secondary texto" data-toggle="modal" data-target="#metas">Escrever</button>
                  <button type="button" class="btn btn-danger texto" data-toggle="modal" data-target="#remo_metas">Remover</button>
                </td>
              </div>
            </div>
          </div>
            <table class="t table table-hover">
                <thead>
                  <tr>
                    <th scope="col" class="mr-1">Dia da semana</th>
                    <th style="width:85%;" scope="col" class="tabela" colspan="2">Tarefas</th>
                  </tr>
                </thead>
                <tbody>
                  <tr class="tabela">
                    <th scope="row">Domingo</th>
                    <td><?php include "php/tarefasDomingo.php"?></td>
                    <td style="width:20%;">
                      <button type="button" class="btn btn-outline-info texto" data-toggle="modal" data-target="#domingo">Escrever</button>
                      <button type="button" class="btn btn-outline-danger texto" data-toggle="modal" data-target="#remo_domingo">Remover</button>
                    </td>
                  </tr>
                  <tr>
                    <th scope="row">Segunda</th>
                    <td><?php include "php/tarefasSegunda.php"?></td>
                    <td style="width:10%;">
                      <button type="button" class="btn btn-outline-info texto" data-toggle="modal" data-target="#segunda">Escrever</button>
                      <button type="button" class="btn btn-outline-danger texto" data-toggle="modal" data-target="#remo_segunda">Remover</button>
                    </td>
                  </tr>
                  <tr>
                    <th scope="row">Terça</th>
                    <td><?php include "php/tarefasTerca.php"?></td>
                    <td style="width:10%;">
                      <button type="button" class="btn btn-outline-info texto" data-toggle="modal" data-target="#terca">Escrever</button>
                      <button type="button" class="btn btn-outline-danger texto" data-toggle="modal" data-target="#remo_terca">Remover</button>
                    </td>
                  </tr>
                  <tr>
                    <th scope="row">Quarta</th>
                    <td><?php include "php/tarefasQuarta.php"?></td>
                    <td style="width:10%;">
                      <button type="button" class="btn btn-outline-info texto" data-toggle="modal" data-target="#quarta">Escrever</button>
                      <button type="button" class="btn btn-outline-danger texto" data-toggle="modal" data-target="#remo_quarta">Remover</button>
                    </td>
                  </tr>
                  <tr>
                    <th scope="row">Quinta</th>
                    <td><?php include "php/tarefasQuinta.php"?></td>
                    <td style="width:10%;">
                      <button type="button" class="btn btn-outline-info texto" data-toggle="modal" data-target="#quinta">Escrever</button>
                      <button type="button" class="btn btn-outline-danger texto" data-toggle="modal" data-target="#remo_quinta">Remover</button>
                    </td>
                  </tr>
                  <tr>
                    <th scope="row">Sexta</th>
                    <td><?php include "php/tarefasSexta.php"?></td>
                    <td style="width:10%;">
                      <button type="button" class="btn btn-outline-info texto" data-toggle="modal" data-target="#sexta">Escrever</button>
                      <button type="button" class="btn btn-outline-danger texto" data-toggle="modal" data-target="#remo_sexta">Remover</button>
                    </td>
                  </tr>
                  <tr>
                    <th scope="row">Sábado</th>
                    <td><?php include "php/tarefasSabado.php"?></td>
                    <td style="width:10%;">
                      <button type="button" class="btn btn-outline-info texto" data-toggle="modal" data-target="#sabado">Escrever</button>
                      <button type="button" class="btn btn-outline-danger texto" data-toggle="modal" data-target="#remo_sabado">Remover</button>
                    </td>
                  </tr>
                </tbody>
              </table>
        </div>
    </div> 
</center>
 
<?php
    include "inc/modal_escrever.inc";
    include "inc/modal_remover.inc";
?>


<script src="js/jquery-3.3.1.min.js"></script>
<script src="js/bootstrap.min.js"></script>
<script src="js/validaform.min.js"></script>
</body>
</html>