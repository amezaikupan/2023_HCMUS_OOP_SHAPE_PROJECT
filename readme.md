# Đồ án Shape - Lập trình hướng đối tượng 21_3
MSSV: 21120308  
Họ và tên: Phạm Lê Tú Nhi  
Email: pltnhi11@gmail.com
## Về cấu trúc dự án và yêu cầu biên dịch
---
### 1. Cấu trúc đồ án
Đồ án được thiết kết theo sơ đồ file sau:

```
└── Source code
    ├── Shape
        ├── Object.h
        ├── Object.cpp
        ├── IShape.h
        ├── IShape.cpp
        ├── IParser.h
        ├── IParser.cpp
        ├── ParserFactory.h
        ├── ParserFactory.cpp
        ├── Circle.h
        ├── Circle.cpp
        ├── CircleParser.h
        ├── CircleParser.cpp
        ├── Rectangle.h
        ├── Rectangle.cpp
        ├── RectangleParser.h
        ├── RectangleParser.cpp
        ├── RegularHexagon.h
        ├── RegularHexagon.cpp
        ├── RegularHexagonParser.h
        ├── RegularHexagonParser.cpp
        ├── RegularOctagon.h
        ├── RegularOctagon.cpp
        ├── RegularOctagonParser.h
        ├── RegularOctagonParser.cpp
        ├── RegularPentagon.h
        ├── RegularPentagon.cpp
        ├── RegularPentagonParser.h
        ├── RegularPentagonParser.cpp
        ├── Square.h
        ├── Square.cpp
        ├── SquareParser.h
        ├── SquareParser.cpp
        ├── Triangle.h
        ├── Triangle.cpp
        ├── TriangleParser.h
        ├── TriangleParser.cpp
        ├── FileHandler.h
        ├── FileHandler.cpp
        ├── PrintHandler.h
        └── PrintHandler.cpp
    ├── Unit Test
        ├── pch.h
        ├── pch.cpp
        ├── ParserFactoryTest.cpp
        ├── CircleTest.cpp
        ├── CircleParser.cpp
        ├── Rectangle.cpp
        ├── RectangleParser.cpp
        ├── RegularHexagon.cpp
        ├── RegularHexagonParser.cpp
        ├── RegularOctagon.cpp
        ├── RegularOctagonParser.cpp
        ├── RegularPentagon.cpp
        ├── RegularPentagonParser.cpp
        ├── SquareTest.cpp
        ├── SquareTestParser.cpp
        ├── TriangleTest.cpp
        └── TriangleParserTest.cpp
└── Release
        ├── data.txt
        └── Shape.exe
└── readme.txt
```
**Shape Directory**  
Trong folder Shape chứa các file:
- Các lớp ảo, các lớp hình được thừa kế, lớp Factory và các lớp parse dữ liệu cho các lớp hình.
- Các lớp chức năng đọc file, in dữ liệu.

Trong folder UnitTest chứa các file:
- Các lớp Test (sử dụng Microsoft Framework) các lớp hình và parser của nó.   

**Release Directory**
- File data.txt có chứa dữ liệu dùng để chạy file.
- Shape.exe là file execuable của chương trình.

### 2. Yêu cầu biên dịch và thông tin hệ thống  

**Yêu cầu biên dịch**  
Chương trình Shape.exe cần đọc dữ liệu từ file data.txt để biên dịch. Thông tin này đã được cung cấp đầy đủ trong folder Release.

**Thông tin hệ thống**  
Hệ điều hành: Window 10 Home Single Language.  
IDE: Visual Studio 2022.  
Ngôn ngữ: C++ 20.
## Về chức năng
---
### 1. Các chức năng đã hoàn thiện
- Sử dụng phương pháp lập trình hướng đối tượng.
- Đọc danh sách các đối tượng in trong tập file theo đúng định dạng.
- In thông tin các đối tượng ra màn hình (dạng bình thường và sắp xếp theo diện tích).
- Sử dụng các mẫu thiết kế design pattern: 
    - Singleton: Sử dụng cho lớp ParserFactory.
    - Factory: Sử dụng cho lớp ParserFactory.
    - Strategy: Sử dụng cho các lớp Parser (thừa kế từ IParser).
    - Nguyên tắc dependency injection: Inject bằng cách thêm Parsers vào ParserFactor tại hàm main.
