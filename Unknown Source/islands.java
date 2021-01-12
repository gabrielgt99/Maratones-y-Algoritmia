import java.util.*;

public class Main {

	public long solucion(long[] altura, long max) {
		Set<Long> alturasCalculadas = new HashSet<>();
		alturasCalculadas.add(max);
		long maxIslas = 0;
		for (int i = 0; i < altura.length; i++) {
			int totalIslas = 0;
			if (!alturasCalculadas.contains(altura[i])) {
				alturasCalculadas.add(altura[i]);
				for (long dato : alturasCalculadas){
          if(dato>=altura[i])
            totalIslas++;
        }
				if (totalIslas>maxIslas)
          maxIslas = totalIslas;
			}
		}
		return maxIslas;
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		while (in.hasNextInt()) {
			int casos = in.nextInt();
			long[] altura = new long[casos];
			long max = 1;
			for (int i = 0; i < altura.length; i++) {
				altura[i] = in.nextLong();
				if (altura[i] > max)
					max = altura[i];
			}
			Main resultado = new Main();
			System.out.println(resultado.solucion(altura, max));
		}
	}
}