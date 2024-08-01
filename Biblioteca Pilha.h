#include <iostream>
using namespace std;

#define MAXSIZE 5

#define ERROPILHACHEIA -1
#define ERROPILHAVAZIA -2

typedef struct{
	int topo;
	int item[MAXSIZE];
}pilha;


void ini_pi(pilha *p) {
	p->topo = 0;
}

int vazia_pi(pilha *p) {
	return(p->topo == 0);
}	

int cheia_pi(pilha *p) {
	return(p->topo == MAXSIZE);
}	

void empilha(pilha *p, int x) {
    if (!cheia_pi(p)) {
        p->item[p->topo] = x;
        p->topo++;
    } else {
        cout << "ERRO PILHA CHEIA" << endl;
    }
}

int desempilha(pilha *p) {
    if (!vazia_pi(p)) {
        p->topo--;
        return p->item[p->topo];
    } else {
        cout << "ERRO PILHA VAZIA" << endl;
        return ERROPILHAVAZIA;
    }
}

void lista_pi(pilha *p) {
    int i;
    if (vazia_pi(p)) {
        cout << "ERRO PILHA VAZIA" << endl;
    } else {
        cout << "** PILHA **" << endl;
        for (i = (p->topo - 1); i >= 0; i--)
            cout << p->item[i] << endl;
    }
}
