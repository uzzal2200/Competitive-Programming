import javax.swing.*;
import java.awt.event.*;
public class TextFieldExample implements ActionListener
{
   JTextField f1,f2,f3;
   JButton b1,b2,b3,b4;
   TextFieldExample()
   {
    JFrame f = new JFrame();
    f1 = new JTextField();
    f1.setBounds(50,50,250,25);
    f2 = new JTextField();
    f2.setBounds(50,100,250,25);
    f3 = new JTextField();
    f3.setBounds(50,150,250,25);
    b1 = new JButton("+");
    b1.setBounds(50,200,50,50);
    b2 = new JButton("-");
    b2.setBounds(120,200,50,50);
    b3 = new JButton("*");
    b3.setBounds(190,200,50,50);
    b4 = new JButton("/");
    b4.setBounds(260,200,50,50);

    b1.addActionListener(this);
    b2.addActionListener(this);
    b3.addActionListener(this);
    b4.addActionListener(this);

    f.add(b1);
    f.add(b2);
    f.add(b3);
    f.add(b4);
    f.add(f1);
    f.add(f2);
    f.add(f3);

    f.setSize(800,600);
    f.setLayout(null);
    f.setVisible(true);


   }

   public void actionPerformed(ActionEvent e)
   {
    String s1 = f1.getText();
    String s2 = f2.getText();
    double a = Double.parseDouble(s1);
    double b = Double.parseDouble(s2);
    double c = 0;
    if(e.getSource() == b1 )
    {
        c = a + b;
    }
    else if(e.getSource() == b2 )
    {
        c = a - b;
    }
    else if(e.getSource() == b3 )
    {
        c = a * b;
    }
    else if(e.getSource() == b4 )
    {
        if( b != 0)
        {
            c = a / b;
        }
        else{
            System.out.println("error division by zoero");
            return ;
        }
    }
    String result = String.format("%.2f",c);
    f3.setText(result);

   }
   public static void main(String [] args)
   {
    new TextFieldExample();
   }

}
