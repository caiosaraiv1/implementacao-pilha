package pilha;

public class Pilha {

	private int tamanho;
	private int[] Pilha;
	private int topo = -1;

	public Pilha() {

	}

	public Pilha(int tamanho) {
		this.tamanho = tamanho;
		Pilha = new int[tamanho];
	}

	public boolean isEmpty() {
		return this.topo == -1;
	}

	public boolean isFull() {
		return this.topo == Pilha.length-1;
	}

	public void push(int e) throws Exception {
		if(!this.isFull()) {
			this.topo++;
			this.Pilha[topo] = e;
		} else {
			throw new Exception("Pilha cheia!");
		}

	}

	public void pop() throws Exception {
		if(!this.isEmpty()) {
			System.out.println(this.Pilha[topo]);
			this.Pilha[topo] = 0;
			this.topo--;
		} else {
			throw new Exception("Pilha vazia!");
		}
	}

	public int topo() throws Exception {
		if(!this.isEmpty()) {
			return this.Pilha[this.topo];
		} else {
			throw new Exception("Pilha vazia!");
		}

	}



}
