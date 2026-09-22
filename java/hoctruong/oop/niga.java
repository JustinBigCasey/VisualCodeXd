
public class niga {

    public static void main(String[] args) {

        Nhanvien nv = new Nhanvien("A001", 2000);

        System.out.println(nv.getMaNV());

        QuanLy ql = new QuanLy();

        System.out.println(ql.getPhuCap());
        System.out.println(ql.getMaNV());
        System.out.println(ql.tinhLuong(10));

        Nhanvien nv1 = new QuanLy("A002", 2000, 1500);

        System.out.println(nv1.getMaNV());
        System.out.println(nv1.tinhLuong(10));

        QuanLy ql1 = (QuanLy) nv1;

        System.out.println(ql1.getPhuCap());

        Nhanvien[] ho = {nv, ql, nv1};

    }

}
