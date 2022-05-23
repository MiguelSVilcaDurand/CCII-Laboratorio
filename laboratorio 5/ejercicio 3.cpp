#include <bits/stdc++.h>
using namespace std;

class Lista{
public:
	int data;
	Lista* next;
};

	void sortedInsert(Lista** ref,
					  Lista* nueva_Lista)
{
	Lista* actual;
	if (*ref == NULL
		|| (*ref)->data
		>= nueva_Lista->data) {
		nueva_Lista->next = *ref;
		*ref = nueva_Lista;
	}
	else {
		actual = *ref;
		while (actual->next != NULL
			   && actual->next->data
			   < nueva_Lista->data) {
			actual = actual->next;
		}
		nueva_Lista->next = actual->next;
		actual->next = nueva_Lista;
	}
}

Lista* nuevaLista(int nueva_data)
{
	Lista* nueva_Lista = new Lista();
	
	
	nueva_Lista->data = nueva_data;
	nueva_Lista->next = NULL;
	
	return nueva_Lista;
}

void printList(Lista* head)
{
	Lista* temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}

int main()
{
	Lista* head = NULL;
	Lista* nueva_Lista = nuevaLista(5);
	sortedInsert(&head, nueva_Lista);
	nueva_Lista = nuevaLista(10);
	sortedInsert(&head, nueva_Lista);
	nueva_Lista = nuevaLista(7);
	sortedInsert(&head, nueva_Lista);
	nueva_Lista = nuevaLista(3);
	sortedInsert(&head, nueva_Lista);
	nueva_Lista = nuevaLista(1);
	sortedInsert(&head, nueva_Lista);
	nueva_Lista = nuevaLista(9);
	sortedInsert(&head, nueva_Lista);
	cout << "Creando una lista:\n";
	printList(head);
	
	return 0;
}
