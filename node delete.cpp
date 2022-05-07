if(t->data==t->next->data)
{
	node *r=t->next;
	t->next=r->next;
	delete(r);
}

}
};
class Solution{
    public:

          Node* removeDuplicates(Node *head)
          {
            //Write your code here
            Node *t=head;
            if(head==nullptr)
            return head;
            else 
            {
                while (t!=nullptr)
                {
                    if(t->data==t->next->data)
                {
                    Node *r=t->next;
                    t->next= r->next;
                    delete(r);
                }
                
                else 
                {
                    t=t->next;
                }
                }
                return head;
            }
            
          }
