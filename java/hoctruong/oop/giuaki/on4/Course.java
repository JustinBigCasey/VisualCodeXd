
class Course {

    private String courseId;
    private String courseName;
    private int credits;
    private double baseTuitionPerCredit;

    public Course(String courseId, String courseName, int credits, double baseTuitionPerCredit) {

        this.courseId = courseId;
        this.courseName = courseName;
        this.credits = credits;
        this.baseTuitionPerCredit = baseTuitionPerCredit;
        

    }

    public double calculateTotalTuition() {

        double sum = credits * baseTuitionPerCredit;

        if (credits >= 4) {
            sum = sum * 1.1;
        }

        return sum;
    }

    public String getCourseLevel() {
        if (credits >= 4) {
            return "HEAVY";
        } else if (credits == 3) {
            return "MEDIUM";
        } else {
            return "LIGHT";
        }
    }

    public boolean isHighCostCourse() {
        return calculateTotalTuition() >= 3000000.0;
    }

    public Course adjustTuition(double rate) {
        return new Course(courseId, courseName, credits, baseTuitionPerCredit * (1 + rate));
    }

    @Override
    public String toString() {
        return "Course[" + courseId + ", " + courseName + ", " + credits + ", " + calculateTotalTuition() + ", " + getCourseLevel() + "]";
    }

}
