
class Nhanvien {

    protected String maNV;
    protected double luongCB;

    public Nhanvien(String maNV, double luongCB) {

        this.maNV = maNV;
        this.luongCB = luongCB;

    }

    public String getMaNV() {
        return maNV;
    }

    public double tinhLuong(int soNgay) {
        return luongCB * soNgay;
    }

}
