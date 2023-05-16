/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@                                                                                          @@              
@@ PROJECT NAME : GENERALISED DATA STRUCTURE LIBRARY                                        @@
@@                     (Linear and Non-Linear Data Structures)                              @@
@@                                                                                          @@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@                                                                                          @@        
@@      CONTENTS     : [1] Class SingyLL                                                    @@
@@                     [2] Class DoublyLL                                                   @@
@@                     [3] Class SinglyCircular                                             @@
@@                     [4] Class Doubly Circular                                            @@
@@                     [5] Class Stack                                                      @@
@@                     [6] Class Queue                                                      @@
@@                     [7] Class BinarySearchTree                                           @@
@@                                                                                          @@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                      
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Class Name  :  SinglyLL [Singly Linear Linked List] 
// 
//    Description :  It is a Generic Singly Linear Linked List Data Structure     
//                              
//    Author      :  Sumit Anil Anarase
//
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
struct node
{
    node <T> *next;
    T data;
};

template <class T>
class SinglyLL
{
    private:
        node<T>* first;
        int size;      

    public:
        SinglyLL();
        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

        void Display();
        int Count();
};

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Class Name  :  DoublyLL [Doubly Linear Linked List] 
// 
//    Description :  It is a Generic Doubly Linear Linked List Data Structure     
//                              
//    Author      :  Sumit Anil Anarase
//
//    Date        :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
struct dnode
{
    int data;
    struct dnode<T>* next;
    struct dnode<T>* prev;

};

template <class T>
class DoublyLL
{
    private:
        dnode<T>* first;
        int size;

    public:

        DoublyLL();
        void InsertFirst (T);
        void InsertLast (T);
        void InsertAtPos (T, int);

        void DeleteFirst ();
        void DeleteLast ();
        void DeleteAtPos (int);

        int Count ();
        void Display ();
};

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Class Name  :  SinglyCircular [Singly Circular Linked List] 
// 
//    Description :  It is a Generic Singly Circular Linked List Data Structure     
//                              
//    Author      :  Sumit Anil Anarase
//
//    Date        :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
struct scnode
{
    T data;
    struct scnode<T>* next;

};

template <class T>
class SinglyCircular
{
    private:
        scnode<T>* first;
        scnode<T>* last;
        int size;

    public:
        SinglyCircular();
        void Display();
        int Count();
        void InsertFirst(T Data);
        void InsertLast(T Data);
        void InsertAtPos(T, int);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

};

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Class Name  :  DoublyCircular [Doubly Circular Linked List] 
// 
//    Description :  It is a Generic Doubgly Circular Linked List Data Structure     
//                              
//    Author      :  Sumit Anil Anarase
//
//    Date        :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
struct dcnode
{
    T data;
    struct dcnode<T>* next;
    struct dcnode<T>* prev;

};
template <class T>
class DoublyCircular
{
    private:
        dcnode<T>* first;
        dcnode<T>* last;
        int size;

    public:
        DoublyCircular();
        void Display();
        int Count();
        void InsertFirst(T Data);
        void InsertLast(T Data);
        void InsertAtPos(T Data, int pos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int pos);        
};

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Class Name  :  Stack 
// 
//    Description :  It is a Generic Stack Data Structure     
//                              
//    Author      :  Sumit Anil Anarase
//
//    Date        :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
 struct stnode
{
    T data;
    struct stnode<T>* next;

};

template <class T>
class Stack
{
    private:
        stnode<T>* first = NULL;
        int size;

    public:
        Stack();
        void push(T Data);   
        T pop();   
        void Display();
        int Count();
};

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Class Name  :  Queue 
// 
//    Description :  It is a Generic Queue Data Structure     
//                              
//    Author      :  Sumit Anil Anarase
//
//    Date        :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
struct qnode
{
    T data;
    struct qnode<T>* next;
};

template <class T>
class Queue     
{
private:
    qnode<T>* first;
    int size;

public:
    Queue();
    void Enqueue(T DATA);  
    T Dequeue();
    void Display();
    int Count();
};

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Class Name  :  BinarySearchTree (Non-Linear Data Structure) 
// 
//    Description :  It is a Generic Binary Search Tree Data Structure     
//                              
//    Author      :  Sumit Anil Anarase
//
//    Date        :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
struct tnode
{
    T data;
    struct tnode<T>* lchild;
    struct tnode<T>* rchild;
};