- Sử dụng con trỏ thông minh để giải quyết vấn đề.
- Bắt lỗi các xử lí ngoại lệ.
- Bổ sung các đối tượng hình học khác (RegularHexagon, RegularPentagon, RegularOctagon).
- Bổ sung Unit Test cho tất cả các lớp trong chương trình - trừ lớp PrintHandler phụ trách in vào console vì các hàm thuộc tính không trả về giá trị.
- Tự phát tại liệu mô tả hệ thống. (Sử dụng Doxygen).
- Comment đầy đủ ý nghĩa các hàm trong mã nguồn.

### 2. Các chức năng chưa hoàn thiện
- Không.
### 3. Các chức năng không thực hiện
- Tách các đối tượng thành thư viện liên kết động. (dll).

## Về kiến thức đã tìm hiểu
-------
### 1. Về các mẫu thiết kế Design Pattern 

Khi học về OOP, lúc đầu mới vào em sẽ không có biết được về các khái niệm và phương thức hoạt động của kĩ thuật OOP. Sau này khi đã học được hết các kiến thức cần thiết em nhận ra được sự thiếu sót của OOP - sự không đồng nhất, lãng phí (lặp đi lặp lại một mẫu code cùng cấp) và cả về các bài toán khó hoặc không thể giải được một cách gọn gàng. Lúc này em mới nhận ra sự cần thiết của một sự thống nhất trong kĩ thuật.

Sau khi tìm hiểu về các mẫu Design Pattern cho đồ án, em đã có được một hiểu biết rộng hơn dù không toàn diện về các mẫu Design Patter. Sau đây em muốn trình bày một số điểm kiến thức thú vị em đã tìm hiểu được:

- Mẫu singleton: Được sử dụng nếu muốn một lớp chỉ có một instance. Sử dụng khi muốn chương trình chỉ có 1 single-source-of-truth.
    - Điểm mạnh: Tiết kiệm bộ nhớ. 
    - Điểm yếu: Khó thực hiện Unit Test (khi test cũng sử dụng 1 instance giống nhau).
    - Một số ví dụ về sử dụng singleton: Lớp có chứ seed cho random, lớp cho Factory (vì Factory cũng có kết hợp với Singleton).

- Mẫu Factory: Không nên nhầm lần với mẫu Abstract Factory (tạo ra Factory). Mẫu Factory được dùng khi muốn tạo ra một instance của một loại lớp dựa vào điều kiện cụ thể - giống như một nhà máy sản xuất. Người phát triển sẽ yêu cầu một loại dụng cụ cụ thể và không cần biết được thao tác tạo ra dụng cụ đó - nhà máy sẽ đảm bảo thực hiện.
    - Điểm mạnh: Dễ mở rộng chương trình và module hóa. Dễ bảo trì và update.
    - Điểm yếu: Phức tạp để lập trình hơn và cần tạo nhiều file hơn.
    - Một số ví dụ về việc sử dụng mẫu Factory: Lớp quản lí parser, lớp quản lí loại bánh...
    
- Mẫu Strategy: Mẫu được sử dụng khi muốn tạo ra một nhóm gia đình lớp với vai trò giống nhau nhưng có tác dụng khác nhau - như nhóm gia đình Hoạt động thể thao thì có chạy bộ, bơi...
    - Điểm mạnh: Có thể thay đổi thuật toán trong lúc chạy chương trình.
    - Điểm yếu: Số lượng lớp trong nhóm không được quá ít; Người dùng phải biết được có lớp nào để lựa chọn.
    - Một số ví dụ về việc sử dụng mẫu Strategy: Các lớp parser, các lớp thuật toán sắp xếp khác nhau...

### 2. Về Unit Test và thao tác sử dụng Chat GPT trong testing
Việc sử dụng Unit Test là một thác tác mới đối với em. Kĩ thuật này khá là thú vị dùng để test rất nhanh code của mình mà không cần chạy code và kiểm tra console. 

