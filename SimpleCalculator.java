import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class SimpleCalculator {
    private JFrame frame;
    private JTextField textField;
    private JButton[] digitButtons;
    private JButton addButton, subtractButton, multiplyButton, divideButton, modulusButton, equalsButton, clearButton;
    private double firstOperand, secondOperand;
    private String operator;
    private boolean isOperatorClicked = false;

    public SimpleCalculator() {
        frame = new JFrame("Attractive Calculator");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new BorderLayout());
        frame.getContentPane().setBackground(new Color(50, 50, 50)); // Background color

        textField = new JTextField();
        textField.setFont(new Font("Arial", Font.PLAIN, 36));
        textField.setHorizontalAlignment(JTextField.RIGHT);
        textField.setEditable(false);
        frame.add(textField, BorderLayout.NORTH);

        JPanel buttonPanel = new JPanel();
        buttonPanel.setLayout(new GridLayout(5, 4, 10, 10)); // Rows, Columns, Horizontal Gap, Vertical Gap
        buttonPanel.setBackground(new Color(60, 60, 60)); // Background color

        digitButtons = new JButton[10];
        for (int i = 0; i < 10; i++) {
            digitButtons[i] = new JButton(Integer.toString(i));
            digitButtons[i].setFont(new Font("Arial", Font.PLAIN, 24));
            digitButtons[i].setBackground(new Color(80, 80, 80)); // Button color
            digitButtons[i].setForeground(Color.WHITE); // Text color
            digitButtons[i].addActionListener(new DigitButtonListener());
            buttonPanel.add(digitButtons[i]);
        }

        addButton = createOperatorButton("+");
        subtractButton = createOperatorButton("-");
        multiplyButton = createOperatorButton("*");
        divideButton = createOperatorButton("/");
        modulusButton = createOperatorButton("%");
        equalsButton = createOperatorButton("=");
        clearButton = createOperatorButton("C");

        buttonPanel.add(addButton);
        buttonPanel.add(subtractButton);
        buttonPanel.add(multiplyButton);
        buttonPanel.add(divideButton);
        buttonPanel.add(modulusButton);
        buttonPanel.add(equalsButton);
        buttonPanel.add(clearButton);

        frame.add(buttonPanel, BorderLayout.CENTER);

        frame.setSize(400, 600); // Set window size
        frame.setVisible(true);
    }

    private JButton createOperatorButton(String label) {
        JButton button = new JButton(label);
        button.setFont(new Font("Arial", Font.PLAIN, 24));
        button.setBackground(new Color(120, 120, 120)); // Button color
        button.setForeground(Color.WHITE); // Text color
        if (!label.equals("C")) {
            button.addActionListener(new OperatorButtonListener(label));
        } else {
            button.addActionListener(new ClearButtonListener());
        }
        return button;
    }

    private class DigitButtonListener implements ActionListener {
        @Override
        public void actionPerformed(ActionEvent e) {
            if (isOperatorClicked) {
                textField.setText("");
                isOperatorClicked = false;
            }
            String currentText = textField.getText();
            JButton source = (JButton) e.getSource();
            textField.setText(currentText + source.getText());
        }
    }

    private class OperatorButtonListener implements ActionListener {
        private String op;

        public OperatorButtonListener(String operator) {
            this.op = operator;
        }

        @Override
        public void actionPerformed(ActionEvent e) {
            if (operator != null && !operator.equals("=")) {
                secondOperand = Double.parseDouble(textField.getText());
                double result = 0;
                switch (operator) {
                    case "+":
                        result = firstOperand + secondOperand;
                        break;
                    case "-":
                        result = firstOperand - secondOperand;
                        break;
                    case "*":
                        result = firstOperand * secondOperand;
                        break;
                    case "/":
                        result = firstOperand / secondOperand;
                        break;
                    case "%":
                        result = firstOperand % secondOperand;
                        break;
                }
                textField.setText(String.valueOf(result));
            }
            if (!op.equals("=")) {
                firstOperand = Double.parseDouble(textField.getText());
                operator = op;
                isOperatorClicked = true;
            } else {
                operator = null;
            }
        }
    }

    private class ClearButtonListener implements ActionListener {
        @Override
        public void actionPerformed(ActionEvent e) {
            textField.setText("");
            firstOperand = 0;
            secondOperand = 0;
            operator = null;
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> new SimpleCalculator());
    }
}
