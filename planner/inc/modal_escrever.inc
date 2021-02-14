<!-- Domingo -->
<div class="modal" tabindex="-1" role="dialog" id="domingo">
  <div class="modal-dialog modal-dialog-centered">
      <div class="modal-content">
          <div class="modal-header">
              <center>
                <h5 class="modal-title">Tarefas de Domingo</h5>
              </center>
              <button type="button" class="close" data-dismiss="modal" aria-label="Close">
                  <span aria-hidden="true">&times;</span>
              </button>
          </div>
          <form action="php/tarefas.php" method="POST">
              <div class="modal-body">
                  <div class="row">
                    <input type="hidden" name="dia" value ="1"/>
                      <div class="form-group col-sm-12 col-12">
                        <textarea class="form-control" id="tarefaDomingo" name="tarefa" rows="5" maxlength="70"></textarea>
                      </div>
                  </div>
              </div>
              <div class="modal-footer">
                  <button type="reset" class="btn btn-dark">
                      Limpar
                  </button>
                  <button type="submit" class="btn btn-info">
                      Salvar
                  </button>
              </div>
          </form>
      </div>
  </div>
</div>

<!-- Segunda -->
<div class="modal" tabindex="-1" role="dialog" id="segunda">
  <div class="modal-dialog modal-dialog-centered">
      <div class="modal-content">
          <div class="modal-header">
              <center>
                <h5 class="modal-title">Tarefas de Segunda</h5>
              </center>
              <button type="button" class="close" data-dismiss="modal" aria-label="Close">
                  <span aria-hidden="true">&times;</span>
              </button>
          </div>
          <form action="php/tarefas.php" method="POST">
              <div class="modal-body">
                  <div class="row">
                  <input type="hidden" name="dia" value ="2"/>
                      <div class="form-group col-sm-12 col-12">
                        <textarea class="form-control" id="tarefaSegunda" name="tarefa" rows="5" maxlength="70"></textarea>
                      </div>
                  </div>
              </div>
              <div class="modal-footer">
                  <button type="reset" class="btn btn-dark">
                      Limpar
                  </button>
                  <button type="submit" class="btn btn-info">
                      Salvar
                  </button>
              </div>
          </form>
      </div>
  </div>
</div>
<!-- Terca -->
<div class="modal" tabindex="-1" role="dialog" id="terca">
  <div class="modal-dialog modal-dialog-centered">
      <div class="modal-content">
          <div class="modal-header">
              <center>
                <h5 class="modal-title">Tarefas de Terça</h5>
              </center>
              <button type="button" class="close" data-dismiss="modal" aria-label="Close">
                  <span aria-hidden="true">&times;</span>
              </button>
          </div>
          <form action="php/tarefas.php" method="POST">
              <div class="modal-body">
                  <div class="row">
                  <input type="hidden" name="dia" value ="3">
                      <div class="form-group col-sm-12 col-12">
                        <textarea class="form-control" id="tarefaTerca" name="tarefa" rows="5" maxlength="70"></textarea>
                      </div>
                  </div>
              </div>
              <div class="modal-footer">
                  <button type="reset" class="btn btn-dark">
                      Limpar
                  </button>
                  <button type="submit" class="btn btn-info">
                      Salvar
                  </button>
              </div>
          </form>
      </div>
  </div>
</div>

<!-- Quarta -->
<div class="modal" tabindex="-1" role="dialog" id="quarta">
  <div class="modal-dialog modal-dialog-centered">
      <div class="modal-content">
          <div class="modal-header">
              <center>
                <h5 class="modal-title">Tarefas de Quarta</h5>
              </center>
              <button type="button" class="close" data-dismiss="modal" aria-label="Close">
                  <span aria-hidden="true">&times;</span>
              </button>
          </div>
          <form action="php/tarefas.php" method="POST">
              <div class="modal-body">
                  <div class="row">
                  <input type="hidden" name="dia" value ="4">
                      <div class="form-group col-sm-12 col-12">
                        <textarea class="form-control" id="tarefaQuarta" name="tarefa" rows="5" maxlength="70"></textarea>
                      </div>
                  </div>
              </div>
              <div class="modal-footer">
                  <button type="reset" class="btn btn-dark">
                      Limpar
                  </button>
                  <button type="submit" class="btn btn-info">
                      Salvar
                  </button>
              </div>
          </form>
      </div>
  </div>
</div>

