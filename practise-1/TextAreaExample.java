import javax.swing.*;
import java.awt.event.*;
public class TextAreaExample implements ActionListener
{
   JLabel l1,l2;
   JTextArea area;
   JButton b;
   TextAreaExample()
   {
      JFrame f = new JFrame();
      l1 = new JLabel();
      l1.setBounds(50,25,100,30);
      l2 = new JLabel();
      l2.setBounds(100,25,160,30);
      area = new JTextArea();
      area.setBounds(20,75,300,200);
      b = new JButton("count words");
      b.setBounds(100,300,150,30);

      b.addActionListener(this);

      f.add(l1);
      f.add(l2);
      f.add(area);
      f.add(b);

      f.setSize(450,450);
      f.setLayout(null);
      f.setVisible (true);
   }
   public void actionPerformed(ActionEvent e)
   {
      String text = area.getText();
      String words [] = text.split("\\s");
      l1.setText("words"+words.length);
      l2.setText("characters" + text.length());
   }
   public static void main (String [] args)
   {
      new TextAreaExample();
   }
}