import java.util.Scanner;
class Main {
    public int solucion(int n,int p,int q,int []peso) {

    	int cont = 0;
    	int aux = 0;
    	for (int i=0; i<n; i++) {
    		aux += peso[i];
    		if (aux <=q && cont<p)
    			cont++;
    	}
    	
    	return cont;
    }
	public static void main (String[]args) {
    	Scanner sc=new Scanner(System.in);
    	Main huevo=new Main();
    	int casos=sc.nextInt();
        for (int j=0;j<casos;j++) {
	        int n=sc.nextInt();
	    	int p=sc.nextInt();
	    	int q=sc.nextInt();
	        int []d=new int[n];
	         
	       for (int i =0;i<n;i++) 
	        	d[i]=sc.nextInt();
	        System.out.println("Case "+(j+1)+": "+huevo.solucion(n,p,q,d));
        }
    }
}
