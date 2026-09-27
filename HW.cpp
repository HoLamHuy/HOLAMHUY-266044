
#include <iostream>
#include<stdio.h>
#include<math.h>
//Bài 1. Nhập vào một số nguyên n. In ra giá trị của n.

void bt1()
{
	int n = 0;
	printf(" nhap nguyen n: ");
	scanf_s("%d", &n);
	printf(" so nguyen n = %d\n", n);
};
//Bài 2. Nhập vào họ tên, tuổi và điểm trung bình của một sinh viên. In toàn bộ thông tin ra màn hình.

void bt2()
{
	int age;
	float dtb;
	char hvt[50];
	printf("nhap ho va ten cua sinh vien : ");
	fgets(hvt, sizeof(hvt), stdin);
	printf("nhap tuoi cua sinh vien: ");
	scanf_s("%d", &age);
	printf("nhap diem trung binh: ");
	scanf_s("%f", &dtb);
	printf(" Ho va ten : %s\n", hvt);
	printf(" Tuoi : %d\n", age);
	printf(" Diem trung binh : %f\n", dtb);

}
//Bài 3. Nhập vào hai số nguyên a và b. Tính và in ra tổng, hiệu, tích và thương của hai số.
void bt3()
{
	int a = 0, b = 0;
	printf("nhap so a: ");
	scanf_s("%d", &a);
	printf("nhap so b: ");
	scanf_s("%d", &b);
	printf(" tong   = %d\n", a + b);
	printf(" hieu   = %d\n", a - b);
	printf(" tich   = %d\n", a * b);
	printf(" thuong = %d\n", a / b);

}
//Bài 4. Nhập vào bán kính r của hình tròn. Tính chu vi và diện tích hình tròn.
void bt4()
{
	float pi = 3.14;
	int r = 0;
	printf(" nhap ban kinh R: ");
	scanf_s("%d", &r);
	printf("chu vi C    = %.3f\n", 2 * pi * r);
	printf("dien tich S = %.3f\n", 2 * pi * r * r);
}
//Bài 5. Nhập vào chiều dài và chiều rộng của hình chữ nhật. Tính diện tích và chu vi hình chữ nhật.
void bt5()
{
	int d = 0, r = 0;
	printf("nhap chieu dai cua hinh chu nhat : ");
	scanf_s("%d", &d);
	printf("nhap chieu rong cua hinh chu nhat: ");
	scanf_s("%d", &r);
	printf("Chu Vi C    = %d\n", 2 * (d + r));
	printf("Dien tich S = %d\n", d * r);

}
//Bài 6. Nhập vào một số nguyên n. Kiểm tra n là số dương, số âm hay bằng 0.
void bt6()
{
	int n;
	printf("nhap so Nguyen n: ");
	scanf_s("%d", &n);
	if (n > 0)
	{
		printf("n la so dương ");
	}
	else if (n < 0)
	{
		printf(" n la so am ");
	}
	else
	{
		printf(" bang 0");
	}
}
//Bài 7. Nhập vào một số nguyên n. Kiểm tra n là số chẵn hay số lẻ.
void bt7()
{
	int n;
	printf("nhap so n: ");
	scanf_s("%d", &n);
	n %= 2;
	if (n == 0)
	{
		printf(" so n la so chan ");
	}
	else
	{
		printf(" so n la so le ");
	}
}
//Bài 8. Nhập vào hai số nguyên a và b. Tìm và in ra số lớn hơn. Nếu hai số bằng nhau thì thông báo hai số bằng nhau.
void bt8()
{
	int a = 0, b = 0;
	printf(" nhap so a: ");
	scanf_s("%d", &a);
	printf(" nhap so b: ");
	scanf_s("%d", &b);
	if (a > b)
	{
		printf(" a=%d lon hon b ", a);
	}
	else if (a < b)
	{
		printf(" b=%d lon hon a", b);
	}
	else
	{
		printf(" hai so bang nhau : a=%D = b=%d", a, b);
	}
}
//Bài 9. Nhập vào ba số nguyên a, b, c. Tìm số lớn nhất trong ba số.
void bt9()
{
	int a = 0, b = 0, c = 0, max = 0;
	printf("nhap so a: ");
	scanf_s("%d", &a);
	printf("nhap so b: ");
	scanf_s("%d", &b);
	printf("nhap so c: ");
	scanf_s("%d", &c);
	max = a;
	if (b > max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}
	printf("So lon nhat la: %d", max);

}
//Bài 10. Nhập vào một số nguyên n. Kiểm tra n có chia hết cho cả 3 và 5 hay không.
void bt10()
{
	int n = 0;
	printf(" Nhap so n: ");
	scanf_s("%d", &n);
	int t1 = 0, t2 = 0, t3 = 0, t4 = 0;
	t1 = n / 10;
	t2 = n % 10;
	t3 = t1 + t2;
	t4 = n % 5;
	if (t3 == 3 || t3 == 6 || t3 == 9 && t4 == 0)
	{
		printf(" so n = %d chia het cho 3 va 5", n);
	}
	else if (t3 == 3 || t3 == 6 || t3 == 9 && t4 != 0)
	{
		printf(" so n = %d chia het cho 3 nhung khong chia het cho 5 ", n);
	}
	else if (t3 != 3 && t3 != 6 && t3 != 9 && t4 == 0)
	{
		printf(" so n = %d chia het cho 5 nhung khong chia het cho 3 ", n);

	}
	else
	{
		printf("so n = %d khong chia het cho ca hai so 3 va 5 ", n);
	}
}
//Bài 11. Nhập vào điểm của một sinh viên từ 0 đến 10. Xếp loại theo quy tắc:

