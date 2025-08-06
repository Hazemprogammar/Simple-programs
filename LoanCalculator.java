import java.util.Scanner;

public class LoanCalculator {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter loan amount: ");
        double loanAmount = input.nextDouble();

        System.out.print("Enter annual interest rate (e.g., 5 for 5%): ");
        double interestRate = input.nextDouble();

        System.out.print("Enter loan period in years: ");
        int loanPeriod = input.nextInt();

        Loan loan = new Loan(loanAmount, interestRate, loanPeriod);

        System.out.printf("Monthly payment: $%.2f%n", loan.getMonthlyPayment());
        System.out.printf("Total payment: $%.2f%n", loan.getTotalPayment());

        input.close();
    }
          }
