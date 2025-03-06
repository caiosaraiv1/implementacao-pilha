package pilha;

public class Pilha {

	private int tamanho;
	private int[] pilha;
	private int topo = -1;

	public Pilha() {
            this(10);
	}

	public Pilha(int tamanho) {
		this.tamanho = tamanho;
		pilha = new int[tamanho];
	}

	public boolean isEmpty() {
		return this.topo == -1;
	}

	public boolean isFull() {
		return this.topo == pilha.length-1;
	}

	public void push(int e) throws Exception {
		if(!this.isFull()) {
			this.topo++;
			this.pilha[topo] = e;
		} else {
			throw new Exception("Pilha cheia!");
		}

	}

	public void pop() throws Exception {
		if(!this.isEmpty()) {
			System.out.println(this.pilha[topo]);
			this.pilha[topo] = 0;
			this.topo--;
		} else {
			throw new Exception("Pilha vazia!");
		}
	}

	public int topo() throws Exception {
		if(!this.isEmpty()) {
			return this.pilha[this.topo];
		} else {
			throw new Exception("Pilha vazia!");
		}

	}



}
