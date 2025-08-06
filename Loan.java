public class Loan {
    private double loanAmount;
    private double annualInterestRate;
    private int loanPeriodYears;

    private double monthlyPayment;
    private double totalPayment;

    public Loan(double loanAmount, double annualInterestRate, int loanPeriodYears) {
        this.loanAmount = loanAmount;
        this.annualInterestRate = annualInterestRate;
        this.loanPeriodYears = loanPeriodYears;
        calculatePayments();
    }

    private void calculatePayments() {
        double monthlyInterestRate = annualInterestRate / 100 / 12;
        int numberOfPayments = loanPeriodYears * 12;

        if (monthlyInterestRate == 0) {
            monthlyPayment = loanAmount / numberOfPayments;
        } else {
            monthlyPayment = (loanAmount * monthlyInterestRate) /
                    (1 - Math.pow(1 + monthlyInterestRate, -numberOfPayments));
        }

        totalPayment = monthlyPayment * numberOfPayments;
    }

    public double getMonthlyPayment() {
        return monthlyPayment;
    }

    public double getTotalPayment() {
        return totalPayment;
    }
  }
