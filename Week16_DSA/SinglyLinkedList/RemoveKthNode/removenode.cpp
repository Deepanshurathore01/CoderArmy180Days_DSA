Node* deleteK(Node *head,int K)
{
  if(K == 1)
  return NULL;
  
  Node* curr =head , *prev =NULL;
  int cnt =1;
  while(curr)
  {
      if(K==cnt)
      {
          prev->next =curr->next;
          delete curr;
          curr =prev->next;
          cnt =1;
      }
      else{
          prev =curr;
          curr =curr->next;
          cnt +=1;
      }
  }
  return head;
}
