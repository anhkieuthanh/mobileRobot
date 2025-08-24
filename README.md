Robot Di động (Mobile Robot)
Dự án này tập trung vào việc thiết kế, chế tạo và lập trình một robot di động có khả năng di chuyển và tương tác với môi trường xung quanh.

📜 Tổng quan

Đây là một nền tảng robot di động được xây dựng với mục tiêu học tập và nghiên cứu trong lĩnh vực robot học, hệ thống nhúng và điều khiển tự động. Robot được trang bị các cảm biến để nhận biết môi trường và cơ cấu chấp hành để di chuyển. Việc điều khiển có thể được thực hiện từ xa hoặc lập trình để robot hoạt động một cách tự율.

✨ Tính năng chính

Khung gầm linh hoạt: Thiết kế khung gầm (2WD hoặc 4WD) cho phép di chuyển linh hoạt trên nhiều bề mặt.

Điều khiển từ xa: Có khả năng được điều khiển thông qua Wi-Fi hoặc Bluetooth từ máy tính hoặc điện thoại thông minh.

Tránh vật cản: Sử dụng cảm biến (siêu âm, hồng ngoại) để phát hiện và tự động tránh các vật cản trên đường đi.

(Tùy chọn) Dò đường (Line Following): Di chuyển theo một vạch kẻ được định sẵn trên sàn.

(Tùy chọn) Lập bản đồ và Định vị (SLAM): Có khả năng xây dựng bản đồ môi trường và xác định vị trí của nó trong bản đồ đó.

Nền tảng mở rộng: Dễ dàng tích hợp thêm các cảm biến và cơ cấu chấp hành khác (cánh tay robot, camera, v.v.).

🛠️ Kiến trúc Hệ thống
Hệ thống được chia thành hai cấp chính:

Cấp Thấp (Low-Level Control):

Vi điều khiển (ví dụ: Arduino, ESP32): Chịu trách nhiệm giao tiếp trực tiếp với phần cứng.

Đọc dữ liệu thô từ các cảm biến (encoder, siêu âm, IMU).

Điều khiển động cơ thông qua mạch cầu H (L298N, L293D).

Thực thi các lệnh điều khiển cơ bản (đi tới, lùi, xoay).


⚙️ Yêu cầu
Phần cứng
Khung xe robot: 2WD hoặc 4WD, bao gồm động cơ DC và bánh xe.

Vi điều khiển: Arduino Uno/Mega hoặc ESP32.

Driver động cơ: Mạch cầu H L298N.

Cảm biến:

Cảm biến khoảng cách siêu âm HC-SR04.

Encoder để đo tốc độ và quãng đường.

Cảm biến IMU (MPU-6050) để đo góc quay.

Nguồn điện: Pin sạc AA và mạch ổn áp.

Phần mềm
Arduino IDE hoặc PlatformIO.

🤝 Đóng góp

Nếu bạn có ý tưởng để cải thiện dự án, vui lòng tạo một Pull Request hoặc mở một Issue. Mọi đóng góp đều được hoan nghênh!
