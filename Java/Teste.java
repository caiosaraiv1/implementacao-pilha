package pilha;

public class Teste {

    public static void main(String[] args) {

        // Criando a pilha com capacidade 3
        Pilha minhaPilha = new Pilha(3);

        // Testando o método isEmpty
        System.out.println("A pilha está vazia? " + minhaPilha.isEmpty()); // Deve retornar true

        System.out.println("Empilhando elementos...");
        // Tentando empilhar um elemento quando a pilha estiver cheia
        try {
        	minhaPilha.push(10); // Empilha o número 10
            minhaPilha.push(20); // Empilha o número 20
            minhaPilha.push(30); // Empilha o número 30
            minhaPilha.push(40); // Deve lançar a exceção "Pilha cheia!"
        } catch (Exception e) {
            System.out.println("Erro: " + e.getMessage());
        }

        // Verificando o topo da pilha
        try {
			System.out.println("\nTopo da pilha: " + minhaPilha.topo()); // Deve imprimir 30
		} catch (Exception e) {
            System.out.println("Erro: " + e.getMessage());
		}

        // Testando desempilhamento
        System.out.println("\nDesempilhando elementos...");
        // Tentando desempilhar da pilha vazia
        try {
        	minhaPilha.pop(); // Deve imprimir 30
            minhaPilha.pop(); // Deve imprimir 20
            minhaPilha.pop(); // Deve imprimir 10
            minhaPilha.pop(); // Deve lançar a exceção "Pilha vazia!"
        } catch (Exception e) {
            System.out.println("Erro: " + e.getMessage());
        }

        // Testando novamente o método isEmpty
        System.out.println("A pilha está vazia? " + minhaPilha.isEmpty()); // Deve retornar true
    }
}
