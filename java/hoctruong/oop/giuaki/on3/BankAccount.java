
class BankAccount {

    private String accountNumber;
    private String holderName;
    private double balance;
    private double interestRate;

    public BankAccount(String accountNumber, String holderName, double balance, double interestRate) {
        this.accountNumber = accountNumber;
        this.holderName = holderName;
        this.balance = balance;
        this.interestRate = interestRate;
    }

    public String getAccountNumber() {
        return this.accountNumber;
    }

    public String getHolderName() {
        return this.holderName;
    }

    public double getBalance() {
        return this.balance;
    }

    public double getInterestRate() {
        return this.interestRate;
    }

    public void setAccountNumber(String accountNumber) {
        this.accountNumber = accountNumber;
    }

    public void setHolderName(String holderName) {
        this.holderName = holderName;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }

    public void setInterestRate(double interestRate) {
        this.interestRate = interestRate;
    }

    public double calculateAnnualInterest() {
        return this.balance * this.interestRate;
    }

    public String getTier() {
        if (balance >= 100000000.0) {
            return "PLATINUM";
        } else if (balance >= 20000000.0) {
            return "GOLD";
        } else {
            return "SILVER";
        }
    }

    public boolean canWithdraw(double amount) {
        return amount > 0 && (balance - amount) >= 50000;
    }

    public BankAccount applyBonusRate(double extraRate) {
        return new BankAccount(this.accountNumber, this.holderName, this.balance, this.interestRate + extraRate);
    }

    @Override
    public String toString() {
        return "BankAccount[" + accountNumber + ", " + holderName + ", " + balance + ", " + interestRate + ", " + getTier() + "]";
    }

}
