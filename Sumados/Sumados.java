public class Sumados{

    public int sumados(int n){

        int suma=0;
        for(int i=1;i<=n;i++)
            suma+=i;
        return suma;
    }

    public static void main(String[] args){
        Sumados sumi = new Sumados();
        for(int i=1;i<=10;i++){
            System.out.println(sumi.sumados(i));
        }
    }
}
