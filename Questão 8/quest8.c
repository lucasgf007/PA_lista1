int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ",*(vet+i));
  }
} // RESP: o codigo percorre o array, e a cada item do array imprime na tela o VALOR contido la

// ---------------------------------------------------------------------------------------------

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i);
  }
} // RESP: o codigo percorre o array, e a cada item do array imprime na tela o ENDEREÇO contido la