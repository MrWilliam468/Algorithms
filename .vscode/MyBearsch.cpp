#include <bits/stdc++.h>

using namespace std;
int binarySearchRecursive (int A[],int l, int r, int K){    //Arrays medios e pequenos

    if (r>=l){
        int m=(l+r)/2;
        if (K==A[m]){
            return m;
        }
        else if(K<A[m]){
            return binarySearchRecursive(A,l,m-1,K);
        }
        else{
            return binarySearchRecursive(A,m+1,r,K);
        }  
    }
    else{
        return -1;
    }
}
int binarySearchIterative (int A[],int n,int K){
    int l=0;
    int r=n-1;//tamanho do array
    while(l<=r){
        int m=(l+r)/2;
        if(K==A[m]){
            return m;
        }
        else if(K<A[m]){
            r=m-1;
        }
        else{
            l=m+1;
        }
    }
    return -1;
}


int main() {
    // Exemplo de teste
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15}; // Array ordenado
    int n = sizeof(A) / sizeof(A[0]); // Tamanho do array
    int K = 7; // Elemento a ser buscado

    // Testando a função recursiva
    int resultRec = binarySearchRecursive(A, 0, n - 1, K);
    if (resultRec != -1) {
        cout << "Elemento encontrado na posição (recursivo): " << resultRec << endl;
    } else {
        cout << "Elemento não encontrado (recursivo)." << endl;
    }

    // Testando a função iterativa
    int resultIter = binarySearchIterative(A, n, K);
    if (resultIter != -1) {
        cout << "Elemento encontrado na posição (iterativo): " << resultIter << endl;
    } else {
        cout << "Elemento não encontrado (iterativo)." << endl;
    }

    return 0;
}