Một trong những việc em đã học được trong quá trình học viết và test bằng Unit Test là việc sử dụng AI (Chat GPT) trong việc tìm các trường hợp test và hỗ trợ viết test. Generative AI có khả năng tiếp xúc với lượng thông tin rất lớn nên rất hiệu quả trong ideation (các trường hợp test).

Cụ thể, tuy code của Chat GPT rất nhiều trường hợp không đúng (tức là code sai syntax hoàn toàn), ý tưởng code thường có giá trị test. Việc chỉnh sửa để code không bị vấp và chạy được bình thường là công việc của nhà phát triển.

Em nghĩ việc sử dụng AI trong programming và testing sẽ rất phát triển trong tương lai, và là một kiến thức giá trị để có.

### 3. Về SOLID
Trong quá trình học OOP, em đã tìm hiểu ra được các rule - quy định trong coding mà em thấy rất thú vị và có tính áp dụng. Cụ thể, các nguyên lý đó chính là SOLID:
- Single responsity principle: Mỗi lớp chỉ nên chịu trách nhiệm về một nhiệm vụ cụ thể. Nghĩa mỗi lớp nên chỉ chịu trách nhiệm về một chức năng duy nhất.
- Open/Close principle: Một lớp nên được mở để mở rộng nhưng đóng khi sửa đổi. Tức là hạn chế sửa đổi class và module có sẵn và nên ưu tiên mở rộng chúng. Suy nghĩ theo nguyên lý này cũng yêu cầu người lập trình phải suy nghĩ đến bảo trì và mở rộng của chươn trình.
- Liskov Substitution: Kiểu con có thể thay thế kiểu cơ sở. Một trong những ví dụ phổ biến nhất về Liskov Substitution là vấn đề hình vuông/hình chữ nhật. Em thấy rằng LSP muốn người lập trình chú ý đến mô hình code của mình, và để ý nếu các lớp con có thật sự là con của một lớp cha hay không. 
- Interface Segregation: Hiểu đơn giản là người dùng (client) không nên phụ thuộc vào phương thức mà họ không cần. Tức là nếu một interface có quá nhiều phương thức và nhiều loại client sử dụng các phương thức đó thì nên chia ra (segregation) các interface khác. Các client sẽ sử dụng các interface và phương thức họ cần dùng thay vì sử dụng một phần của một lớp lớn.
- Dependency Inversion: Các module cấp cao không nên phụ thuộc vào các module cấp thấp và ngược lại. Nói một cách khác, mỗi thành phần trong hệ thống chỉ nên phụ thuộc vào các abstractions, không nên phụ thuộc vào các concretions hoặc implementations cụ thể. Ví dụ như các thành phần trên mainboard không thể kết nối với nhau nhưng kết nối với mainboard để thực hiện các công việc của chúng.

Có một số các principle khác mà em thấy cũng rất thú vị, như:
- DRY: Don't repeat yourself.
- KISS: Keep it simple stupid. 

Em nhận thấy mình chưa có đủ kinh nghiệm để áp dụng hoặc thành thạo trong việc tuân thủ các quy định, nguyên lý trên, nhưng việc biết về chúng và ý tưởng của chúng khiến cho các suy luận trong lập trình của em tốt hơn và dễ dàng hơn. Em nhận thấy đây là một số các ý tưởng cần được học và áp dụng nhiều hơn trong tương lai. 

## Thanks and acknoledments
---
Em xin cảm ơn thầy Trần Duy Quang vì đã làm một giảng viên rất cởi mở và thoái mái, nhân nhượng. Em học không được nhanh như các bạn nên em rất cảm kích vì thầy sẽ giảng từ từ và thường giảng lại từ đầu nếu sinh viên không hiểu. Em cũng thích hạn bài tập môn học khá là dài nên em không bị áp lực deadline và cũng có nhiều thời gian để tìm hiểu các nội dung hơn. 

Em cũng muốn gửi lời cảm ơn thầy Lê Tuấn Thu là giảng viên môn thực hành OOP của mình. Thầy là người kiên nhẫn và hào phóng với sinh viên, và em rất cảm kích vì điều đó. 

