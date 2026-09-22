
class QuanLy extends Nhanvien {

    private double phuCap;

    public QuanLy() {

        super("N001", 2000);
        phuCap = 1000;

    }

    public QuanLy(String maNV, double luong, double phuCap) {
        super(maNV, luong);
        this.phuCap = phuCap;
    }

    public double getPhuCap() {
        return phuCap;
    }

    @Override
    public double tinhLuong(int soNgay) {
        return super.tinhLuong(soNgay) + phuCap;
    }

}