//Từ 8 đến 10: Giỏi
//Từ 6.5 đến dưới 8 : Khá
//Từ 5 đến dưới 6.5 : Trung bình
//Dưới 5 : Yếu
void bt11()
{
	float d;
	printf(" nhap diem: ");
	scanf_s("%f", &d);
	if (d >= 8 && d <= 10)
	{
		printf(" gioi");
	}
	else if (d < 8 && d >= 6.5)
	{
		printf(" Kha");
	}
	else if (d >= 5 && d < 6.5)
	{
		printf(" trung binh");
	}
	else
	{
		printf("nhap sai diem vui long nhap lai");
	}
}
//Bài 12. Nhập vào một số nguyên từ 1 đến 7. In ra tên thứ tương ứng trong tuần. Nếu nhập ngoài khoảng thì thông báo dữ liệu không hợp lệ.
void bt12()
{
	int n = 0;
	printf(" nhap so n : ");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		printf(" MONDAY ");
		break;
	case 2:
		printf(" TUESDAY ");
		break;
	case 3:
		printf(" WEDNESDAY ");
		break;
	case 4:
		printf(" THURSDAY ");
		break;
	case 5:
		printf(" FRIDAY ");
		break;
	case 6:
		printf(" SATURDAY ");
		break;
	case 7:
		printf(" SUNDAY ");
		break;

	}
	if (n < 1 || n>7)
	{
		printf(" invalid data !!! ");
	}
}
//Bài 13. Nhập vào tháng và năm. Cho biết tháng đó có bao nhiêu ngày. Xử lý đúng trường hợp tháng 2 của năm nhuận.
void bt13()
{
	int m = 0, y = 0;
	printf("nhap thang: ");
	scanf_s("%d", &m);
	printf("nhap year: ");
	scanf_s("%d", &y);
	int x100 = 0, x4 = 0, x400 = 0;
	x100 = y % 100;
	x4 = y % 4;
	x400 = y % 400;
	switch (m)
	{
	case 1:	
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
    printf(" thang %d nam %d co: 31 ngay", m, y);
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf(" thang %d nam %d co: 30 ngay",m, y);
		break;
	

	}
	if (m == 2 && x4 == 0 && x100 != 0 || x400 == 0)
	{
		printf(" thang 2 nam %d co: 29 ngay.");
	}
	else if (m == 2 && x100 == 0)
	{
		printf(" thang 2 nam %d co: 28 ngay.");
	}
	
}
//Bài 14. Nhập vào ba số a, b, c. Kiểm tra ba số có thể tạo thành ba cạnh của một tam giác hay không.