<!-- Quinta -->
<div class="modal" tabindex="-1" role="dialog" id="quinta">
  <div class="modal-dialog modal-dialog-centered">
      <div class="modal-content">
          <div class="modal-header">
              <center>
                <h5 class="modal-title">Tarefas de Quinta</h5>
              </center>
              <button type="button" class="close" data-dismiss="modal" aria-label="Close">
                  <span aria-hidden="true">&times;</span>
              </button>
          </div>
          <form action="php/tarefas.php" method="POST">
              <div class="modal-body">
                  <div class="row">
                  <input type="hidden" name="dia" value ="5">
                      <div class="form-group col-sm-12 col-12">
                        <textarea class="form-control" id="tarefaQuinta" name="tarefa"rows="5" maxlength="70"></textarea>
                      </div>
                  </div>
              </div>
              <div class="modal-footer">
                  <button type="reset" class="btn btn-dark">
                      Limpar
                  </button>
                  <button type="submit" class="btn btn-info">
                      Salvar
                  </button>
              </div>
          </form>
      </div>
  </div>
</div>

<!-- Sexta -->
<div class="modal" tabindex="-1" role="dialog" id="sexta">
  <div class="modal-dialog modal-dialog-centered">
      <div class="modal-content">
          <div class="modal-header">
              <center>
                <h5 class="modal-title">Tarefas de Sexta</h5>
              </center>
              <button type="button" class="close" data-dismiss="modal" aria-label="Close">
                  <span aria-hidden="true">&times;</span>
              </button>
          </div>
          <form action="php/tarefas.php" method="POST">
              <div class="modal-body">
                  <div class="row">
                  <input type="hidden" name="dia" value ="6">
                      <div class="form-group col-sm-12 col-12">
                        <textarea class="form-control" id="tarefaSexta" name="tarefa" rows="5" maxlength="70"></textarea>
                      </div>
                  </div>
              </div>
              <div class="modal-footer">
                  <button type="reset" class="btn btn-dark">
                      Limpar
                  </button>
                  <button type="submit" class="btn btn-info">
                      Salvar
                  </button>
              </div>
          </form>
      </div>
  </div>
</div>

<!-- Sabado -->
<div class="modal" tabindex="-1" role="dialog" id="sabado">
  <div class="modal-dialog modal-dialog-centered">
      <div class="modal-content">
          <div class="modal-header">
              <center>
                <h5 class="modal-title">Tarefas de Sábado</h5>
              </center>
              <button type="button" class="close" data-dismiss="modal" aria-label="Close">
                  <span aria-hidden="true">&times;</span>
              </button>
          </div>
          <form action="php/tarefas.php" method="POST">
              <div class="modal-body">
                  <div class="row">
                  <input type="hidden" name="dia" value ="7">
                      <div class="form-group col-sm-12 col-12">
                        <textarea class="form-control" id="tarefaSabado" name="tarefa" rows="5" maxlength="70"></textarea>
                      </div>
                  </div>
              </div>
              <div class="modal-footer">
                  <button type="reset" class="btn btn-dark">
                      Limpar
                  </button>
                  <button type="submit" class="btn btn-info">
                      Salvar
                  </button>
              </div>
          </form>
      </div>
  </div>
</div>
<!--Metas-->
<div class="modal" tabindex="-1" role="dialog" id="metas">
  <div class="modal-dialog modal-dialog-centered">
      <div class="modal-content">
          <div class="modal-header">
              <center>
                <h5 class="modal-title">Metas</h5>
              </center>
              <button type="button" class="close" data-dismiss="modal" aria-label="Close">
                  <span aria-hidden="true">&times;</span>
              </button>
          </div>
          <form action="php/tarefas.php" method="POST">
              <div class="modal-body">
                  <div class="row">
                  <input type="hidden" name="dia" value ="8">
                      <div class="form-group col-sm-12 col-12">
                        <textarea class="form-control" id="metas" name="tarefa" rows="5" maxlength="70"></textarea>
                      </div>
                  </div>
              </div>
              <div class="modal-footer">
                  <button type="reset" class="btn btn-dark">
                      Limpar
                  </button>
                  <button type="submit" class="btn btn-info">
                      Salvar
                  </button>
              </div>
          </form>
      </div>
  </div>
</div>

<!--Importante-->
<div class="modal" tabindex="-1" role="dialog" id="importante">
  <div class="modal-dialog modal-dialog-centered">
      <div class="modal-content">
          <div class="modal-header">
              <center>
                <h5 class="modal-title">Importante</h5>
              </center>
              <button type="button" class="close" data-dismiss="modal" aria-label="Close">
                  <span aria-hidden="true">&times;</span>
              </button>
          </div>
          <form action="php/tarefas.php" method="POST">
              <div class="modal-body">
                  <div class="row">
                  <input type="hidden" name="dia" value ="9">
                      <div class="form-group col-sm-12 col-12">
                        <textarea class="form-control" id="importante" name="tarefa" rows="5" maxlength="70"></textarea>
                      </div>
                  </div>
              </div>
              <div class="modal-footer">
                  <button type="reset" class="btn btn-dark">
                      Limpar
                  </button>
                  <button type="submit" class="btn btn-info">
                      Salvar
                  </button>
              </div>
          </form>
      </div>
  </div>
</div>