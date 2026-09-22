
class Employee {

    private String empId;
    private String fullName;
    private double baseSalary;
    private double performanceScore;

    public Employee(String empId, String fullName, double baseSalary, double performanceScore) {

        this.empId = empId;
        this.fullName = fullName;
        this.baseSalary = baseSalary;
        this.performanceScore = performanceScore;

    }

    public String getEmpId() {
        return this.empId;
    }

    public String getFullName() {
        return this.fullName;
    }

    public double getBaseSalary() {
        return this.baseSalary;
    }

    public double getPerformanceScore() {
        return this.performanceScore;
    }

    public void setEmpId(String empId) {
        this.empId = empId;
    }

    public void setFullName(String fullName) {
        this.fullName = fullName;
    }

    public void setBaseSalary(double baseSalary) {
        this.baseSalary = baseSalary;
    }

    public void setPerformanceScore(double performanceScore) {
        this.performanceScore = performanceScore;
    }

    public double calculateNetSalary() {
        if (performanceScore >= 85.0) {
            return baseSalary * 1.20;
        } else if (performanceScore >= 50.0) {
            return baseSalary * 1.0;
        } else {
            return baseSalary * 0.85;
        }
    }

    public String getGrade() {
        if (performanceScore >= 90.0) {
            return "EXCELLENT";
        } else if (performanceScore >= 75.0) {
            return "GOOD";
        } else if (performanceScore >= 50.0) {
            return "AVERAGE";
        } else {
            return "POOR";
        }
    }

    public boolean isEligibleForPromotion() {
        return performanceScore >= 85.0 && baseSalary < 20000000.0;
    }

    public Employee raiseSalary(double percentage) {

        return new Employee(this.empId, this.fullName, this.baseSalary * (1.0 + percentage), this.performanceScore);

    }

    @Override
    public String toString() {
        return "Employee[" + this.empId + ", " + this.fullName + ", " + this.baseSalary + ", " + calculateNetSalary() + ", " + getGrade() + "]";
    }

}
