import java.util.*;

public class Main {
  
  public boolean isPalindrome(String in){
    for (int i = 0, j = in.length()-1; i<j ; i++, j--){
        if (in.charAt(i) != in.charAt(j))
            return false;
    }
    return true;
  }
  
  public int subStrings(String in){
    Set<String> miSet = new HashSet<>();
    for (int i = 0; i<in.length(); i++){
        
        String nuevoString = "";
        nuevoString += in.charAt(i);
        if (isPalindrome(nuevoString))
          miSet.add(nuevoString);

        for (int j = i+1; j<in.length(); j++){
          nuevoString += in.charAt(j);
          if (isPalindrome(nuevoString))
            miSet.add(nuevoString);
        }        
    }
    return miSet.size();
  }

  public static void main(String []args){
    Scanner in = new Scanner(System.in);
    Main m = new Main();

    while(in.hasNext()){
      String x = in.next(); 
      System.out.println("The string '" + x + "' contains " + m.subStrings(x) + " palindromes.");
    }
  }
}