void bt14()
{
	int a = 0, b = 0, c = 0;
	printf("nhap a: ");
	scanf_s("%d", &a);
	printf("nhap b: ");
	scanf_s("%d", &b);
	printf("nhap c: ");
	scanf_s("%d", &c);
	int x = 0, y = 0, z = 0;
	x = a + b;
	y = b + c;
	z = a + c;
	if (a <= 0 || b <= 0 || c <= 0)
	{
		printf(" chieu dai canh khong hop le !!!");
	}
	else if (x > c || y > a || z > b)
	{
		printf(" 3 canh vua nhap la ba canh cua TAMGIAC. ");
	}
}
//Bài 15. Nhập vào ba cạnh của một tam giác. Nếu là tam giác hợp lệ, hãy xác định đó là tam giác đều, tam giác cân, tam giác vuông hay tam giác thường.
void bt15()
{
	int a = 0, b = 0, c = 0;
	printf("nhap a: ");
	scanf_s("%d", &a);
	printf("nhap b: ");
	scanf_s("%d", &b);
	printf("nhap c: ");
	scanf_s("%d", &c);
	int x = 0, y = 0, z = 0;
	x = a + b;
	y = b + c;
	z = a + c;
	int m = 0, n = 0, q = 0;
	m = sqrt((a ^ 2) + (b ^ 2));
	n = sqrt((c ^ 2) + (b ^ 2));
	q = sqrt((c ^ 2) + (a ^ 2));
	if (a <= 0 || b <= 0 || c <= 0)
	{
		printf(" chieu dai canh khong hop le !!!");
	}
	else if (x > c || y > a || z > b)
	{
		if (a == b && b == c)
		{
			printf(" TAM GIAC DEU. ");
		}
		else if (a == b && a != c)
		{
			printf("TAM GIAC CAN. ");
		}
		else if (a == c && a != b)
		{
			printf("TAM GIAC CAN. ");
		}
		else if (c == b && a != c)
		{
			printf("TAM GIAC CAN. ");
		}
		else if (m == c || n == a || q == b)
		{
			printf(" TAM GIAC VUONG.");
		}
		else
		{
			printf(" TAM GIAC THUONG.");
		}
	}
}
//Bài 16. Nhập vào chỉ số điện tiêu thụ trong tháng. Tính tiền điện theo quy tắc:
//
//0–50 kWh : 1.800đ / kWh
//51–100 kWh : 2.000đ / kWh
//101–200 kWh : 2.500đ / kWh
//Trên 200 kWh : 3.000đ / kWh
void bt16()
{
	int t = 0;
	float k = 0;
	printf(" nhap so dien: ");
	scanf_s("%f", &k);
	if (k < 0)
	{
		printf(" nhap sai du lieu!!!");
	}
	if (k == 0)
	{
		t = 0;
		printf(" so tien dien la : %dVND.\n", t);
	}
	else if (k <= 50)
	{
		t = k * 1800;
		printf(" so tien dien la : %dVND.\N", t);
	}
	else if (k <= 100)
	{
		t = 50 * 1800 + (k - 50) * 2000;
		printf(" so tien dien la : %dVND.\n", t);
	}
	else if (k <= 200)
	{
		t = 50 * 1800 + (50) * 2000 + (k - 100) * 2500;
		printf(" so tien dien la : %dVND.\n", t);
	}
	else if (k > 200)
	{
		t = 50 * 1800 + (50) * 2000 + 100 * 2500 + (k - 200) * 3000;
		printf(" so tien dien la : %dVND.\n", t);
	}
	else
	{
		printf(" nhap sai du lieu!!!");
	}
}
//Bài 17. Nhập vào số tiền mua hàng. Tính số tiền khách phải thanh toán sau khi giảm giá:
//
//Dưới 500.000đ: không giảm
//Từ 500.000đ đến dưới 1.000.000đ : giảm 5 %
//Từ 1.000.000đ đến dưới 2.000.000đ : giảm 10 %
//Từ 2.000.000đ trở lên : giảm 15 %
void bt17()
{
	float t = 0;
	float g = 0;
	printf(" Nhap so tien mua hang: ");
	scanf_s("%f", &t);
	if (t <= 0)
	{
		printf(" sai so tien!!!@@@###\n");
	}
	else if (t < 500000)
	{
		printf(" so tien quy khach phai thanh toan la :%fVND.\n", t);
	}
	else if (t < 1000000)
	{
		g = t * 0.95;
		printf("Quy khach duoc giam gia 5% !\n");
		printf("Tien truoc khi giam gia: %.3fVND.\n", t);
		printf("Tong tien phai thanh toan: %.3fVND.\n", g);
	}
	else if (t < 2000000)
	{
		g = t * 0.90;
		printf("Quy khach duoc giam gia 10% !\n");
		printf("Tien truoc khi giam gia: %.3fVND.\n", t);
		printf("Tong tien phai thanh toan: %.3fVND.\n", g);
	}
	else if (t >= 2000000)
	{
		g = t * 0.85;
		printf("Quy khach duoc giam gia 15 phan tram% !\n");
		printf("Tien truoc khi giam gia: %.3fVND.\n", t);
		printf("Tong tien phai thanh toan: %.3fVND.\n", g);
	}

}

//Bài 18. Nhập vào số tiền lương của một nhân viên. Tính thuế thu nhập theo quy tắc:

//Lương dưới 10 triệu: không đóng thuế
//Từ 10 đến dưới 20 triệu : thuế 10 %
//Từ 20 đến dưới 30 triệu : thuế 15 %
//Từ 30 triệu trở lên : thuế 20 %
//In ra tiền thuế và tiền lương thực nhận.
void bt18()
{
	float s = 0;
	float t = 0, tax = 0;
	printf(" nhap so tien LUONG: ");
	scanf_s("%f", &s);
	if (s <= 0)
	{
		printf(" ??? !!! ### ");
	}
	else if (s < 10000000)
	{
		printf(" Poor person no Tax !!!");
	}
	else if (s < 20000000)
	{
		tax = 0.1 * s;
		t = s - tax;
		printf("Tax = %.3fVND.\n", tax);
		printf("Salary after tax = %.3fVND.", t);
	}
	else if (s < 30000000)
	{
		tax = 0.15 * s;
		t = s - tax;
		printf("Tax = %.3fVND.\n", tax);
		printf("Salary after tax = %.3fVND.", t);
	}
	else if (s >= 30000000)
	{
		tax = 0.2 * s;
		t = s - tax;
		printf("Tax = %.3fVND.\n", tax);
		printf("Salary after tax = %.3fVND.", t);
	}
}
//Bài 19. Nhập vào ba số nguyên a, b, c và một phép toán +, -, *, /
// . Thực hiện phép tính tương ứng. Nếu phép toán không hợp lệ hoặc phép chia có mẫu số bằng 0 thì thông báo lỗi.
void bt19()
{
	int a = 0, b = 0, c = 0;
	char pheptoan;
	printf("nhap a: ");
	scanf_s("%d", &a);
	printf("nhap b: ");
	scanf_s("%d", &b);
	printf("nhap c: ");
	scanf_s("%d", &c);
	printf("nhap phep toan( +, -, *, /) : ");
	scanf_s(" %c", &pheptoan, 1);
	switch (pheptoan)
	{
	case '+':
		printf(" a + b + c = %d\n ", a + b + c);
		break;
	case '-':
		printf("a - b - c = %d\n ", a - b - c);
		break;
	case '*':
		printf(" a*b*c = %d\n", a * b * c);
		break;
	case '/':
		if (b == 0 || c == 0)
		{
			printf(" loi phep tinh !!! \n");

		}
		else
		{
			printf(" a/b/c= %d", a / b / c);

		}
		break;
	default:
		printf("Phep toan khong hop le!\n");
	}
}

//	
//Bài 20. Viết chương trình nhập vào số điện tiêu thụ và số nước tiêu thụ của một hộ gia đình.
//Tính tổng tiền phải trả, trong đó tiền điện và tiền nước được tính theo các bậc giá khác nhau.
//Sau đó áp dụng thêm mức giảm giá 5 % nếu tổng hóa đơn từ 2.000.000đ trở lên.In ra chi tiết tiền điện, tiền nước, tiền giảm giá và tổng tiền phải thanh toán.
//Mức tiêu thụ nước	Giá bán chung(VNĐ / m³)	
//Đến 4 m³ / người / tháng	6.700	
//Trên 4 m³ đến 6 m³ / người / tháng	12.900	
//Trên 6 m³ / người / tháng	14.400	
void bt20()
{
	int te = 0, tw = 0;
	int tong = 0, dis = 0, t = 0;
	float k = 0, m = 0;
	printf(" nhap so dien: ");
	scanf_s("%f", &k);
	printf(" nhap so nuoc : ");
	scanf_s("%f", &m);
	if (k < 0)
	{
		printf("nhap sai du lieu!!!");
	}
	if (k == 0)
	{
		te = 0;
		printf("so tien dien la : %dVND.\n", te);
	}
	else if (k <= 50)
	{
		te = k * 1800;
		printf("so tien dien la : %dVND.\n", te);
	}
	else if (k <= 100)
	{
		te = 50 * 1800 + (k - 50) * 2000;
		printf("so tien dien la : %dVND.\n", te);
	}
	else if (k <= 200)
	{
		te = 50 * 1800 + (50) * 2000 + (k - 100) * 2500;
		printf("so tien dien la : %dVND.\n", te);
	}
	else if (k > 200)
	{
		te = 50 * 1800 + (50) * 2000 + 100 * 2500 + (k - 200) * 3000;
		printf("so tien dien la : %dVND.\n", te);
	}
	else
	{
		printf("nhap sai du lieu!!!");
	}
	if (m < 0)
	{
		printf("nhap sai du lieu NUOC !!!");
	}
	else if (m <= 4)
	{
		tw = m * 6700;
		printf("so tien nuoc la: %dVND.\n.", tw);
	}
	else if (m <= 6)
	{
		tw = 4 * 6700 + (m - 4) * 12.900;
		printf("so tien nuoc la: %dVND.\n", tw);
	}
	else
	{
		tw = 4 * 6700 + (2) * 12.900 + (m - 6) * 14.400;
		printf("so tien nuoc la: %dVND.\n", tw);
	}
	t = tw + te;
	if (t >= 2000000)
	{
		dis = t * 0.05;
		printf("tien giam : %dVND.\n", dis);
	}
	tong = t - dis;
	printf("tong tien phai tra: %dVND.\n", tong);
}
void main()
{
	bt13();
}