template <class T>
class BinarySearchTree
{
    private:
        tnode<T>* root;
        int size;

    public:
        tnode<T>* temp;

        BinarySearchTree();
        void Insert(T Data);
        bool Search(T Data);
        int Count();
        int CountParentnode(tnode<T>* temp);
        int CountLeafnode(tnode<T>* temp);
        void Inorder(tnode<T>* temp);
        void PreOrder(tnode<T>* temp);
        void PostOrder(tnode<T>* temp);
};

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//                             END OF DECLARATIONS OF ALL CLASSES
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

//////////////////////////////////////////////////////////////////////////////////////////////
// =================== All Method Definations of class SinglyLL============================
//////////////////////////////////////////////////////////////////////////////////////////////
//    Constructor :  SinglyLL  
// 
//    Description :  Default Constructor of a class SinglyLL
//                              
//    Author      :  Sumit Anil Anarase
//
//    Date        :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
SinglyLL<T>::SinglyLL()
{
    first = NULL;
    size = 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  InsertFirst  
// 
//    Description   :  We can insert a first node in the 
//                     SINGLY Linked List by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void SinglyLL<T>::InsertFirst(T Data)
{
    node<T>* newn = new node<T>;

    newn->data = Data;
    newn->next = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    size++;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  InsertLast  
// 
//    Description   :  We can insert a last node in the 
//                     SINGLY Linked List by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void SinglyLL<T>::InsertLast(T Data)
{
    node<T>* newn = new node<T>;
    node<T>* temp = first;

    newn->data = Data;
    newn->next = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else 
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
            temp->next = newn;               
    }
    size++;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  InsertAtPos  
// 
//    Description   :  We can insert a node at desired position in the 
//                     SINGLY Linked List by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void SinglyLL<T> :: InsertAtPos(T Data, int pos)
{
    node<T>* temp = first;

    if ((pos < 1) || (pos > (size + 1)))
    {
        return;
    }
    if (pos == 1)
    {
        InsertFirst(Data);
    }
    else
    {
        node<T>* newn = new node<T>;
        int iCnt = 1;

        newn->data = Data;
        newn->next = NULL;

        while (iCnt != (pos -1))
        {
            temp = temp->next;
            iCnt++;
        }
        newn->next = temp->next;
        temp->next = newn;            
    }
    size++;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  DeleteFirst  
// 
//    Description   :  We can delete a first node of the 
//                     SINGLY Linked List by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void SinglyLL<T>::DeleteFirst()
{
    node<T>* temp = first;
    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
        size--;
    }
    else
    {
        first = temp->next;
        delete temp;
        temp = NULL;
        size--;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  DeleteLast  
// 
//    Description   :  We can delete a last node of the 
//                     SINGLY Linked List by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void SinglyLL<T>::DeleteLast()
{
    node<T>* temp = first;
    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
        size--;
    }
    else
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;

        size--;            
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  DeleteAtPos  
// 
//    Description   :  We can delete a desired position node of the 
//                     SINGLY Linked List by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void SinglyLL<T>::DeleteAtPos(int pos)
{
    node<T>* temp = first;
    int icnt = 1;

    if ((pos < 1) || (pos > size))
    {
        return;
    }
    else if (pos == 1)
    {
        DeleteFirst();
    }
    else if (pos == size)
    {
        DeleteLast();
    }

    else
    {
        while (icnt != (pos-1))
        {
            temp = temp->next;
            icnt++;
        }
        node<T>* targeted = temp->next;
        temp->next = targeted->next;
        delete targeted;
        targeted = NULL;

        size--;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  Display  
// 
//    Description   :  We can display the SINGLY Linked List 
//                     by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void SinglyLL<T>::Display()
{
    node<T>* temp = first;

    while (temp != NULL)
    {
        cout<<(temp->data)<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  Count  
// 
//    Description   :  We can count the number of nodes from the SINGLY Linked List 
//                     by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
int SinglyLL<T>::Count()
{
    return size;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//                                      END OF CLASS METHODS
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

//////////////////////////////////////////////////////////////////////////////////////////////
// =================== All Method Definations of class Queue ============================
//////////////////////////////////////////////////////////////////////////////////////////////
//    
//    Constructor :  Queue 
// 
//    Description :  Default Constructor of a class Queue     
//                              
//    Author      :  Sumit Anil Anarase
//
//    Date        :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
Queue<T>::Queue()
{
    first = NULL;
    size = 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  Enqueue  
// 
//    Description   :  We can insert a node in the 
//                     Queue by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Queue<T>:: Enqueue(T DATA)  
{
    qnode<T>* newn = new qnode<T>;
    newn->data = DATA;
    newn -> next = NULL;

    if(size == 0)   
    {
        first = newn;
    }
    else
    {
        qnode<T>* temp = first;
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp->next = newn;
    }
    size++;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  Dequeue  
// 
//    Description   :  We can delete a node from the 
//                     Queue and return the deleted data 
//                     by using this function (Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>    
T Queue<T>:: Dequeue()   
{
    T DelData;
    qnode<T>* temp = first;

    if(size == 0)
    {
        cout<<"Queue is empty\n";
        return -1;
    }

    if(size == 1)
    {
        DelData = first->data;
        delete first;
        first = NULL;
    }
    else
    {
        DelData = first->data;
        first = first -> next;
        delete temp;
    }

    size--;
    return DelData;

}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  Display  
// 
//    Description   :  We can Display the data from the 
//                     Queue by using this function (Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>    
void Queue<T>:: Display()
{
    qnode<T>* temp = first;

    for(int i = 1 ; i <= size; i++, temp = temp->next)
    {
        cout<<"|"<<temp->data<<"|-> ";
    }
    cout<<"\n";
}


//////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  
//    Function Name :  Count                                                                                    
//                                                                                          
//    Description   :  We can Count the elements from the                                                               
//                     Queue by using this function (Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
int Queue<T>:: Count()
{
    return size;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//                                      END OF CLASS METHODS
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@





//////////////////////////////////////////////////////////////////////////////////////////////
// =================== All Method Definations of class Stack ============================
//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Constructor :  Stack 
// 
//    Description :  Default Constructor of a class Stack     
//                              
//    Author      :  Sumit Anil Anarase
//
//    Date        :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
Stack<T>::Stack()
{
    first = NULL;
    size = 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  push  
// 
//    Description   :  We can insert a node in the 
//                     Stack by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Stack<T>:: push(T Data)   
{
    stnode<T>* newn = new stnode<T>;
    newn->data = Data;
    newn->next = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    size++;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  pop  
// 
//    Description   :  We can delete a node from the 
//                     Stack and return the deleted data 
//                     by using this function (Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
T Stack<T>:: pop()   
{
    T Data;
    stnode<T>* temp = first;

    if (first == NULL)
    {
        cout<<"Stack is empty\n";

        return -1;
    }
    if (first->next == NULL)
    {
        Data = first->data;
        delete first;
        first = NULL;
    }
    else
    {
        Data = first->data;
        first = first->next;
        delete temp;
        temp = NULL;
    }

    size--;
    return Data;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  Display  
// 
//    Description   :  We can Display the data from the 
//                     Stack by using this function (Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Stack<T>:: Display()
{
    stnode<T>* temp = first;

    if (first == NULL)
    {
        return;
    }
    while (temp->next != NULL)
    {
        cout<<"|"<<temp->data<<"|\n";
        temp = temp->next;
    }            
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  Count  
// 
//    Description   :  We can Count the elements from the 
//                     Stack by using this function (Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
int Stack<T>:: Count()
{
    return size;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//                                      END OF CLASS METHODS
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


//////////////////////////////////////////////////////////////////////////////////////////////
// =================== All Method Definations of class DoublyLL ============================
//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Constructor :  DoublyLL  
// 
//    Description :  Default Constructor of a class DoublyLL
//                              
//    Author      :  Sumit Anil Anarase
//
//    Date        :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
DoublyLL<T>::DoublyLL()
{
    first = NULL;
    size = 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  InsertFirst  
// 
//    Description   :  We can insert a first node in the 
//                     DOUBLY Linear Linked List by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void DoublyLL<T>::InsertFirst(T Data)
{
    dnode<T>* newn = new dnode<T>;

    newn->data = Data;
    newn->prev = NULL;
    newn->next = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;

        first = newn;
    }
    size++; 
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  InsertLast  
// 
//    Description   :  We can insert a last node in the 
//                     Doubly linear Linked List by using this 
//                     function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void DoublyLL<T>:: InsertLast(T Data)
{
    dnode<T>* newn = new dnode<T>;

    newn->data = Data;
    newn->prev = NULL;
    newn->next = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else             
    {
        dnode<T>* temp = first;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
            temp->next = newn;
            newn->prev = temp;
    }
        size++;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  InsertAtPos  
// 
//    Description   :  We can insert a node at desired position in the 
//                     Doubly Linear Linked List by using this function
//                     (Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void DoublyLL<T>:: InsertAtPos(T Data, int pos)
{
    if ((pos < 1) || (pos > size+1))
    {
        return;
    }

    if (pos == 1)
    {
        InsertFirst(Data);
    }
    else if (pos == size+1)
    {
        InsertLast(Data);
    }
    else
    {
        dnode<T>* newn = new dnode<T>;
        newn->prev = NULL;
        newn->next = NULL;
        newn->data = Data;

        dnode<T>* temp = first;

        for (int i = 1; i < (pos-1); i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        newn->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;

        size++;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  DeleteFirst  
// 
//    Description   :  We can delete a first node of the 
//                     Doubly Linear Linked List by using this function
//                     (Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void DoublyLL<T>:: DeleteFirst()
{
    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        first = first->next;
        delete first->prev;
        first->prev = NULL;
    }

    size--;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  DeleteLast  
// 
//    Description   :  We can delete a last node of the 
//                     Doubly Linear Linked List by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void DoublyLL<T> :: DeleteLast()
{
    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        dnode<T>* temp = first;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        delete temp;
    }
    size--;            
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  DeleteAtPos  
// 
//    Description   :  We can delete a desired position node of the 
//                     Doubly Linear Linked List by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void DoublyLL<T>:: DeleteAtPos(int pos)
{
    if (first == NULL)
    {
        return;
    }
    else if ((pos < 1) || (pos > size))
    {
        return;
    }
    else if (pos == 1)
    {
        DeleteFirst();   
            }
    else if (pos == size)
    {
        DeleteLast();
    }
    else
    {
        dnode<T>* temp = first;
        for (int i = 1; i < pos-1; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        size--;                       
    }           
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  Count  
// 
//    Description   :  We can count the number of nodes from the Doubly linear 
//                     Linked List by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
int DoublyLL<T>:: Count()
{
    return size;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  Display  
// 
//    Description   :  We can display the Doubly Linear Linked List 
//                     by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void DoublyLL<T>:: Display()
{
    dnode<T>* temp = first;

    if (size == 0)
    {
        return;
    }

    while (temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"NULL\n";            
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//                                      END OF CLASS METHODS
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



//////////////////////////////////////////////////////////////////////////////////////////////
// =================== All Method Definations of class SinglyCircular ======================
//////////////////////////////////////////////////////////////////////////////////////////////
//    Constructor :  SinglyCircular  
// 
//    Description :  Default Constructor of a class SinglyCircular
//                              
//    Author      :  Sumit Anil Anarase
//
//    Date        :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
SinglyCircular<T>::SinglyCircular()
{
    first = NULL;
    last = NULL;
    size = 0;
}


//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  Display  
// 
//    Description   :  We can display the SINGLY Circular Linked List 
//                     by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>        
void SinglyCircular<T>:: Display()
{
    scnode<T>* temp = first;

    if ((first == NULL) && (last == NULL))
    {
        return;
    }
    do
    {
        cout<<"|"<<(temp->data)<<"|"<<"->";
        temp = temp->next;

    } while (temp != last->next);

    cout<<endl;   
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  Count  
// 
//    Description   :  We can count the number of nodes from the SINGLY Linked 
//                     Circular List by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
int SinglyCircular<T>:: Count()
{
    return size;
}


//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  InsertFirst  
// 
//    Description   :  We can insert a first node in the 
//                     SINGLY Circular List by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void SinglyCircular<T>:: InsertFirst(T Data)
{
    scnode<T>* newn = NULL;
    newn = new scnode<T>;

    newn->data = Data;
    newn->next = NULL;

    if ((first == NULL) && (last == NULL))
    {

        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first = newn;                
    }

    last->next = first;
    size++;
}


//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  InsertLast  
// 
//    Description   :  We can insert a last node in the 
//                     SINGLY Circular List by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void SinglyCircular<T>:: InsertLast(T Data)
{
    scnode<T>* newn = new scnode<T>;

    newn->data = Data;
    newn->next = NULL;

    if (size == 0)
    {
        return;
    }
    else
    {
        last->next = newn;
        last = newn;
    }

    last->next = first;
    size++;            
}


//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  InsertAtPos  
// 
//    Description   :  We can insert a node at desired position in the 
//                     SINGLY Circular Linked List by using this 
//                     function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void SinglyCircular<T>:: InsertAtPos(T Data, int ipos)
{
    if ((ipos < 1) || (ipos > (size+1)))
    {
        return;
    }

    if (ipos == 1 )
    {
        InsertFirst(Data);
    }
    else if (ipos == (size+1))
    {
        InsertLast(Data);
    }
    else
    {
        scnode<T>* temp = first;
        int iCnt = 0;

        scnode<T>* newn = new scnode<T>;
        newn->data = Data;
        newn->next = NULL;

        while (iCnt != (ipos))
        {
            iCnt++;
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        size++;
    }           

}

//////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                         
//    Function Name :  DeleteFirst                                                                         
//                                                                                                         
//    Description   :  We can delete a first node of the                                   
//                     SINGLY Circular Linked List by using this                               
//                     function(Generic Function).                                         
//                                                                                         
//    Author        :  Sumit Anil Anarase                                                    
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void SinglyCircular<T>:: DeleteFirst()
{
    if (size == 0)
    {
        return;
    }
    else if (first == last)
    {
        delete first;
        first = NULL;
        last = NULL;

    }
    else
    {
        first = first->next;
        delete last->next;
        last->next = first;
    }

    size--;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  DeleteLast  
// 
//    Description   :  We can delete a last node of the 
//                     SINGLY Cicular Linked List by using 
//                     this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void SinglyCircular<T>:: DeleteLast()
{
    scnode<T>* temp = first;

    if (size == 0)
    {
        return;
    }
    if (first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        while (temp->next != last)
        {
            temp = temp->next;
        }
        delete last;
        last = temp;

        last->next = first;
    }
    size--;
}


//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  DeleteAtPos  
// 
//    Description   :  We can delete a desired position node of the 
//                     SINGLY Circular Linked List by using this 
//                     function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void SinglyCircular<T>:: DeleteAtPos(int ipos)
{
    if ((ipos < 1) || (ipos > size))
    {
        return;
    }
    if (ipos == 1)
    {
        DeleteFirst();
    }
    else if (ipos == size)
    {
        DeleteLast();
    }
    else
    {
        scnode<T>* temp = first;
        int iCnt = 1;

        while (iCnt != ipos-1)
        {
            temp = temp->next;
            iCnt++;
        }

        scnode<T>* targeted = temp->next;
        temp->next = targeted->next;
        delete targeted;
        targeted = NULL;

        size--;                
    }     
}

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//                                      END OF CLASS METHODS
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



//////////////////////////////////////////////////////////////////////////////////////////////
// =================== All Method Definations of class DoublyCircular ======================
//////////////////////////////////////////////////////////////////////////////////////////////
//    Constructor :  DoublyCircular  
// 
//    Description :  Default Constructor of a class DoublyCircular
//                              
//    Author      :  Sumit Anil Anarase
//
//    Date        :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
DoublyCircular<T>::DoublyCircular()
{
    first = NULL;
    last = NULL;
    size = 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  Display  
// 
//    Description   :  We can display the Doubly Circular Linked List 
//                     by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void DoublyCircular<T> :: Display()
{
    dcnode<T>* temp = first;
    if ((first == NULL) && (last== NULL))
    {
        return;
    }

    for (int i = 1; i <= size; i++)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;    
    }
    cout<<endl;  

}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  Count  
// 
//    Description   :  We can count the number of nodes from the Doubly Linked 
//                     Circular Linked List by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
int DoublyCircular<T> ::Count()
{
    return size;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  InsertFirst  
// 
//    Description   :  We can insert a first node in the 
//                     Doubly Circular Linked List by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void DoublyCircular<T> :: InsertFirst(T Data)
{
    dcnode<T>* newn = new dcnode<T>;

    newn->data = Data;
    newn->next = NULL;
    newn->prev = NULL;

    if (size == 0)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }

    last->next = first;
    first->prev = last;
    size++;

}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  InsertLast  
// 
//    Description   :  We can insert a last node in the 
//                     Doubly Circular Linked List by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void DoublyCircular<T> :: InsertLast(T Data)
{
    dcnode<T>* newn = new dcnode<T>;

    newn->data = Data;
    newn->next = NULL;
    newn->prev = NULL;

    if ((first == NULL) && (last == NULL))
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        newn->prev = last;
        last = newn;
    }
    first->prev = last;
    last->next = first;
    size++;    
    
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  InsertAtPos  
// 
//    Description   :  We can insert a node at desired position in the 
//                     Doubly Circular Linked List by using this 
//                     function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void DoublyCircular<T> :: InsertAtPos(T Data, int pos)
{
    if (size == 0)
    {
        InsertFirst(Data);
    }
    else if (pos == size+1)
    {
        InsertLast(Data);
    }
    else
    {
        dcnode<T>* newn = new dcnode<T>;
        newn->data = Data;
        newn->next = NULL;
        newn->prev = NULL;

        dcnode<T>* temp = first;

        int iCnt = 1;

        while (iCnt != (pos-1))
        {
            temp = temp->next;
            iCnt++;    
        }
        newn->next = temp->next;
        newn->next->prev = newn;
        temp->next = newn;
        newn->prev = temp; 
        size++;       
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  DeleteFirst  
// 
//    Description   :  We can delete a first node of the 
//                     Doubly Circular Linked List by using this 
//                     function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void DoublyCircular<T> :: DeleteFirst()
{
    if ((first == NULL) && (last == NULL))
    {
        return;
    }
    else if (first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        delete last->next;
        first->prev = last;
        last->next = first;
    }    

    size--;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  DeleteLast  
// 
//    Description   :  We can delete a last node of the 
//                     Doubly Cicular Linked List by using 
//                     this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void DoublyCircular<T> :: DeleteLast()
{
    if (size == 0)
    {
        return;
    }
    else if (first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        last = last->prev;
        delete last->next;

        first->prev = last;
        last->next = first;
    }

    size--;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  DeleteAtPos  
// 
//    Description   :  We can delete a desired position node of the 
//                     Doubly Circular Linked List by using this 
//                     function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void DoublyCircular<T> :: DeleteAtPos(int pos)
{
    int iCnt = 1;

    if ((pos < 1) || (pos > size))
    {
        return;
    }
    else if (pos == 1)
    {
        DeleteFirst();
    }
    else if (pos == size)
    {
        DeleteLast();
    }
    else
    {
        dcnode<T>* temp = first;
        while (iCnt != pos-1)
        {
            temp = temp->next;
            iCnt++;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        size--;

    } 
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//                                      END OF CLASS METHODS
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



//////////////////////////////////////////////////////////////////////////////////////////////
// =================== All Method Definations of class BinarySearchTree======================
//////////////////////////////////////////////////////////////////////////////////////////////
//    Constructor :  BinarySearchTree  
// 
//    Description :  Default Constructor of a class BinarySearchTree
//                              
//    Author      :  Sumit Anil Anarase
//
//    Date        :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
BinarySearchTree<T>::BinarySearchTree()
{
    root = NULL;
    temp = NULL;
    size = 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  Insert  
// 
//    Description   :  We can insert a node in the 
//                     BinarySearchTree by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void BinarySearchTree<T>:: Insert(T Data)
{
    tnode<T>* temp = root;

    tnode<T>* newn = new tnode<T>;
    newn->data = Data;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if (root == NULL)
    {
        root = newn;  
        this->temp = root;  
        size++;          
    }
    else
    {
        while (1)
        {
            if (temp->data == Data)
            {
                delete newn;
                break;
            }
            else if ( Data < (temp->data) )
            {
                if (temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    size++;
                    break;
                }
                temp = temp->lchild;       
            }

            else if ( Data > (temp->data) )
            {
                if (temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    size++;
                    break;
                }
                temp = temp->rchild;
            }
        }
    }
}


//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  Search
// 
//    Description   :  We can search a Data int the BinarySearchTree 
//                     by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
bool BinarySearchTree<T>:: Search(T Data)
{
    tnode<T>* temp = root;

    if (root == NULL)
    {
        return false;
    }
    else
    {
        while (temp != NULL)
        {
            if (temp->data == Data)
            {
                break;
            }
            else if (Data < temp->data)
            {
                temp = temp->lchild;
            }
            else if (Data > temp->data)
            {
                temp = temp->lchild;                        
            }
        }
    }
    if (temp == NULL)
    {
        return false;
    }
    else
    {
        return true;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  Count  
// 
//    Description   :  We can count number of the nodes present in the 
//                     BinarySearchTree by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
int BinarySearchTree<T>:: Count()
{
    return size;
}


//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  CountParentnode
// 
//    Description   :  We can count the number of the Parent Nodes Present in the  
//                     BinarySearchTree by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
int BinarySearchTree<T>:: CountParentnode(tnode<T>* temp)
{
    static int iCnt = 0;

    if (temp != NULL)
    {
        if ((temp->lchild != NULL) || (temp->rchild != NULL))
        {
            iCnt++;
        }
        CountParentnode(temp->lchild);
        CountParentnode(temp->rchild);
    }
    return iCnt;

}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  CountLeafnode  
// 
//    Description   :  We can count the Number of Leaf Nodes Present in the  
//                     BinarySearchTree by using this function(Generic Function).     
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
int BinarySearchTree<T>:: CountLeafnode(tnode<T>* temp)
{
    static int iCnt = 0;
    if (temp != NULL)
    {
        if ((temp->lchild == NULL) && (temp->rchild == NULL))
        {
            iCnt++;
        }
        CountLeafnode(temp->lchild);
        CountLeafnode(temp->rchild);
    }
    return iCnt;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  Inorder
// 
//    Description   :  We can display the data present in the Binary Search Tree in INORDER
//                     format (L-D-R)
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void BinarySearchTree<T>:: Inorder(tnode<T>* temp)
{
    if (temp != NULL)
    {
        Inorder(temp->lchild);
        cout<<temp->data<<endl;
        Inorder(temp->rchild);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  PreOrder
// 
//    Description   :  We can display the data present in the Binary Search Tree in PreOrder
//                     format (D-L-R)
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void BinarySearchTree<T>:: PreOrder(tnode<T>* temp)
{
    if (temp != NULL)
    {
        cout<<temp->data<<endl;
        PreOrder(temp->lchild);
        PreOrder(temp->rchild);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :  PostOrder
// 
//    Description   :  We can display the data present in the Binary Search Tree in PostOrder
//                     format (L-R-D)
//                              
//    Author        :  Sumit Anil Anarase
//
//    Date          :  26 July 2022
//
//////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void BinarySearchTree<T>:: PostOrder(tnode<T>* temp)
{
    if (temp != NULL)
    {
        PostOrder(temp->lchild);
        PostOrder(temp->rchild);
        cout<<temp->data<<endl;
    } 
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//                                      END OF CLASS METHODS
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

int main(int argc, char const *argv[])
{
    SinglyLL   <int> l1;
    l1.InsertFirst(11);
    l1.InsertLast(21);
    l1.InsertLast(51);
    l1.InsertLast(111);
    l1.InsertLast(110);
    l1.Display();





    return 0;
}