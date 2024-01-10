package Marvellous;
public class Arithmatic
{
    public int iValue1;
    public int iValue2;

    public Arithmatic(int A, int B)
    {
        this.iValue1=A;
        this.iValue2=B;//this poointer is used to access the characteristics
    }
    public int Addition()
     {
        int isum=0;
        isum=this.iValue1+this.iValue2;
        return isum;
     }
}
